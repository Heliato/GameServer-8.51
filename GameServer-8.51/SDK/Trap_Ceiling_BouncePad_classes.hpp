#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Ceiling_BouncePad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C
// 0x0190 (0x0DF0 - 0x0C60)
class ATrap_Ceiling_BouncePad_C final  : public ABuildingTrapCeiling
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BouncePadFX;                                       // 0x0C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Reload_Sound;                                      // 0x0C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Destroyed_Sound;                              // 0x0CB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OverlappedActor;                                   // 0x0CB8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerMinusDestructionRange;                       // 0x0CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BouncePadTagMaxCount;                              // 0x0CC4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C1B[0x4];                                     // 0x0CCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  LaunchedPlayer;                                    // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                     LaunchedVehicle;                                   // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_LowGravity;                                     // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BounceTracker1;                                 // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_BounceTracker2;                                 // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         VehicleVelocityMultiplier;                         // 0x0CF8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         VehicleMinLateralVelocity;                         // 0x0D18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         VehicleMaxVelocity;                                // 0x0D38(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         PlayerMaxLateralVelocity;                          // 0x0D58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         PlayerMaxDownwardVelocity;                         // 0x0D78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         PlayerMaxVelocity;                                 // 0x0D98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IgnoreFallDamage;                                  // 0x0DB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C1C[0x7];                                     // 0x0DB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_LowGravityNoFX;                                 // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_LowGravityWithHopRocks;                         // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         SetIgnoreFallDamage;                               // 0x0DD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Trap_Ceiling_BouncePad(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, bool Temp_bool_IsClosed_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess_1, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, class AFortAthenaSKVehicle* K2Node_DynamicCast_AsFort_Athena_SKVehicle, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ReceiveDestroyed();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnFinishedBuilding();
	void OnPlaced();
	void UserConstructionScript();
	void VehicleLaunch(class AFortAthenaVehicle* Vehicle, float CallFunc_GetValueAtLevel_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_ClampVectorSize_ReturnValue);
	void PlayerLaunch(class AFortPlayerPawnAthena* Player, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue_1);
	void ApplyGameplayEffects(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_4);
	void OnRep_Overlappedactor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Ceiling_BouncePad_C">();
	}
	static class ATrap_Ceiling_BouncePad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Ceiling_BouncePad_C>();
	}
};

}

