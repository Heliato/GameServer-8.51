#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_DanceStun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C
// 0x0048 (0x0380 - 0x0338)
class AGCN_Athena_DanceStun_C final  : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        AnimPivot;                                         // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeRemaining;                                     // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534D[0x4];                                     // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Duration;                                          // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCN_Athena_DanceStun(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueAtLevel_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_DanceStun_C">();
	}
	static class AGCN_Athena_DanceStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_DanceStun_C>();
	}
};

}

