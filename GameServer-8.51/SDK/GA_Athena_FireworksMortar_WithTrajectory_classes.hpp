#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_FireworksMortar_WithTrajectory

#include "Basic.hpp"

#include "GA_Athena_UtilityGrenade_WithTrajectory_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C
// 0x0038 (0x0C90 - 0x0C58)
class UGA_Athena_FireworksMortar_WithTrajectory_C final  : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_FireworksMortar_WithTrajectory_C; // 0x0C58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         YawOffsetMaster;                                   // 0x0C60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4996[0x4];                                     // 0x0C64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_YawOffsetValue;                                // 0x0C68(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_Tracker;                                        // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AB_ProjectileTrajectory_Athena_FireworksMortar_C* K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar, bool K2Node_DynamicCast_bSuccess_1);
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void SetupDummyProjectile();
	void AthenaProjectileSpawned(class AFortProjectileBase* Param_ProjectileReference);
	void SetBalanceValues(float CallFunc_GetValueAtLevel_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_FireworksMortar_WithTrajectory_C">();
	}
	static class UGA_Athena_FireworksMortar_WithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_FireworksMortar_WithTrajectory_C>();
	}
};

}

