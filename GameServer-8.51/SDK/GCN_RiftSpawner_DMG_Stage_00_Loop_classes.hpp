#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawner_DMG_Stage_00_Loop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C
// 0x0008 (0x0798 - 0x0790)
class AGCN_RiftSpawner_DMG_Stage_00_Loop_C final  : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RiftSpawner_DMG_Stage_00_Loop_C">();
	}
	static class AGCN_RiftSpawner_DMG_Stage_00_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_RiftSpawner_DMG_Stage_00_Loop_C>();
	}
};

}

