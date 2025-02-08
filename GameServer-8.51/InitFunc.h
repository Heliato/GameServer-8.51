#pragma once

namespace Init
{
	bool InitializeAll()
	{
		auto ProcessEventPattern = Util::FindPattern("40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 48 8D 6C 24 ? 48 89 9D ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C5 48 89 85 ? ? ? ? 8B 41 0C 45 33 F6 3B 05 ? ? ? ? 4D 8B F8");
		CheckPattern(ProcessEventPattern, "Failed to find ProcessEventPattern");

		auto ServerReplicateActorsPattern = Util::FindPattern("4C 8B DC 55 41 55 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 8B 41 30 45 33 C0");
		CheckPattern(ServerReplicateActorsPattern, "Failed to find ServerReplicateActorsPattern");

		auto PatternTickFlush = Util::FindPattern("4C 8B DC 55 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 49 89 5B 18 49 89 73 F0 48 8B F1 49 89 7B E8 48 8D 0D ? ? ? ? 4D 89 73 D0");
		CheckPattern(PatternTickFlush, "Failed To Find PatternTickFlush");

		auto PatternInitHost = Util::FindPattern("48 8B C4 48 81 EC ? ? ? ? 48 89 58 18 4C 8D 05 ? ? ? ? 48 8B D9");
		CheckPattern(PatternInitHost, "Failed To Find PatternInitHost");

		auto PatternInitListen = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 50 48 8B BC 24 ? ? ? ? 49 8B F0");
		CheckPattern(PatternInitListen, "Failed To Find PatternInitListen");

		auto PatternSetWorld = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 99 ? ? ? ? 48 8B F2 48 8B F9 48 85 DB 0F 84 ? ? ? ? 48 8B 97 ? ? ? ? 48 8D 8B ? ? ? ? E8 ? ? ? ?");
		CheckPattern(PatternSetWorld, "Failed To Find PatternSetWorld");

		auto PatternKickPlayer = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 49 8B F0 48 8B DA 48 85 D2 74 6F");
		CheckPattern(PatternKickPlayer, "Failed To Find PatternKickPlayer");

		auto PatternDispatchRequest = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 80 3D ? ? ? ? ? 48 8D 35 ? ? ? ? 41 8B D8");
		CheckPattern(PatternDispatchRequest, "Failed To Find PatternDispatchRequest");

		auto PatternApplyCharacterCustomization = Util::FindPattern("48 8B C4 48 89 50 10 55 57 48 8D 68 A1 48 81 EC ? ? ? ? 80 B9 ? ? ? ? ? 48 8B F9");
		CheckPattern(PatternApplyCharacterCustomization, "Failed To Find PatternApplyCharacterCustomization");

		auto PatternInternalTryActivateAbility = Util::FindPattern("4C 89 4C 24 ? 4C 89 44 24 ? 89 54 24 10 55 53 56 57 41 54 41 56");
		CheckPattern(PatternInternalTryActivateAbility, "Failed To Find PatternInternalTryActivateAbility");

		auto PatternCreateDefaultObject = Util::FindPattern("4C 8B DC 55 57 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 83 B9 ? ? ? ? ? 48 8B F9");
		CheckPattern(PatternCreateDefaultObject, "Failed To Find PatternCreateDefaultObject");

		auto PatternGiveAbility = Util::FindPattern("48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 56 48 83 EC 20 83 B9 ? ? ? ? ? 49 8B E8 4C 8B F2 48 8B F9 7E 56");
		CheckPattern(PatternGiveAbility, "Failed To Find PatternGiveAbility");

		auto PatternCanActivateAbility = Util::FindPattern("48 89 5C 24 ? 4C 89 4C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 49 8B F0");
		CheckPattern(PatternCanActivateAbility, "Failed To Find PatternCanActivateAbility");

		auto PatternGetPlayerViewPoint = Util::FindPattern("48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC 40 48 8B 81 ? ? ? ? 4D 8B F0");
		CheckPattern(PatternGetPlayerViewPoint, "Failed To Find PatternGetPlayerViewPoint");

		auto FMemory_ReallocPattern = Util::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B F1 41 8B D8 48 8B 0D ? ? ? ? 48 8B FA");
		CheckPattern(FMemory_ReallocPattern, "Failed to find FMemory_ReallocPattern");

		auto PatternPickupDelay = Util::FindPattern("40 53 56 48 83 EC 38 4C 89 6C 24 ? 48 8B F1 4C 8B A9 ? ? ? ? 4D 85 ED 0F 84 ? ? ? ? 49 63 8D ? ? ? ? 85 C9");
		CheckPattern(PatternPickupDelay, "Failed To Find PatternPickupDelay");


		auto PatternOnReload = Util::FindPattern("89 54 24 10 55 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 80 B9 ? ? ? ? ? 4C 8B F1 0F 85 ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 84 C0");
		CheckPattern(PatternOnReload, "Failed To Find PatternOnReload");

		auto PatternTestDropItem = Util::FindPattern("48 89 54 24 ? 48 89 4C 24 ? 55 53 57 41 55 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B B9 ? ? ? ? 33 DB");
		CheckPattern(PatternTestDropItem, "Failed To Find PatternTestDropItem");

		auto PatternCantBuild = Util::FindPattern("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 41 56 48 83 EC 60 49 8B E9");
		CheckPattern(PatternCantBuild, "Failed To Find PatternCantBuild");



		auto PatternInternalGetNetMode = Util::FindPattern("40 53 48 81 EC ? ? ? ? 48 83 79 ? ? 48 8B D9 74 0E");
		CheckPattern(PatternInternalGetNetMode, "Failed To Find PatternInternalGetNetMode");

		auto PatternActorInternalGetNetMode = Util::FindPattern("48 89 5C 24 ? 57 48 83 EC 20 48 8B 01 48 8B D9 FF 90 ? ? ? ? 4C 8B 83 ? ? ? ? 48 8B F8");
		CheckPattern(PatternActorInternalGetNetMode, "Failed To Find PatternActorInternalGetNetMode");

		if (CheckAllPattern())
		{
			auto ImageBase = InSDKUtils::GetImageBase();

			// Base
			ProcessEvent = decltype(ProcessEvent)(ProcessEventPattern);
			FMemory_Realloc = decltype(FMemory_Realloc)(FMemory_ReallocPattern);

			// Beacon
			Beacon::ServerReplicateActors = decltype(Beacon::ServerReplicateActors)(ServerReplicateActorsPattern);
			Beacon::TickFlush = decltype(Beacon::TickFlush)(PatternTickFlush);
			Beacon::InitHost = decltype(Beacon::InitHost)(PatternInitHost);
			Beacon::InitListen = decltype(Beacon::InitListen)(PatternInitListen);
			Beacon::SetWorld = decltype(Beacon::SetWorld)(PatternSetWorld);

			// Abilities
			Abilities::InternalTryActivateAbility = decltype(Abilities::InternalTryActivateAbility)(PatternInternalTryActivateAbility);
			Abilities::CreateDefaultObject = decltype(Abilities::CreateDefaultObject)(PatternCreateDefaultObject);
			Abilities::CanActivateAbility = decltype(Abilities::CanActivateAbility)(PatternCanActivateAbility);
			Abilities::GiveAbility = decltype(Abilities::GiveAbility)(PatternGiveAbility);

			// Others
			ToHooks::GetPlayerViewPoint = decltype(ToHooks::GetPlayerViewPoint)(PatternGetPlayerViewPoint);
			ToHooks::ReplaceBuildingActor = decltype(ToHooks::ReplaceBuildingActor)(ImageBase + 0x11252B0);
			ToHooks::ApplyCharacterCustomization = decltype(ToHooks::ApplyCharacterCustomization)(PatternApplyCharacterCustomization);
			ToHooks::InternalGetNetMode = decltype(ToHooks::InternalGetNetMode)(PatternInternalGetNetMode);
			ToHooks::ActorInternalGetNetMode = decltype(ToHooks::ActorInternalGetNetMode)(PatternActorInternalGetNetMode);
			ToHooks::KickPlayer = decltype(ToHooks::KickPlayer)(PatternKickPlayer);
			ToHooks::DispatchRequest = decltype(ToHooks::DispatchRequest)(PatternDispatchRequest);
			ToHooks::CantBuild = decltype(ToHooks::CantBuild)(PatternCantBuild);

			// Inventory
			Inventory::PickupDelay = decltype(Inventory::PickupDelay)(PatternPickupDelay);
			Inventory::OnReload = decltype(Inventory::OnReload)(PatternOnReload);
			Inventory::TestDropItem = decltype(Inventory::TestDropItem)(PatternTestDropItem);

			// Test
			FortKismetHooks::K2_SpawnPickupInWorld = decltype(FortKismetHooks::K2_SpawnPickupInWorld)(ImageBase + 0x1A3AD60);
			return true;
		}

		return false;
	}
}
