#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_c4_Detonate

#include "Basic.hpp"

#include "GAT_Athena_c4_Detonate_classes.hpp"
#include "GAT_Athena_c4_Detonate_parameters.hpp"


namespace SDK
{

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.ExecuteUbergraph_GAT_Athena_c4_Detonate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle Temp_struct_Variable                                   ()
// struct FGameplayTag                     Temp_struct_Variable_1                                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetAvatarActorFromActorInfo_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData                          (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData_1                        (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag_1                    (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   CallFunc_GetTrackedGroupedActors_ReturnValue           (ZeroConstructor, ReferenceParm)
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// class AActor*                           CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_BGA_Athena_C4_C*               K2Node_DynamicCast_AsB_BGA_Athena_C4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle CallFunc_AbilityTargetDataFromActor_ReturnValue        ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (ZeroConstructor, ReferenceParm)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_K2_RemoveItemFromPlayer_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// EEvaluateCurveTableResult               CallFunc_EvaluateCurveTableRow_OutResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_EvaluateCurveTableRow_OutXY                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEvaluateCurveTableResult               CallFunc_EvaluateCurveTableRow_OutResult_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_EvaluateCurveTableRow_OutXY_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData_2                        (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag_2                    (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)

void UGAT_Athena_c4_Detonate_C::ExecuteUbergraph_GAT_Athena_c4_Detonate(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, float CallFunc_Add_FloatFloat_ReturnValue, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AB_BGA_Athena_C4_C* K2Node_DynamicCast_AsB_BGA_Athena_C4, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "ExecuteUbergraph_GAT_Athena_c4_Detonate");

	Params::GAT_Athena_c4_Detonate_C_ExecuteUbergraph_GAT_Athena_c4_Detonate Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData = std::move(K2Node_CustomEvent_TargetData);
	Parms.K2Node_CustomEvent_ApplicationTag = std::move(K2Node_CustomEvent_ApplicationTag);
	Parms.K2Node_CustomEvent_TargetData_1 = std::move(K2Node_CustomEvent_TargetData_1);
	Parms.K2Node_CustomEvent_ApplicationTag_1 = std::move(K2Node_CustomEvent_ApplicationTag_1);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTrackedGroupedActors_ReturnValue = std::move(CallFunc_GetTrackedGroupedActors_ReturnValue);
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsB_BGA_Athena_C4 = K2Node_DynamicCast_AsB_BGA_Athena_C4;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = std::move(CallFunc_AbilityTargetDataFromActor_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue = CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult_1 = CallFunc_EvaluateCurveTableRow_OutResult_1;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY_1 = CallFunc_EvaluateCurveTableRow_OutXY_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_TargetData_2 = std::move(K2Node_CustomEvent_TargetData_2);
	Parms.K2Node_CustomEvent_ApplicationTag_2 = std::move(K2Node_CustomEvent_ApplicationTag_2);
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTrackedGroupedActors_ReturnValue = std::move(Parms.CallFunc_GetTrackedGroupedActors_ReturnValue);
	CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_c4_Detonate_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAT_Athena_c4_Detonate_C::Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	Params::GAT_Athena_c4_Detonate_C_Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAT_Athena_c4_Detonate_C::Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	Params::GAT_Athena_c4_Detonate_C_Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAT_Athena_c4_Detonate_C::Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	Params::GAT_Athena_c4_Detonate_C_Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.OnRep_NumberOfBombsOut
// (BlueprintCallable, BlueprintEvent)

void UGAT_Athena_c4_Detonate_C::OnRep_NumberOfBombsOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "OnRep_NumberOfBombsOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Update Used Explosive Stat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        CallFunc_GetActivatingPawn_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_Athena_c4_Detonate_C::Update_Used_Explosive_Stat(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_c4_Detonate_C", "Update Used Explosive Stat");

	Params::GAT_Athena_c4_Detonate_C_Update_Used_Explosive_Stat Parms{};

	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

