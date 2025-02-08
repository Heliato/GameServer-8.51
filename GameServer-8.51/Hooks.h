#pragma once

#include <algorithm>
#include <time.h>
#include <vector>
#include <unordered_map>
#include <functional>
#include <string>
#include <sstream>

enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

std::vector<std::string> split(const std::string& s, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

namespace ToHooks
{ 
	__int64 (*DispatchRequest)(__int64 a1, __int64* a2, int a3);
	void (*ApplyCharacterCustomization)(AFortPlayerState* PlayerState, AFortPawn* Pawn);
	void (*GetPlayerViewPoint)(AFortPlayerController* PlayerController, FVector& out_Location, FRotator& out_Rotation);
	bool (*CantBuild)(UWorld* World, TSubclassOf<ABuildingActor> BuildingClassData, const FVector_NetQuantize10& BuildLoc, const FRotator& BuildRot, bool bMirrored, TArray<ABuildingSMActor*>* ExistingBuildings, __int64* a7);
	ABuildingSMActor* (*ReplaceBuildingActor)(ABuildingSMActor* BuildingActor, unsigned int a2, TSubclassOf<ABuildingSMActor> NewBuildingClass, int32 CurrentBuildingLevel, int32 RotationIterations, bool bMirrored, AFortPlayerController* PlayerController);
	ENetMode (*InternalGetNetMode)();
	ENetMode (*ActorInternalGetNetMode)();
	void (*KickPlayer)();
	bool (*LocalSpawnPlayActor)();

	__int64 (*K2_SpawnPickupInWorld)(UObject* a1, void* a2, __int64* a3);
}

namespace Hooks
{
	bool bPreReadyToStartMatch = false;
	bool bStartListen = false;
	bool bStartMatch = false;
	bool bWorldReady = false;
	bool bLogs = false;

	char CanActivateAbilityHook()
	{
		return 1;
	}

	AFortBroadcastRemoteClientInfo* GetBroadcastRemoteClientInfo(AFortPlayerController* PlayerController)
	{
		return (*(AFortBroadcastRemoteClientInfo**)(__int64(PlayerController) + 0x28D8));
	}

	void GetPlayerViewPointHook(AFortPlayerController* PlayerController, FVector& out_Location, FRotator& out_Rotation)
	{
		AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

		if (Pawn)
		{
			out_Location = Pawn->K2_GetActorLocation();
			out_Rotation = PlayerController->GetControlRotation();
			return;
		}

		return ToHooks::GetPlayerViewPoint(PlayerController, out_Location, out_Rotation);
	}

	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		return ToHooks::DispatchRequest(a1, a2, 3);
	}

	static bool LocalSpawnPlayActorHook()
	{
		return true;
	}

	static void KickPlayerHook()
	{
		return;
	}

	static ENetMode GetNetModeHook() 
	{
		return ENetMode::NM_DedicatedServer;
	}

	inline int64_t GIsClient()
	{
		return __int64(GetModuleHandleW(0)) + 0x5940A13;
	}

	inline int64_t GIsServer()
	{
		return __int64(GetModuleHandleW(0)) + 0x5940A14;
	}

	void ProcessEventHook(UObject* Object, UFunction* Function, void* Parms)
	{
		std::string FuncName = Function->GetName();

		if (FuncName.contains("Tick"))
		{
			if (GetAsyncKeyState(VK_F7) & 0x1)
			{
				bLogs = bLogs ? false : true;
			}

			if (GetAsyncKeyState(VK_F5) & 0x1)
			{
				static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				for (int i = 0; i < Globals::GetWorld()->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = Globals::GetWorld()->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (!PlayerController->Pawn) continue;

						AFortPickup* Pickup = Globals::GetKismetLibrary()->K2_SpawnPickupInWorld(Globals::GetWorld(), WoodItemData, 350, PlayerController->Pawn->K2_GetActorLocation(), PlayerController->Pawn->K2_GetActorLocation(), 0, true, true, true); // 0x1A3ACA0

						// a test:
						// 7FF6B995D8D0 - char __fastcall sub_7FF6B995D8D0(__int64 a1)
						// 7FF6BAE7EE20 - __int64 __fastcall sub_7FF6BAE7EE20(_QWORD *a1, __int64 a2, __m128 *a3)
						// 7FF6B9AE1CB0 - __int64 __fastcall sub_7FF6B9AE1CB0(__int64 *a1, __int64 a2, __int64 a3, char a4, char a5, char a6, char a7)
						// 7FF6B96570F0 - char __fastcall sub_7FF6B96570F0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6, __int64 *a7)

						if (Pickup)
						{
							HLog("Pickup: " << Pickup->GetName());
						}
						else
						{
							HLog("Failed to spawn: " << WoodItemData->GetName());
						}
					}
				}
			}

			if (GetAsyncKeyState(VK_F4) & 0x1)
			{
				static auto ItemDefinition = FindObjectFast<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_Auto_Athena_C_Ore_T02.WID_Assault_Auto_Athena_C_Ore_T02");

				for (int i = 0; i < Globals::GetWorld()->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = Globals::GetWorld()->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (!PlayerController->Pawn) continue;

						UDataTableFunctionLibrary* FunctionLibrary = Globals::GetFunctionLibrary();

						if (FunctionLibrary)
						{
							AFortAthenaMapInfo* MapInfo = Globals::GetGameState()->MapInfo;

							if (MapInfo)
							{
								EEvaluateCurveTableResult OutResult;
								FString ContextString;
								float InXY = 0.f;

								float OutXYAmmoBoxMinSpawnPercent;
								FCurveTableRowHandle AmmoBoxMinSpawnPercent = MapInfo->AmmoBoxMinSpawnPercent.Curve;

								FunctionLibrary->EvaluateCurveTableRow(AmmoBoxMinSpawnPercent.CurveTable, AmmoBoxMinSpawnPercent.RowName, InXY, &OutResult, &OutXYAmmoBoxMinSpawnPercent, ContextString);

								float OutXYAmmoBoxMaxSpawnPercent;
								FCurveTableRowHandle AmmoBoxMaxSpawnPercent = MapInfo->AmmoBoxMaxSpawnPercent.Curve;

								FunctionLibrary->EvaluateCurveTableRow(AmmoBoxMaxSpawnPercent.CurveTable, AmmoBoxMaxSpawnPercent.RowName, InXY, &OutResult, &OutXYAmmoBoxMaxSpawnPercent, ContextString);

								HLog("OutXYAmmoBoxMinSpawnPercent: " << OutXYAmmoBoxMinSpawnPercent);
								HLog("OutXYAmmoBoxMaxSpawnPercent: " << OutXYAmmoBoxMaxSpawnPercent);
							}

							UFortPlaylistAthena* Playlist = Globals::GetPlaylist();

							if (Playlist)
							{
								HLog("Playlist: " << Playlist->GetName());

								HLog("Playlist->MaxPlayers: " << Playlist->MaxPlayers);
								HLog("Playlist->MinPlayers: " << Playlist->MinPlayers);
								HLog("Playlist->MaxTeamCount: " << Playlist->MaxTeamCount);
								HLog("Playlist->MaxTeamSize: " << Playlist->MaxTeamSize);
								HLog("Playlist->MaxSocialPartySize: " << Playlist->MaxSocialPartySize);
								HLog("Playlist->MaxSquadSize: " << Playlist->MaxSquadSize);
								HLog("Playlist->MaxSquads: " << Playlist->MaxSquads);

								HLog("Playlist->bAllowSquadFillOption: " << Playlist->bAllowSquadFillOption);
								HLog("Playlist->bAllowJoinInProgress: " << Playlist->bAllowJoinInProgress);

								HLog("Playlist->LootLevel: " << Playlist->LootLevel);

								UDataTable* AthenaLootTierData = FindObjectFast<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
								UDataTable* AthenaLootPackages = FindObjectFast<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");

								if (!AthenaLootTierData || !AthenaLootPackages)
								{
									AthenaLootTierData = StaticLoadObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
									AthenaLootPackages = StaticLoadObject<UDataTable>(L"/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
								}

								if (AthenaLootTierData && AthenaLootPackages)
								{
									HLog("AthenaLootTierData: " << AthenaLootTierData->GetName());
									HLog("AthenaLootPackages: " << AthenaLootPackages->GetName());

									if (FunctionLibrary)
									{
										TArray<FName> OutRowNames;

										FunctionLibrary->GetDataTableRowNames(AthenaLootPackages, &OutRowNames);

										HLog("OutRowNames.Num() " << OutRowNames.Num());

										for (int i = 0; i < OutRowNames.Num(); i++)
										{
											FName RowName = OutRowNames[i];
											FFortLootPackageData OutRow;

											FFortLootTierData;

											FunctionLibrary->GetDataTableRowFromName(AthenaLootPackages, RowName, &OutRow);

											/*HLog("RowName: " << RowName.ToString());

											HLog("Weight: " << OutRow.Weight);
											HLog("Count: " << OutRow.Count);*/
										}

										/*static bool GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FTableRowBase* OutRow);
										static void GetDataTableRowNames(class UDataTable* Table, TArray<class FName>*OutRowNames);*/
									}
								}

								/*
								LOG : Playlist: Playlist_DefaultSolo
								LOG : InventoryItemsToGrant.Num() 0
								LOG : Playlist->MaxPlayers: 100
								LOG : Playlist->MinPlayers: 20
								LOG : Playlist->MaxTeamCount: 100
								LOG : Playlist->MaxTeamSize: 1
								LOG : Playlist->MaxSocialPartySize: 1
								LOG : Playlist->MaxSquadSize: 1
								LOG : Playlist->MaxSquads: -1
								LOG : Playlist->bAllowSquadFillOption: 1
								LOG : Playlist->bAllowJoinInProgress: 0
								LOG : Playlist->LootLevel: 1
								*/
							}
						}
					}
				}
			}

			if (GetAsyncKeyState(VK_F3) & 0x1)
			{
				static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				for (int i = 0; i < Globals::GetWorld()->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = Globals::GetWorld()->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (!PlayerController->Pawn) continue;

						auto test1 = Globals::GetKismetLibrary()->K2_HasBuildingResourcesAvailable(PlayerController, EFortResourceType::Wood, 10);
						auto test2 = Globals::GetKismetLibrary()->K2_PayBuildingResourceCost(PlayerController, EFortResourceType::Wood, 10);

						HLog("K2_HasBuildingResourcesAvailable: " << test1);
						HLog("K2_PayBuildingResourceCost: " << test2);
					}
				}
			}

			if (GetAsyncKeyState(VK_F2) & 0x1)
			{
				static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				for (int i = 0; i < Globals::GetWorld()->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = Globals::GetWorld()->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (!PlayerController->Pawn) continue;

						FFortItemEntry ItemEntry;
						ItemEntry.Count = 50;

						Inventory::SpawnItem(WoodItemData, ItemEntry, -1, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, (AFortPawn*)PlayerController->Pawn, PlayerController->Pawn->K2_GetActorLocation());

						/*Globals::GetKismetLibrary()->K2_GiveBuildingResource(PlayerController, EFortResourceType::Wood, 100);
						Globals::GetKismetLibrary()->K2_GiveItemToAllPlayers(Globals::GetWorld(), WoodItemData, 150, true);
						Globals::GetKismetLibrary()->K2_GiveItemToPlayer(PlayerController, WoodItemData, 150, true);*/
					}
				}
			}

			if (GetAsyncKeyState(VK_F1) & 0x1)
			{
				static auto WoodItemData = FindObjectFast<UFortResourceItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

				for (int i = 0; i < Globals::GetWorld()->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = Globals::GetWorld()->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (!PlayerController->Pawn) continue;

						auto test2 = Globals::GetKismetLibrary()->K2_GetItemQuantityOnPlayer(PlayerController, WoodItemData); // Work
						auto test3 = Globals::GetKismetLibrary()->K2_GetNumAvailableBuildingResources(PlayerController, EFortResourceType::Wood); // Work

						HLog("K2_GetItemQuantityOnPlayer: " << test2);
						HLog("K2_GetNumAvailableBuildingResources: " << test3);
					}
				}
			}
		}

		if (bLogs)
		{
			if (!FuncName.contains("Tick") &&
				!FuncName.contains("Visual") &&
				!FuncName.contains("Clown Spinner") &&
				!FuncName.contains("CustomStateChanged") &&
				!FuncName.contains("ReceiveBeginPlay") &&
				!FuncName.contains("OnAttachToBuilding") &&
				!FuncName.contains("OnWorldReady") &&
				!FuncName.contains("K2_GetActorLocation") &&
				!FuncName.contains("ReceiveDrawHUD") &&
				!FuncName.contains("ServerUpdateCamera") &&
				!FuncName.contains("ServerMove") &&
				!FuncName.contains("ContrailCheck") &&
				!FuncName.contains("GetViewTarget") &&
				!FuncName.contains("GetAllActorsOfClass") &&
				!FuncName.contains("ClientAckGoodMove") &&
				!FuncName.contains("ReadyToEndMatch") &&
				!FuncName.contains("Check Closest Point") &&
				!FuncName.contains("ServerTriggerCombatEvent") &&
				!FuncName.contains("UpdateTime") &&
				!FuncName.contains("OnUpdateMusic") &&
				!FuncName.contains("UpdateStateEvent") &&
				!FuncName.contains("ServerTouchActiveTime") &&
				!FuncName.contains("OnCheckIfSurrounded") &&
				!FuncName.contains("ServerFireAIDirectorEventBatch") &&
				!FuncName.contains("ServerTriggerCombatEventBatch") &&
				!FuncName.contains("UserConstructionScript") &&
				!FuncName.contains("K2_OnReset") &&
				!FuncName.contains("K2_OnEndViewTarget") &&
				!FuncName.contains("K2_OnBecomeViewTarget") &&
				!FuncName.contains("ReceiveUnpossessed") &&
				!FuncName.contains("ClientGotoState") &&
				!FuncName.contains("K2_OnEndViewTarget") &&
				!FuncName.contains("K2_OnBecomeViewTarget") &&
				!FuncName.contains("ClientSetViewTarget") &&
				!FuncName.contains("ServerClientPawnLoaded") &&
				!FuncName.contains("ReceiveEndPlay") &&
				!FuncName.contains("OnPerceptionStimuliSourceEndPlay") &&
				!FuncName.contains("HandleOnHUDElementVisibilityChanged") &&
				!FuncName.contains("OnHUDElementVisibilityChanged") &&
				!FuncName.contains("HandleInteractionChanged") &&
				!FuncName.contains("BlueprintModifyCamera") &&
				!FuncName.contains("BlueprintModifyPostProcess") &&
				!FuncName.contains("ServerSetSpectatorLocation") &&
				!FuncName.contains("ServerFireAIDirectorEvent") &&
				!FuncName.contains("ServerTryActivateAbility") &&
				!FuncName.contains("ClientActivateAbilitySucceed") &&
				!FuncName.contains("K2_CommitExecute") &&
				!FuncName.contains("ServerSetSpectatorLocation") &&
				!FuncName.contains("CanJumpInternal") &&
				!FuncName.contains("K2_OnMovementModeChanged") &&
				!FuncName.contains("OnJumped") &&
				!FuncName.contains("ServerModifyStat") &&
				!FuncName.contains("OnLanded") &&
				!FuncName.contains("ReceiveHit") &&
				!FuncName.contains("K2_OnEndAbility") &&
				!FuncName.contains("OnWalkingOffLedge") &&
				!FuncName.contains("ServerEndAbility") &&
				!FuncName.contains("Execute") &&
				!FuncName.contains("NetMulticast_InvokeGameplayCueExecuted_FromSpec") &&
				!FuncName.contains("GameplayCue_Damage") &&
				!FuncName.contains("OnDamagePlayEffects") &&
				!FuncName.contains("OnMontageStarted") &&
				!FuncName.contains("OnNewDamageNumber") &&
				!FuncName.contains("BP_GetTokenizedDescriptionText") &&
				!FuncName.contains("NetMulticast_InvokeGameplayCueExecuted_WithParams") &&
				!FuncName.contains("GameplayCue_InstantDeath") &&
				!FuncName.contains("K2_GetActorRotation") &&
				!FuncName.contains("K2_DestroyActor") &&
				!FuncName.contains("OnDetachFromBuilding") &&
				!FuncName.contains("OnRep_bAlreadySearched") &&
				!FuncName.contains("OnSetSearched") &&
				!FuncName.contains("GetAircraft") &&
				!FuncName.contains("BeginSpawningActorFromClass") &&
				!FuncName.contains("BlueprintInitializeAnimation") &&
				!FuncName.contains("BlueprintUpdateAnimation") &&
				!FuncName.contains("BlueprintPostEvaluateAnimation") &&
				!FuncName.contains("FinishSpawningActor") &&
				!FuncName.contains("PawnUniqueIDSet") &&
				!FuncName.contains("OnRep_Owner") &&
				!FuncName.contains("OnRep_Pawn") &&
				!FuncName.contains("Possess") &&
				!FuncName.contains("ReceivePossessed") &&
				!FuncName.contains("ClientRestart") &&
				!FuncName.contains("SetControlRotation") &&
				!FuncName.contains("ClientRetryClientRestart") &&
				!FuncName.contains("ExecuteUbergraph_PlayerPawn_Athena_Generic") &&
				!FuncName.contains("ExecuteUbergraph_PlayerPawn_Athena") &&
				!FuncName.contains("ServerAcknowledgePossession") &&
				!FuncName.contains("IsInAircraft") &&
				!FuncName.contains("FindPlayerStart") &&
				!FuncName.contains("SpawnDefaultPawnFor") &&
				!FuncName.contains("MustSpectate") &&
				!FuncName.contains("GetDefaultPawnClassForController") &&
				!FuncName.contains("On Game Phase Change") &&
				!FuncName.contains("ClientAdjustPosition") &&
				!FuncName.contains("Movement Audio Crossfader__UpdateFunc") &&
				!FuncName.contains("Holding Audio Crossfader__UpdateFunc") &&
				!FuncName.contains("OnUpdateDirectionalLightForTimeOfDay") &&
				!FuncName.contains("OnMontageEnded") &&
				!FuncName.contains("ServerCancelAbility") &&
				!FuncName.contains("K2_ActivateAbility") &&
				!FuncName.contains("ServerHandleMissionEvent_ToggledCursorMode") &&
				!FuncName.contains("OnBlendOut_") &&
				!FuncName.contains("ClientEndAbility") &&
				!FuncName.contains("OnSafeZoneStateChange") &&
				!FuncName.contains("ClientVeryShortAdjustPosition") &&
				!FuncName.contains("OnDayPhaseChange") &&
				!FuncName.contains("On Day Phase Change") &&
				!FuncName.contains("K2_OnStartCrouch") &&
				!FuncName.contains("K2_OnEndCrouch") &&
				!FuncName.contains("On Player Won") &&
				!FuncName.contains("ClientFinishedInteractionInZone") &&
				!FuncName.contains("ClientReceiveKillNotification") &&
				!FuncName.contains("ReceiveCopyProperties") &&
				!FuncName.contains("K2_OnLogout") &&
				!FuncName.contains("ClientReceiveLocalizedMessage") &&
				!FuncName.contains("ClientCancelAbility") &&
				!FuncName.contains("ServerFinishedInteractionInZoneReport") &&
				!FuncName.contains("FallingTimeline__UpdateFunc") &&
				!FuncName.contains("BndEvt__InterceptCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature") &&
				!FuncName.contains("ReceiveActorBeginOverlap") &&
				!FuncName.contains("Conv_StringToName") &&
				!FuncName.contains("OnRep_GamePhase") &&
				!FuncName.contains("K2_OnSetMatchState") &&
				!FuncName.contains("StartPlay") &&
				!FuncName.contains("StartMatch") &&
				!FuncName.contains("OnAircraftEnteredDropZone") &&
				!FuncName.contains("ServerShortTimeout") &&
				!FuncName.contains("UpdateStateWidgetContent") &&
				!FuncName.contains("PreConstruct") &&
				!FuncName.contains("Construct") &&
				!FuncName.contains("OnCurrentTextStyleChanged") &&
				!FuncName.contains("UpdateButtonState") &&
				!FuncName.contains("OnBangStateChanged") &&
				!FuncName.contains("OnPlayerInfoChanged") &&
				!FuncName.contains("Update") &&
				!FuncName.contains("OnBeginIntro") &&
				!FuncName.contains("HandleQuickBarChangedBP") &&
				!FuncName.contains("HandleInventoryUpdatedEvent") &&
				!FuncName.contains("OnActivated") &&
				!FuncName.contains("OnBeginOutro") &&
				!FuncName.contains("HandleActiveWidgetDeactivated") &&
				!FuncName.contains("OnDeactivated") &&
				!FuncName.contains("OnStateStarted") &&
				!FuncName.contains("SetRenderTransform") &&
				!FuncName.contains("OnAnimationFinished") &&
				!FuncName.contains("ReadyToStartMatch") &&
				!FuncName.contains("SetWidthOverride") &&
				!FuncName.contains("SetHeightOverride") &&
				!FuncName.contains("HandleMinimizeFinished") &&
				!FuncName.contains("ServerUpdateLevelVisibility") &&
				!FuncName.contains("OnDayPhaseChanged") &&
				!FuncName.contains("ServerLoadingScreenDropped") &&
				!FuncName.contains("On Game Phase Step Changed") &&
				!FuncName.contains("HandleGamePhaseStepChanged") &&
				!FuncName.contains("GamePhaseStepChanged") &&
				!FuncName.contains("SetColorAndOpacity") &&
				!FuncName.contains("OnAnimationStarted") &&
				!FuncName.contains("UpdateMessaging") &&
				!FuncName.contains("ServerSendLoadoutConfig") &&
				!FuncName.contains("CalculateBaseMagnitude") &&
				!FuncName.contains("ClientRegisterWithParty") &&
				!FuncName.contains("InitializeHUDForPlayer") &&
				!FuncName.contains("ClientSetHUD") &&
				!FuncName.contains("ClientEnableNetworkVoice") &&
				!FuncName.contains("ClientUpdateMultipleLevelsStreamingStatus") &&
				!FuncName.contains("ClientFlushLevelStreaming") &&
				!FuncName.contains("ClientOnGenericPlayerInitialization") &&
				!FuncName.contains("ClientCapBandwidth") &&
				!FuncName.contains("K2_PostLogin") &&
				!FuncName.contains("OnRep_bHasStartedPlaying") &&
				!FuncName.contains("ServerChoosePart") &&
				!FuncName.contains("SetOwner") &&
				!FuncName.contains("OnRep_QuickBar") &&
				!FuncName.contains("HandleStartingNewPlayer") &&
				!FuncName.contains("ServerUpdateMultipleLevelsVisibility") &&
				!FuncName.contains("ServerSetPartyOwner") &&
				!FuncName.contains("PlayerCanRestart") &&
				!FuncName.contains("ServerCreateCombatManager") &&
				!FuncName.contains("ServerCreateAIDirectorDataManager") &&
				!FuncName.contains("EnableSlot") &&
				!FuncName.contains("DisableSlot") &&
				!FuncName.contains("ServerSetShowHeroBackpack") &&
				!FuncName.contains("ServerSetShowHeroHeadAccessories") &&
				!FuncName.contains("ServerSetClientHasFinishedLoading") &&
				!FuncName.contains("ServerReadyToStartMatch") &&
				!FuncName.contains("Received_Notify") &&
				!FuncName.contains("Received_NotifyBegin") &&
				!FuncName.contains("AnimNotify_LeftFootStep") &&
				!FuncName.contains("AnimNotify_RightFootStep") &&
				!FuncName.contains("Completed_") &&
				!FuncName.contains("InputActionHoldStopped") &&
				!FuncName.contains("ServerCurrentMontageSetPlayRate") &&
				!FuncName.contains("AnimNotify_PlayFireFX") &&
				!FuncName.contains("ServerSetReplicatedTargetData") &&
				!FuncName.contains("Triggered_") &&
				!FuncName.contains("ActorHasTag") &&
				!FuncName.contains("RandomIntegerInRange") &&
				!FuncName.contains("GetItemDefinitionBP") &&
				!FuncName.contains("CreateTemporaryItemInstanceBP") &&
				!FuncName.contains("SetOwningControllerForTemporaryItem") &&
				!FuncName.contains("OnRep_PrimaryQuickBar") &&
				!FuncName.contains("OnRep_SecondaryQuickBar") &&
				!FuncName.contains("ServerSetupWeakSpotsOnBuildingActor") &&
				!FuncName.contains("OnStartDirectionEffect") &&
				!FuncName.contains("SetReplicates") &&
				!FuncName.contains("ServerCurrentMontageSetNextSectionName") &&
				!FuncName.contains("NetFadeOut") &&
				!FuncName.contains("OnFadeOut") &&
				!FuncName.contains("NetOnHitCrack") &&
				!FuncName.contains("OnHitCrack") &&
				!FuncName.contains("NetMulticast_InvokeGameplayCueAdded_WithParams") &&
				!FuncName.contains("GameplayCue") &&
				!FuncName.contains("ReceiveActorEndOverlap") &&
				!FuncName.contains("PhysicsVolumeChanged") &&
				!FuncName.contains("ServerAddItemInternal") &&
				!FuncName.contains("FortClientPlaySound") &&
				!FuncName.contains("OnCapsuleBeginOverlap") &&
				!FuncName.contains("GetPlayerController") &&
				!FuncName.contains("TossPickup") &&
				!FuncName.contains("OnRep_PrimaryPickupItemEntry") &&
				!FuncName.contains("ServerActivateSlotInternal") &&
				!FuncName.contains("EquipWeaponDefinition") &&
				!FuncName.contains("OnInitAlteration") &&
				!FuncName.contains("OnInitCosmeticAlterations") &&
				!FuncName.contains("ClientGivenTo") &&
				!FuncName.contains("K2_OnUnEquip") &&
				!FuncName.contains("OnWeaponVisibilityChanged") &&
				!FuncName.contains("OnWeaponAttached") &&
				!FuncName.contains("ClientInternalEquipWeapon") &&
				!FuncName.contains("GetItemGuid") &&
				!FuncName.contains("InternalServerSetTargeting") &&
				!FuncName.contains("ServerReleaseInventoryItemKey") &&
				!FuncName.contains("OnPawnMontageBlendingOut") &&
				!FuncName.contains("IsVisibleToPlayer") &&
				!FuncName.contains("HandleRidableFound") &&
				!FuncName.contains("SetIntensity") &&
				!FuncName.contains("SetFogDensity") &&
				!FuncName.contains("SetFogHeightFalloff") &&
				!FuncName.contains("SetDirectionalInscatteringExponent") &&
				!FuncName.contains("SetFogMaxOpacity") &&
				!FuncName.contains("SetOtherAbsorptionScale") &&
				!FuncName.contains("SetRayleighScatteringScale") &&
				!FuncName.contains("SetMieScatteringScale") &&
				!FuncName.contains("SetRayleighExponentialDistribution") &&
				!FuncName.contains("SetAerialPespectiveViewDistanceScale") &&
				!FuncName.contains("SetVolumetricFogAlbedo") &&
				!FuncName.contains("SetMieAbsorption") &&
				!FuncName.contains("SetMieScattering") &&
				!FuncName.contains("SetRayleighScattering") &&
				!FuncName.contains("SetSkyLuminanceFactor") &&
				!FuncName.contains("Handle Parachute Audio State") &&
				!FuncName.contains("GetControlRotation") &&
				!FuncName.contains("WaitForPawn") &&
				!FuncName.contains("OnVisibilitySetEvent") &&
				!FuncName.contains("OnHitCrack") &&
				!FuncName.contains("OnHitCrack") &&
				!FuncName.contains("OnHitCrack") &&
				!FuncName.contains("EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_"))
			{
				// BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounce
				/*WaitForPawn
LOG : FuncName: OnVisibilitySetEvent*/

				HLog("FuncName: " << FuncName);
			}
		}

		if (FuncName.contains("ReadyToStartMatch"))
		{
			if (!bPreReadyToStartMatch)
			{
				Globals::GetFortEngine(true);
				Globals::GetWorld(true);

				HLog("bPreReadyToStartMatch called!");

				bStartListen = true;
				bPreReadyToStartMatch = true;
			}
			else if (bPreReadyToStartMatch && bWorldReady)
			{
				AFortGameModeAthena* GameMode = Globals::GetGameMode();

				if (GameMode)
				{
					FName MatchState = GameMode->GetMatchState();

					if (GameMode->NumPlayers + GameMode->NumBots > 0 &&
						MatchState.ToString() == "WaitingToStart")
					{
						Match::ReadyToStartMatch();
						bStartMatch = true;
					}
				}
			}
		}

		if (FuncName.contains("OnWorldReady"))
		{
			if (bStartListen)
			{
				Beacon::Listen();

				HLog("OnWorldReady");

				/*AGameModeBase* GameMode = Globals::GetWorld()->AuthorityGameMode;

				if (GameMode)
					GameMode->HandleStartingNewPlayer(Globals::GetServerPlayerController());*/


				bWorldReady = true;
				bStartListen = false;
			}
		}

		if (FuncName.contains("HandleStartingNewPlayer") && bWorldReady)
		{
			auto Params = (Params::GameModeBase_HandleStartingNewPlayer*)Parms;

			AFortPlayerController* PlayerController = (AFortPlayerController*)Params->NewPlayer;
			UWorld* World = Globals::GetWorld();

			if (PlayerController && World)
			{
				AFortGameModeAthena* GameMode = Globals::GetGameMode();
				AController* Player = Params->NewPlayer;

				if (GameMode && Player)
				{
					AActor* PlayerStart = GameMode->ChoosePlayerStart(Player);

					if (PlayerStart)
					{
						FVector PlayerStartLocation = PlayerStart->K2_GetActorLocation();
						FRotator PlayerStartRotation = PlayerStart->K2_GetActorRotation();

						Match::SpawnPlayer(PlayerController, PlayerStartLocation, PlayerStartRotation);
					}
				}
			}
		}

		if (FuncName.contains("ServerAcknowledgePossession"))
		{
			auto Params = (Params::PlayerController_ServerAcknowledgePossession*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController && Params->P)
				PlayerController->AcknowledgedPawn = Params->P;
		}

		if (FuncName.contains("ServerAttemptAircraftJump"))
		{
			auto Params = (Params::FortPlayerControllerAthena_ServerAttemptAircraftJump*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			AFortGameStateAthena* GameState = Globals::GetGameState();
			AFortGameModeAthena* GameMode = Globals::GetGameMode();

			if (PlayerController && GameState && GameMode)
			{
				if (PlayerController->IsInAircraft() && !PlayerController->Pawn)
				{
					AFortAthenaAircraft* Aircraft = GameState->GetAircraft(0);

					if (Aircraft)
					{
						FVector AircraftLocation = Aircraft->K2_GetActorLocation();
						FRotator ClientRotation = Params->ClientRotation;

						Match::SpawnPlayer(PlayerController, AircraftLocation, {}, false);
						PlayerController->SetControlRotation(ClientRotation);
					}
				}
			}
		}

		if (FuncName.contains("AircraftExitedDropZone"))
		{
			UWorld* World = Globals::GetWorld();

			if (World && World->NetDriver)
			{
				for (int i = 0; i < World->NetDriver->ClientConnections.Num(); i++)
				{
					auto ClientConnection = World->NetDriver->ClientConnections[i];

					if (ClientConnection)
					{
						auto PlayerController = (AFortPlayerControllerAthena*)ClientConnection->PlayerController;
						if (!PlayerController) continue;
						if (PlayerController->Pawn) continue;
						if (!PlayerController->IsInAircraft()) continue;

						PlayerController->ServerAttemptAircraftJump({});
					}
				}
			}
		}

		if (FuncName.contains("ServerLoadingScreenDropped"))
		{
			auto PlayerController = (AFortPlayerController*)Object;

			if (PlayerController)
			{
				AFortPlayerState* PlayerState = (AFortPlayerState*)PlayerController->PlayerState;
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (PlayerState && Pawn)
				{
					ToHooks::ApplyCharacterCustomization(PlayerState, Pawn);

					FFortAthenaLoadout CosmeticLoadoutPC = PlayerController->CosmeticLoadoutPC;
					UFortWeaponMeleeItemDefinition* PickaxeDefinition = CosmeticLoadoutPC.Pickaxe->WeaponDefinition;

					if (!PickaxeDefinition)
						PickaxeDefinition = FindObjectFast<UFortWeaponMeleeItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

					Inventory::SetupInventory(PlayerController, PickaxeDefinition);
				}
			}
		}

		if (FuncName.contains("ServerTryActivateAbility"))
		{
			auto Params = (Params::AbilitySystemComponent_ServerTryActivateAbility*)Parms;
			auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;

			if (AbilitySystemComponent)
			{
				FGameplayAbilitySpecHandle& AbilityToActivate = Params->AbilityToActivate;
				FPredictionKey& PredictionKey = Params->PredictionKey;

				Abilities::InternalServerTryActiveAbility(AbilitySystemComponent, AbilityToActivate, Params->InputPressed, PredictionKey, nullptr);
			}
		}

		if (FuncName.contains("ServerAbilityRPCBatch"))
		{
			auto Params = (Params::AbilitySystemComponent_ServerAbilityRPCBatch*)Parms;
			auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;

			if (AbilitySystemComponent)
			{
				auto BatchInfo = Params->BatchInfo;

				FGameplayAbilitySpecHandle& AbilityToActivate = BatchInfo.AbilitySpecHandle;
				FPredictionKey& PredictionKey = BatchInfo.PredictionKey;

				Abilities::InternalServerTryActiveAbility(AbilitySystemComponent, AbilityToActivate, BatchInfo.InputPressed, PredictionKey, nullptr);
			}
		}

		if (FuncName.contains("ServerExecuteInventoryItem"))
		{
			auto Params = (Params::FortPlayerController_ServerExecuteInventoryItem*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController)
			{
				UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Params->ItemGuid);
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (ItemInstance && Pawn)
					Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP(), ItemInstance->GetItemGuid());
			}
		}

		if (FuncName.contains("ServerExecuteInventoryWeapon"))
		{
			auto Params = (Params::FortPlayerController_ServerExecuteInventoryWeapon*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;
			auto Weapon = Params->Weapon;

			if (PlayerController && Weapon)
			{
				UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Weapon->GetInventoryGUID());
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (ItemInstance && Pawn)
					Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP(), ItemInstance->GetItemGuid());
			}
		}

		if (FuncName.contains("ServerHandlePickup"))
		{
			auto Params = (Params::FortPlayerPawn_ServerHandlePickup*)Parms;
			AFortPlayerPawn* Pawn = (AFortPlayerPawn*)Object;
			AFortPickup* Pickup = Params->Pickup;

			if (Pickup)
			{
				if (!Pawn || Pickup->bPickedUp)
					return ProcessEvent(Object, Function, Parms);

				Pawn->IncomingPickups.Add(Pickup);

				FFortPickupLocationData* PickupLocationData = &Pickup->PickupLocationData;

				FGuid CurrentWepGuid = Pawn->CurrentWeapon ? Pawn->CurrentWeapon->GetInventoryGUID() : FGuid();

				PickupLocationData->ItemOwner = Pawn;
				PickupLocationData->PickupTarget = Pawn;
				PickupLocationData->FlyTime = Globals::GetMathLibrary()->RandomFloatInRange(0.40f, 0.47f);
				PickupLocationData->PickupGuid = CurrentWepGuid;
				Pickup->OnRep_PickupLocationData();

				Pickup->bPickedUp = true;
				Pickup->OnRep_bPickedUp();
			}
		}

		if (FuncName.contains("ServerCheat"))
		{
			auto Params = (Params::FortPlayerController_ServerCheat*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController && Params->Msg.IsValid())
			{
				std::string Command = Params->Msg.ToString();
				std::vector<std::string> ParsedCommand = split(Command, ' ');
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (!ParsedCommand.empty())
				{
					std::string Action = ParsedCommand[0];
					std::transform(Action.begin(), Action.end(), Action.begin(),
						[](unsigned char c) { return std::tolower(c); });

					FString Message;

					if (Action == "freebuild")
					{
						PlayerController->bBuildFree = PlayerController->bBuildFree ? false : true;
						Message = PlayerController->bBuildFree ? L"FreeBuild on" : L"FreeBuild off";

						HLog("freebuild");
					}
					else if (Action == "infiniteammo")
					{
						PlayerController->bInfiniteAmmo = PlayerController->bInfiniteAmmo ? false : true;
						Message = PlayerController->bInfiniteAmmo ? L"InfiniteAmmo on" : L"InfiniteAmmo off";
					}
					else if (Action == "godmode" && Pawn)
					{
						Pawn->bIsInvulnerable = Pawn->bIsInvulnerable ? false : true;
						Message = Pawn->bIsInvulnerable ? L"GodMode on" : L"GodMode off";
					}
					else if (Action == "giveweapon" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string WeaponName = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/Athena/Items/Weapons/" + WeaponName + "." + WeaponName);

							if (ItemDefinition)
							{
								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;

								Inventory::SpawnItem(ItemDefinition, ItemEntry, -1, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Weapon Give!";
							}
							else
							{
								Message = L"The weapon does not exist";
							}
						}
					}
					else if (Action == "givetrap" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string TrapName = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/Athena/Items/Traps/" + TrapName + "." + TrapName);

							if (ItemDefinition)
							{
								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;

								Inventory::SpawnItem(ItemDefinition, ItemEntry, -1, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Trap Give!";
							}
							else
							{
								Message = L"The trap does not exist";
							}
						}
					}
					else if (Action == "giveconsumable" && ParsedCommand.size() >= 3 && Pawn)
					{
						std::string ConsumableName = ParsedCommand[1];

						bool bIsQuantityInt = std::all_of(ParsedCommand[2].begin(), ParsedCommand[2].end(), ::isdigit);

						if (bIsQuantityInt)
						{
							int Quantity = std::stoi(ParsedCommand[2]);

							UFortWorldItemDefinition* ItemDefinition = FindObjectFast<UFortWorldItemDefinition>("/Game/Athena/Items/Consumables/" + ConsumableName);

							if (ItemDefinition)
							{
								FFortItemEntry ItemEntry;
								ItemEntry.Count = Quantity;

								Inventory::SpawnItem(ItemDefinition, ItemEntry, -1, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn, Pawn->K2_GetActorLocation());

								Message = L"Consumable Give!";
							}
							else
							{
								Message = L"The consumable does not exist";
							}
						}
					}
					else if (Action == "spawnloot" && ParsedCommand.size() >= 2 && Pawn)
					{
						std::string TypeLoot = ParsedCommand[1];


					}
					else
					{
						Message = L"Unknown Command";
					}

					PlayerController->ClientMessage(Message, FName(), 1);
				}
			}
		}

		if (FuncName.contains("ServerAttemptInventoryDrop"))
		{
			auto Params = (Params::FortPlayerController_ServerAttemptInventoryDrop*)Parms;
			auto PlayerController = (AFortPlayerControllerAthena*)Object;

			if (PlayerController)
			{
				if (PlayerController->IsInAircraft() || !PlayerController->Pawn)
					return;

				AFortInventory* WorldInventory = PlayerController->WorldInventory;

				if (WorldInventory)
				{
					UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Params->ItemGuid);

					if (ItemInstance)
					{
						UFortWorldItemDefinition* ItemDefinition = (UFortWorldItemDefinition*)ItemInstance->GetItemDefinitionBP();
						FFortItemEntry ItemEntry = ItemInstance->ItemEntry;

						HLog("Count: " << ItemEntry.Count);
						HLog("LoadedAmmo: " << ItemEntry.LoadedAmmo);

						if (ItemDefinition && ItemDefinition->bCanBeDropped)
						{
							FGuid ItemGuid = ItemInstance->GetItemGuid();

							if (ItemEntry.Count <= 0)
							{
								Inventory::RemoveItemFromInventory(PlayerController, ItemGuid);
							}
							else if (ItemEntry.Count == Params->Count)
							{
								Inventory::DropItemFromInventory(PlayerController, ItemGuid);
								Inventory::RemoveItemFromInventory(PlayerController, ItemGuid);
							}
							else if (Params->Count < ItemEntry.Count)
							{
								int Count = ItemEntry.Count - Params->Count;

								if (Count > 0)
								{
									Inventory::ModifyCountItem(PlayerController, ItemGuid, Count);

									ItemEntry.Count = Params->Count;
									Inventory::SpawnItem(ItemDefinition, ItemEntry, ItemEntry.LoadedAmmo, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, (AFortPawn*)PlayerController->Pawn, PlayerController->Pawn->K2_GetActorLocation());
								}
							}
						}
					}

					Inventory::UpdateInventory(PlayerController);
				}
			}
		}

		if (FuncName.contains("OnDamageServer"))
		{
			auto Params = (Params::BuildingActor_OnDamageServer*)Parms;
			auto Building = (ABuildingActor*)Object;

			if (Building && Params->DamageCauser && Params->InstigatedBy && Building->IsA(ABuildingSMActor::StaticClass()))
			{
				AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)Params->InstigatedBy;
				ABuildingSMActor* BuildingActor = (ABuildingSMActor*)Building;
				AFortWeapon* Weapon = (AFortWeapon*)Params->DamageCauser;

				if (BuildingActor && Weapon && Weapon->WeaponData)
				{
					if (PlayerController && PlayerController->Pawn && !BuildingActor->bDestroyed && Weapon->WeaponData->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
					{
						UFortResourceItemDefinition* ItemDefinition = Globals::GetKismetLibrary()->K2_GetResourceItemDefinition(BuildingActor->ResourceType);

						if (ItemDefinition && BuildingActor->BuildingResourceAmountOverride.RowName.IsValid())
						{
							UCurveTable* CurveTable = FindObjectFast<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

							if (!CurveTable)
							{
								CurveTable = StaticLoadObject<UCurveTable>(L"/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");
								HLog("AthenaResourceRates Not Found!");
							}

							if (CurveTable)
							{
								EEvaluateCurveTableResult OutResult;
								FString ContextString;
								float InXY = 0.f;
								float OutXY;

								Globals::GetFunctionLibrary()->EvaluateCurveTableRow(CurveTable, BuildingActor->BuildingResourceAmountOverride.RowName, InXY, &OutResult, &OutXY, ContextString);

								int PotentialResourceCount = OutXY / (BuildingActor->GetMaxHealth() / Params->Damage);
								int ResourceCount = round(PotentialResourceCount);

								if (ResourceCount > 0)
								{
									PlayerController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, PotentialResourceCount, false, (Params->Damage == 100.f));

									FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, ItemDefinition);
									UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);
									int CountToRemove = 0;

									if (ItemInstance)
									{
										int NewCount = ItemInstance->ItemEntry.Count + ResourceCount;

										if (NewCount > ItemDefinition->MaxStackSize)
										{
											CountToRemove = NewCount - ItemDefinition->MaxStackSize;
											NewCount = ItemDefinition->MaxStackSize;
										}

										Inventory::ModifyCountItem(PlayerController, ItemGuid, NewCount);
									}
									else
									{
										Inventory::AddInventoryItem(PlayerController, ItemDefinition, ResourceCount, 0);
									}

									if (CountToRemove > 0)
									{
										FFortItemEntry ItemEntry;
										ItemEntry.Count = CountToRemove;
										Inventory::SpawnItem(ItemDefinition, ItemEntry, 0, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, (AFortPawn*)PlayerController->Pawn, PlayerController->Pawn->K2_GetActorLocation());
									}
								}
							}

							Inventory::UpdateInventory(PlayerController);
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerAttemptInteract"))
		{
			auto Params = (Params::FortControllerComponent_Interaction_ServerAttemptInteract*)Parms;
			auto ControllerComponent = (UFortControllerComponent_Interaction*)Object;

			if (Params->ReceivingActor && Params->ReceivingActor->IsA(ABuildingContainer::StaticClass()))
			{
				ABuildingContainer* BuildingActor = (ABuildingContainer*)Params->ReceivingActor;

				if (!BuildingActor->bAlreadySearched)
				{
					FVector ActorLocation = BuildingActor->K2_GetActorLocation();
					FVector SpawnLocation = BuildingActor->LootSpawnLocation_Athena;

					FVector LootSpawnLocation = FVector(ActorLocation.X + SpawnLocation.X, ActorLocation.Y + SpawnLocation.Y, ActorLocation.Z + SpawnLocation.Z);

					HLog("ActorLocation X: " << ActorLocation.X << " Y: " << ActorLocation.Y << " Z: " << ActorLocation.Z);
					HLog("LootSpawnLocation X: " << LootSpawnLocation.X << " Y: " << LootSpawnLocation.Y << " Z: " << LootSpawnLocation.Z);

					auto ItemDefinition = FindObjectFast<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_SemiAuto_Athena_SR_Ore_T03.WID_Assault_SemiAuto_Athena_SR_Ore_T03");
					/*FFortBaseWeaponStats* WeaponStats = Inventory::GetWeaponStats((UFortWeaponItemDefinition*)ItemDefinition);

					FFortItemEntry ItemEntry;
					ItemEntry.Count = 1;

					Inventory::SpawnItem(ItemDefinition, ItemEntry, WeaponStats->ClipSize, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Chest, nullptr, LootSpawnLocation);*/

					BuildingActor->bAlreadySearched = true;
					BuildingActor->OnRep_bAlreadySearched();
					BuildingActor->ForceNetUpdate();
				}
				else
				{
					BuildingActor->BounceContainer();
					BuildingActor->ForceNetUpdate();
				}
			}
		}

		if (FuncName.contains("ServerCreateBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerCreateBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			if (PlayerController && PlayerController->Pawn)
			{
				AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;

				if (Pawn)
				{
					FCreateBuildingActorData* CreateBuildingData = &Params->CreateBuildingData;

					AFortInventory* WorldInventory = PlayerController->WorldInventory;
					TSubclassOf<ABuildingActor> BuildingClass = GetBroadcastRemoteClientInfo(PlayerController)->RemoteBuildableClass;

					const FVector_NetQuantize10& BuildLocation = CreateBuildingData->BuildLoc;
					const FRotator& BuildRotation = CreateBuildingData->BuildRot;

					if (WorldInventory)
					{
						__int64 a7;
						TArray<ABuildingSMActor*> BuildingsToBeDestroyed;
						bool bCantBuild = ToHooks::CantBuild(Globals::GetWorld(), BuildingClass, BuildLocation, BuildRotation, CreateBuildingData->bMirrored, &BuildingsToBeDestroyed, &a7);

						if (bCantBuild)
							return ProcessEvent(Object, Function, Parms);

						ABuildingSMActor* BuildingActor = Util::SpawnActor<ABuildingSMActor>(BuildingClass, BuildLocation, BuildRotation);

						if (BuildingActor)
						{
							UFortResourceItemDefinition* ItemDefinition = Globals::GetKismetLibrary()->K2_GetResourceItemDefinition(BuildingActor->ResourceType);
							FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, ItemDefinition);
							UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, ItemGuid);

							if (ItemInstance)
							{
								if (ItemInstance->ItemEntry.Count <= 0)
								{
									BuildingActor->K2_DestroyActor();
									return ProcessEvent(Object, Function, Parms);
								}

								if (!PlayerController->bBuildFree)
								{
									int NewCount = ItemInstance->ItemEntry.Count - 10;

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

							for (int i = 0; i < BuildingsToBeDestroyed.Num(); i++)
							{
								ABuildingSMActor* BuildingToBeDestroyed = BuildingsToBeDestroyed[i];
								if (!BuildingToBeDestroyed) continue;

								BuildingToBeDestroyed->K2_DestroyActor();
							}

							BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController, true);
						}
					}
				}
			}
		}

		if (FuncName.contains("ServerBeginEditingBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerBeginEditingBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			static auto EditToolDefinition = FindObjectFast<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

			if (!EditToolDefinition || !PlayerController || !PlayerController->Pawn)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;
			FGuid ItemGuid = Inventory::GetItemGuid(PlayerController, EditToolDefinition);
			Pawn->EquipWeaponDefinition(EditToolDefinition, ItemGuid);

			AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;

			if (EditTool && Params->BuildingActorToEdit)
			{
				EditTool->EditActor = Params->BuildingActorToEdit;
				EditTool->OnRep_EditActor();
			}
		}

		if (FuncName.contains("ServerEditBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerEditBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			ABuildingSMActor* BuildingActorToEdit = Params->BuildingActorToEdit;
			TSubclassOf<ABuildingSMActor> NewBuildingClass = Params->NewBuildingClass;

			if (!BuildingActorToEdit || !NewBuildingClass)
				return ProcessEvent(Object, Function, Parms);

			ToHooks::ReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass, BuildingActorToEdit->CurrentBuildingLevel, Params->RotationIterations, Params->bMirrored, PlayerController);
		}

		if (FuncName.contains("ServerEndEditingBuildingActor"))
		{
			auto Params = (Params::FortPlayerController_ServerEndEditingBuildingActor*)Parms;
			auto PlayerController = (AFortPlayerController*)Object;

			static auto EditToolDefinition = FindObjectFast<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

			if (!EditToolDefinition || !PlayerController || !PlayerController->Pawn)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)PlayerController->Pawn;
			AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;

			if (EditTool && Params->BuildingActorToStopEditing)
			{
				EditTool->EditActor = nullptr;
				EditTool->OnRep_EditActor();
			}
		}

		if (FuncName.contains("OnBuildingActorInitialized"))
		{
			auto Params = (Params::BuildingActor_OnBuildingActorInitialized*)Parms;
			auto Building = (ABuildingActor*)Object;

			if (Building && Building->IsA(ABuildingSMActor::StaticClass()))
			{
				ABuildingSMActor* BuildingActor = (ABuildingSMActor*)Building;
				AFortPlayerController* PlayerController = (AFortPlayerController*)BuildingActor->GetOwningController();

				if (PlayerController)
				{
					AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

					if (PlayerState)
					{
						BuildingActor->bPlayerPlaced = true;
						BuildingActor->Team = (EFortTeam)PlayerState->TeamIndex;
					}
				}
			}
		}

		if (FuncName.contains("ServerReleaseWeaponAbility"))
		{
			auto Weapon = (AFortWeapon*)Object;

			if (!Weapon || !Weapon->Owner)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)Weapon->Owner;

			if (!Pawn->Controller)
				return ProcessEvent(Object, Function, Parms);

			AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;
			UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Weapon->ItemEntryGuid);

			if (!ItemInstance)
				return ProcessEvent(Object, Function, Parms);

			FFortItemEntry* ItemEntry = &ItemInstance->ItemEntry;

			if (Weapon->AmmoCount != ItemEntry->LoadedAmmo)
			{
				Inventory::ModifyAmmoItem(PlayerController, ItemInstance->GetItemGuid(), Weapon->AmmoCount);
			}

			Inventory::UpdateInventory(PlayerController);
		}

		if (FuncName.contains("OnPlayImpactFX"))
		{
			auto Weapon = (AFortWeapon*)Object;

			if (!Weapon || !Weapon->Owner)
				return ProcessEvent(Object, Function, Parms);

			AFortPawn* Pawn = (AFortPawn*)Weapon->Owner;

			if (!Pawn->Controller)
				return ProcessEvent(Object, Function, Parms);

			AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;
			UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Weapon->ItemEntryGuid);

			if (!ItemInstance)
				return ProcessEvent(Object, Function, Parms);

			FFortItemEntry* ItemEntry = &ItemInstance->ItemEntry;

			if (Weapon->AmmoCount < ItemEntry->LoadedAmmo)
			{
				Inventory::ModifyAmmoItem(PlayerController, ItemInstance->GetItemGuid(), Weapon->AmmoCount);
			}

			Inventory::UpdateInventory(PlayerController);
		}

		if (FuncName.contains("NetMulticast_Athena_BatchedDamageCues"))
		{
			auto Pawn = (AFortPawn*)Object;

			if (!Pawn || !Pawn->Controller || !Pawn->CurrentWeapon)
				return ProcessEvent(Object, Function, Parms);

			AFortPlayerController* PlayerController = (AFortPlayerController*)Pawn->Controller;
			AFortWeapon* Weapon = Pawn->CurrentWeapon;

			if (!PlayerController)
				return ProcessEvent(Object, Function, Parms);

			UFortWorldItem* ItemInstance = Inventory::GetItemInstance(PlayerController, Weapon->ItemEntryGuid);

			if (!ItemInstance)
				return ProcessEvent(Object, Function, Parms);

			FFortItemEntry* ItemEntry = &ItemInstance->ItemEntry;

			if (Weapon->AmmoCount < ItemEntry->LoadedAmmo)
			{
				Inventory::ModifyAmmoItem(PlayerController, ItemInstance->GetItemGuid(), Weapon->AmmoCount);
			}

			Inventory::UpdateInventory(PlayerController);
		}

		if (FuncName.contains("OnCapsuleBeginOverlap"))
		{
			auto Params = (Params::FortPlayerPawn_OnCapsuleBeginOverlap*)Parms;
			auto Pawn = (AFortPlayerPawn*)Object;

			HLog("OnCapsuleBeginOverlap");

			if (Pawn)
			{
				auto PlayerController = (AFortPlayerController*)Pawn->Controller;

				if (PlayerController && Params->OtherActor->IsA(AFortPickup::StaticClass()))
				{
					AFortPickup* Pickup = (AFortPickup*)Params->OtherActor;

					if (Pickup && !Pickup->bPickedUp)
					{
						if (!Pickup->bServerStoppedSimulation)
							return ProcessEvent(Object, Function, Parms);

						UFortItemDefinition* ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;

						if (ItemDefinition)
						{
							if (ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) ||
								ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()) ||
								ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()))
							{
								FVector InStartDirection;

								Pawn->ServerHandlePickup(Pickup, 0.f, InStartDirection, true);
							}
						}
					}
				}
			}
		}

		return ProcessEvent(Object, Function, Parms);
	}


	void InitHooks()
	{
		START_DETOUR;
		DetourAttach(ProcessEvent, ProcessEventHook);
		DetourAttach(ToHooks::InternalGetNetMode, GetNetModeHook);
		//DetourAttach(ToHooks::ActorInternalGetNetMode, GetNetModeHook);
		DetourAttach(ToHooks::KickPlayer, KickPlayerHook);
		DetourAttach(ToHooks::GetPlayerViewPoint, GetPlayerViewPointHook);
		DetourAttach(ToHooks::DispatchRequest, DispatchRequestHook);
		DetourAttach(Abilities::CanActivateAbility, CanActivateAbilityHook);
		DetourAttach(Inventory::PickupDelay, Inventory::PickupDelayHook);
		DetourAttach(Inventory::OnReload, Inventory::OnReloadHook);
		DetourAttach(Inventory::TestDropItem, Inventory::TestDropItemHook);
		END_DETOUR;

		HLog("InitHooks Success !");
	}
}