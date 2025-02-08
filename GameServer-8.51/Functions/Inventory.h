#pragma once

namespace Inventory
{
	void (*OnReload)(AFortWeapon* Weapon, int Count);
	char (*TestDropItem)(__int64 a1, __int64 a2);
	void (*PickupDelay)(AFortPickup* Pickup);

	void UpdateInventory(AFortPlayerController* PlayerController)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (WorldInventory)
		{
			WorldInventory->HandleInventoryLocalUpdate();
			WorldInventory->Inventory.MarkArrayDirty();
		}
	}

	FFortBaseWeaponStats* GetWeaponStats(UFortWeaponItemDefinition* ItemDefinition)
	{
		FFortBaseWeaponStats OutRow;

		bool bWeaponStats = Globals::GetKismetLibrary()->GetWeaponStatsRow(ItemDefinition->WeaponStatHandle, &OutRow);

		if (bWeaponStats)
			return &OutRow;

		return nullptr;
	}

	/*FFortItemEntry* CreateItemEntry(UFortWorldItemDefinition* ItemDefinition, int Count, int LoadedAmmo)
	{
		FFortBaseWeaponStats* WeaponStats = GetWeaponStats((UFortWeaponItemDefinition*)ItemDefinition);
		FFortItemEntry* ItemEntry = nullptr;

		HLog("WeaponStats->BaseLevel: " << WeaponStats->BaseLevel);
		HLog("WeaponStats->DurabilityRowName: " << WeaponStats->DurabilityRowName.ToString());
		HLog("WeaponStats->DurabilityScale: " << WeaponStats->DurabilityScale);
		HLog("WeaponStats->DurabilityPerUse: " << WeaponStats->DurabilityPerUse);

		ItemEntry->Count = Count;
		ItemEntry->PreviousCount = -1;
		ItemEntry->ItemDefinition = ItemDefinition;
		ItemEntry->Durability;
		ItemEntry->Level;
		ItemEntry->LoadedAmmo = (WeaponStats && LoadedAmmo == -1) ? WeaponStats->ClipSize : LoadedAmmo;
		ItemEntry->bIsDirty = false;
		ItemEntry->bUpdateStatsOnCollection = true;
		ItemEntry->ParentInventory.ObjectIndex = -1;
		ItemEntry->GameplayAbilitySpecHandle = FGameplayAbilitySpecHandle(-1);

		return ItemEntry;
	}*/

	AFortPickupAthena* SpawnItem(UFortItemDefinition* ItemDefinition, FFortItemEntry ItemEntry, int LoadedAmmo, EFortPickupSourceTypeFlag SourceTypeFlag, EFortPickupSpawnSource SpawnSource, AFortPawn* Pawn, FVector Location)
	{
		AFortPickup* FortPickup = Util::SpawnActor<AFortPickup>(AFortPickup::StaticClass(), Location, FRotator());

		if (Pawn)
			FortPickup->PawnWhoDroppedPickup = Pawn;

		FortPickup->bRandomRotation = true;

		FFortItemEntry* PrimaryPickupItemEntry = &FortPickup->PrimaryPickupItemEntry;

		PrimaryPickupItemEntry->LoadedAmmo = LoadedAmmo;
		PrimaryPickupItemEntry->ItemDefinition = ItemDefinition;
		PrimaryPickupItemEntry->Count = ItemEntry.Count;

		FortPickup->TossPickup(Location, Pawn, 0, true, SourceTypeFlag, SpawnSource);

		return (AFortPickupAthena*)FortPickup;
	}

	UFortWorldItem* AddInventoryItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, bool bUseItemEntry = false, FFortItemEntry ItemEntry = FFortItemEntry())
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (WorldInventory && Count > 0)
		{
			UFortWorldItem* WorldItem = (UFortWorldItem*)ItemDefinition->CreateTemporaryItemInstanceBP(Count, 0);
			FFortBaseWeaponStats* WeaponStats = GetWeaponStats((UFortWeaponItemDefinition*)ItemDefinition);

			if (WorldItem)
			{
				WorldItem->SetOwningControllerForTemporaryItem(PlayerController);

				if (bUseItemEntry)
					WorldItem->ItemEntry = ItemEntry;
					
				if (WeaponStats)
					HLog("WeaponStats->ClipSize: " << WeaponStats->ClipSize);

				WorldItem->ItemEntry.LoadedAmmo = (LoadedAmmo == -1 && WeaponStats) ? WeaponStats->ClipSize : LoadedAmmo;
				WorldItem->ItemEntry.Count = Count;
				WorldInventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
				WorldInventory->Inventory.ItemInstances.Add(WorldItem);

				WorldInventory->Inventory.MarkItemDirty(WorldItem->ItemEntry);

				return WorldItem;
			}
		}

		return nullptr;
	}

	UFortWorldItem* GetItemInstance(AFortPlayerController* PlayerController, FGuid Guid, bool bVerifMaxStackSize = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() == Guid)
			{
				UFortItemDefinition* ItemDefinition = ItemInstance->GetItemDefinitionBP();

				if (ItemDefinition && ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize && bVerifMaxStackSize)
					continue;

				return ItemInstance;
			}
		}

		return nullptr;
	}

	FGuid GetItemGuid(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, bool bVerifMaxStackSize = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemDefinitionBP() == ItemDefinition)
			{
				if (ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize && bVerifMaxStackSize)
					continue;

				return ItemInstance->GetItemGuid();
			}
		}

		return FGuid();
	}

	void SetupInventory(AFortPlayerController* PlayerController, UFortWeaponMeleeItemDefinition* PickaxeDefinition)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;
		AFortGameModeAthena* GameMode = Globals::GetGameMode();

		if (WorldInventory && GameMode)
		{
			TArray<FItemAndCount> StartingItems = GameMode->StartingItems;

			for (int i = 0; i < StartingItems.Num(); i++)
			{
				FItemAndCount StartingItem = StartingItems[i];

				AddInventoryItem(PlayerController, StartingItem.Item, StartingItem.Count, -1);
			}

			if (PickaxeDefinition)
				AddInventoryItem(PlayerController, PickaxeDefinition, 1, 0);

			UpdateInventory(PlayerController);
		}
	}

	UFortWorldItem* GetItemStackable(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemDefinitionBP() == ItemDefinition)
			{
				if (ItemInstance->ItemEntry.Count >= ItemDefinition->MaxStackSize)
					continue;

				return ItemInstance;
			}
		}

		return nullptr;
	}

	void RemoveItemFromInventory(AFortPlayerController* PlayerController, FGuid Guid)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() == Guid)
			{
				WorldInventory->Inventory.ItemInstances.Remove(i);

				for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
				{
					FFortItemEntry ItemEntry = WorldInventory->Inventory.ReplicatedEntries[j];

					if (ItemEntry.ItemGuid == Guid)
						WorldInventory->Inventory.ReplicatedEntries.Remove(j);
				}
			}
		}
	}

	AFortPickupAthena* DropItemFromInventory(AFortPlayerController* PlayerController, FGuid Guid, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset)
	{
		UFortWorldItem* ItemInstance = GetItemInstance(PlayerController, Guid);
		APawn* Pawn = PlayerController->Pawn;

		if (ItemInstance && Pawn)
		{
			UFortItemDefinition* ItemDefinition = ItemInstance->GetItemDefinitionBP();

			if (ItemDefinition)
			{
				AFortPickupAthena* FortPickup = SpawnItem(ItemDefinition, ItemInstance->ItemEntry, ItemInstance->ItemEntry.LoadedAmmo, EFortPickupSourceTypeFlag::Player, SpawnSource, (AFortPawn*)Pawn, Pawn->K2_GetActorLocation());

				return FortPickup;
			}
		}

		return nullptr;
	}

	void RemoveAllItemsFromInventory(AFortPlayerController* PlayerController, bool bRemoveCantBeDropped = false)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (WorldInventory)
		{
			std::vector<FGuid> GuidToRemove;

			for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
			{
				UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
				if (!ItemInstance) continue;

				FFortItemEntry ItemEntry = ItemInstance->ItemEntry;

				UFortWorldItemDefinition* ItemDefinition = (UFortWorldItemDefinition*)ItemInstance->GetItemDefinitionBP();
				if (!ItemDefinition) continue;

				if (!ItemDefinition->bCanBeDropped && !bRemoveCantBeDropped)
					continue;

				GuidToRemove.push_back(ItemEntry.ItemGuid);
			}

			for (FGuid& Guid : GuidToRemove)
				RemoveItemFromInventory(PlayerController, Guid);
		}
	}

	void ModifyCountItem(AFortPlayerController* PlayerController, FGuid Guid, int Count)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() == Guid)
			{
				WorldInventory->Inventory.ItemInstances[i]->ItemEntry.Count = Count;
				WorldInventory->Inventory.MarkItemDirty(WorldInventory->Inventory.ItemInstances[i]->ItemEntry);

				for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
				{
					FFortItemEntry ItemEntry = WorldInventory->Inventory.ReplicatedEntries[j];

					if (ItemEntry.ItemGuid ==  Guid)
					{
						WorldInventory->Inventory.ReplicatedEntries[j].Count = Count;
						WorldInventory->Inventory.MarkItemDirty(WorldInventory->Inventory.ReplicatedEntries[j]);

						break;
					}
				}
			}
		}
	}

	void ModifyAmmoItem(AFortPlayerController* PlayerController, FGuid Guid, int Ammo)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (ItemInstance->GetItemGuid() == Guid)
			{
				WorldInventory->Inventory.ItemInstances[i]->ItemEntry.LoadedAmmo = Ammo;
				WorldInventory->Inventory.MarkItemDirty(WorldInventory->Inventory.ItemInstances[i]->ItemEntry);

				for (int j = 0; j < WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
				{
					FFortItemEntry ItemEntry = WorldInventory->Inventory.ReplicatedEntries[j];

					if (ItemEntry.ItemGuid == Guid)
					{
						WorldInventory->Inventory.ReplicatedEntries[j].LoadedAmmo = Ammo;
						WorldInventory->Inventory.MarkItemDirty(WorldInventory->Inventory.ReplicatedEntries[j]);

						break;
					}
				}
			}
		}
	}

	bool IsInventoryFull(AFortPlayerController* PlayerController)
	{
		AFortInventory* WorldInventory = PlayerController->WorldInventory;

		if (!WorldInventory)
			return false;

		int TotalItems = 0;

		for (int i = 0; i < WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = WorldInventory->Inventory.ItemInstances[i];
			if (!ItemInstance) continue;

			if (!ItemInstance->GetItemDefinitionBP()->IsA(UFortWeaponRangedItemDefinition::StaticClass()))
				continue;

			TotalItems++;
		}

		return (TotalItems >= 5);
	}

	void PickupDelayHook(AFortPickup* Pickup)
	{
		if (!Pickup)
			return PickupDelay(Pickup);

		FFortPickupLocationData PickupLocationData = Pickup->PickupLocationData;
		AFortPawn* Pawn = PickupLocationData.ItemOwner;
		FGuid CurrentWepGuid = PickupLocationData.PickupGuid;

		if (!Pawn)
			return PickupDelay(Pickup);

		AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;

		if (PlayerController)
		{
			AFortInventory* WorldInventory = PlayerController->WorldInventory;
			FFortItemEntry ItemEntry = Pickup->PrimaryPickupItemEntry;
			UFortItemDefinition* ItemDefinition = ItemEntry.ItemDefinition;
			UFortWorldItem* CurrentItemInstance = GetItemInstance(PlayerController, CurrentWepGuid);

			if (!WorldInventory || !ItemDefinition)
				return PickupDelay(Pickup);

			HLog("Count: " << ItemEntry.Count);
			HLog("LoadedAmmo: " << ItemEntry.LoadedAmmo);

			UFortWorldItem* NewPickupWorldItem = nullptr;

			bool bSuccessfullyAdded = false;
			int CountToRemove = 0;

			if (ItemDefinition->IsA(UFortWeaponRangedItemDefinition::StaticClass()))
			{
				UFortWorldItem* StackableItemInstance = GetItemStackable(PlayerController, ItemDefinition);

				if (!StackableItemInstance)
				{
					bool bIsInventoryFull = IsInventoryFull(PlayerController);

					if (bIsInventoryFull)
					{
						if (!CurrentItemInstance)
							return PickupDelay(Pickup);

						if (!CurrentItemInstance->GetItemDefinitionBP()->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
						{
							PlayerController->ServerAttemptInventoryDrop(CurrentItemInstance->GetItemGuid(), CurrentItemInstance->ItemEntry.Count);
							NewPickupWorldItem = AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, ItemEntry.LoadedAmmo, true, ItemEntry);
							
							if (NewPickupWorldItem)
							{
								if (CurrentItemInstance->GetItemGuid() == Pawn->CurrentWeapon->ItemEntryGuid)
									PlayerController->ClientEquipItem((FGuid&)NewPickupWorldItem->GetItemGuid(), true);

								bSuccessfullyAdded = true;
							}
						}
					}
					else
					{
						NewPickupWorldItem = AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, ItemEntry.LoadedAmmo, true, ItemEntry);

						if (NewPickupWorldItem)
							bSuccessfullyAdded = true;
					}
				}
				else
				{
					int NewCount = StackableItemInstance->ItemEntry.Count + ItemEntry.Count;

					if (NewCount > ItemDefinition->MaxStackSize)
					{
						CountToRemove = NewCount - ItemDefinition->MaxStackSize;
						NewCount = ItemDefinition->MaxStackSize;
					}

					bSuccessfullyAdded = true;
					ModifyCountItem(PlayerController, StackableItemInstance->GetItemGuid(), NewCount);
				}
			}
			else if (ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) ||
				ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()))
			{
				FGuid ItemGuid = GetItemGuid(PlayerController, ItemDefinition);
				UFortWorldItem* ItemInstance = GetItemInstance(PlayerController, ItemGuid);

				if (ItemInstance)
				{
					int NewCount = ItemInstance->ItemEntry.Count + ItemEntry.Count;

					if (NewCount > ItemDefinition->MaxStackSize)
					{
						CountToRemove = NewCount - ItemDefinition->MaxStackSize;
						NewCount = ItemDefinition->MaxStackSize;
					}

					ModifyCountItem(PlayerController, ItemGuid, NewCount);
					bSuccessfullyAdded = true;
				}
				else
				{
					NewPickupWorldItem = AddInventoryItem(PlayerController, ItemDefinition, ItemEntry.Count, ItemEntry.LoadedAmmo, true, ItemEntry);

					if (NewPickupWorldItem)
						bSuccessfullyAdded = true;
				}
			}

			if (NewPickupWorldItem)
			{
				int NewCount = NewPickupWorldItem->ItemEntry.Count;

				if (NewCount > ItemDefinition->MaxStackSize)
				{
					CountToRemove = NewCount - ItemDefinition->MaxStackSize;
					NewCount = ItemDefinition->MaxStackSize;
				}

				ModifyCountItem(PlayerController, NewPickupWorldItem->GetItemGuid(), NewCount);
			}
			
			if (bSuccessfullyAdded && CountToRemove > 0)
			{
				ItemEntry.Count = CountToRemove;
				SpawnItem(ItemDefinition, ItemEntry, ItemEntry.LoadedAmmo, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn, Pawn->K2_GetActorLocation());
			}

			if (!bSuccessfullyAdded)
			{
				Pickup->bPickedUp = false;
				Pickup->OnRep_bPickedUp();

				SpawnItem(ItemDefinition, ItemEntry, ItemEntry.LoadedAmmo, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn, Pawn->K2_GetActorLocation());
			}

			UpdateInventory(PlayerController);
		}

		return PickupDelay(Pickup);
	}

	void OnReloadHook(AFortWeapon* Weapon, int Count)
	{
		if (!Weapon)
			return OnReload(Weapon, Count);

		AFortPawn* Pawn = (AFortPawn*)Weapon->Owner;
		UFortWeaponItemDefinition* WeaponData = Weapon->WeaponData;
		FFortBaseWeaponStats* WeaponStats = GetWeaponStats(WeaponData);

		if (!Pawn || !Pawn->Controller || !WeaponData || !WeaponStats)
			return OnReload(Weapon, Count);

		AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;
		UFortWorldItem* WeaponItemInstance = Inventory::GetItemInstance(PlayerController, Weapon->GetInventoryGUID());

		if (WeaponItemInstance && Weapon->AmmoCount <= WeaponStats->ClipSize)
			Inventory::ModifyAmmoItem(PlayerController, WeaponItemInstance->GetItemGuid(), Weapon->AmmoCount);

		UFortWeaponItemDefinition* AmmoDefinition = (UFortWeaponItemDefinition*)WeaponData->GetAmmoWorldItemDefinition_BP();

		if (AmmoDefinition && WeaponData != AmmoDefinition)
			WeaponData = AmmoDefinition;

		FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, WeaponData);
		UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);

		if (!ItemInstance)
			return OnReload(Weapon, Count);

		FFortItemEntry* ItemEntry = &ItemInstance->ItemEntry;

		if (!ItemEntry)
			return OnReload(Weapon, Count);

		if (!PlayerController->bInfiniteAmmo)
		{
			int NewCount = ItemEntry->Count - Count;

			if (NewCount > 0)
			{
				Inventory::ModifyCountItem(PlayerController, ItemInstance->GetItemGuid(), NewCount);
			}
			else
			{
				Inventory::RemoveItemFromInventory(PlayerController, ItemInstance->GetItemGuid());
			}
		}

		Inventory::UpdateInventory(PlayerController);
	}

	char TestDropItemHook(__int64 a1, __int64 a2)
	{
		HLog("TestDropItemHook");

		HLog("a1: " << a1);
		HLog("a2: " << a2);

		return TestDropItem(a1, a2);
	}
}