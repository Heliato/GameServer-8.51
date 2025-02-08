#pragma once

namespace FortKismetHooks
{
	AFortPickup* (*K2_SpawnPickupInWorld)(UObject* Object, UFunction* Function, void* Parms);

	AFortPickup* K2_SpawnPickupInWorldHook(UObject* Object, UFunction* Function, void* Parms)
	{
		auto Params = (Params::FortKismetLibrary_K2_SpawnPickupInWorld*)Parms;
		bool bRandomRotation = Params->bRandomRotation;

		HLog("K2_SpawnPickupInWorldHook");
		HLog("bRandomRotation: " << bRandomRotation);

		return K2_SpawnPickupInWorld(Object, Function, Parms);
	}

	void Init()
	{
		START_DETOUR;
		DetourAttach(K2_SpawnPickupInWorld, K2_SpawnPickupInWorldHook);
		END_DETOUR;
	}
}