#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_DUDEBRO_DBNO_SpawnHuskBolt

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_DUDEBRO_DBNO_SpawnHuskBolt.GC_DUDEBRO_DBNO_SpawnHuskBolt_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C final  : public UFortGameplayCueNotify_Burst
{
public:
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_DUDEBRO_DBNO_SpawnHuskBolt_C">();
	}
	static class UGC_DUDEBRO_DBNO_SpawnHuskBolt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_DUDEBRO_DBNO_SpawnHuskBolt_C>();
	}
};

}

