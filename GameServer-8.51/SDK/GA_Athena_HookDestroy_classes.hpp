#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HookDestroy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "ToyAngleSelectorInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// 0x0078 (0x09B8 - 0x0940)
class UGA_Athena_HookDestroy_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            SwitchLockGE;                                      // 0x0950(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit_;                                              // 0x0958(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EC[0x3];                                     // 0x0959(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CleanedAngle;                                      // 0x095C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>          LaunchAngleVariations;                             // 0x0960(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                           TravelMontage;                                     // 0x0970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0978(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65ED[0x7];                                     // 0x0979(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Hookgun_Athena_C*                    WeaponActor;                                       // 0x0980(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ChangeEquipmentTag;                                // 0x0988(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           RopeActiveTag;                                     // 0x09A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                NullMontage;                                       // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_15, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AB_Prj_Hook_Athena_C* K2Node_DynamicCast_AsB_Prj_Hook_Athena, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_14, class FName CallFunc_PickGrappleMontage_SectionName, class FName K2Node_CustomEvent_NotifyName_13, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_12, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_11, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_10, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_7, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_6, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_5, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_2, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_1, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_17, class FName Temp_name_Variable_3, class FName K2Node_CustomEvent_NotifyName_16, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_19, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_19, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_17, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_2, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess_3, TDelegate<void(class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_21, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_18);
	void ResetDoOnce();
	void K2_ActivateAbility();
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnRep_AmmoReserves();
	void PickGrappleMontage(float PitchAngle, class FName* SectionName, int32 Temp_int_Array_Index_Variable, float CallFunc_ClampAngle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HookDestroy_C">();
	}
	static class UGA_Athena_HookDestroy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HookDestroy_C>();
	}
};

}

