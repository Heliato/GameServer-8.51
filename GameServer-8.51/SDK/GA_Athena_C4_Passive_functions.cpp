#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_C4_Passive

#include "Basic.hpp"

#include "GA_Athena_C4_Passive_classes.hpp"
#include "GA_Athena_C4_Passive_parameters.hpp"


namespace SDK
{

// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.ExecuteUbergraph_GA_Athena_C4_Passive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_CustomEvent_Payload                             ()
// struct FGameplayEventData               Temp_struct_Variable                                   ()
// class UAbilityTask_WaitGameplayEvent*   CallFunc_WaitGameplayEvent_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>                   CallFunc_GetTrackedGroupedActors_ReturnValue           (ZeroConstructor, ReferenceParm)
// class AActor*                           CallFunc_GetAvatarActorFromActorInfo_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(const struct FGameplayEventData& Payload)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// int32                                   CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_K2_RemoveItemFromPlayer_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_C4_Passive_C::ExecuteUbergraph_GA_Athena_C4_Passive(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetTrackedGroupedActors_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_C4_Passive_C", "ExecuteUbergraph_GA_Athena_C4_Passive");

	Params::GA_Athena_C4_Passive_C_ExecuteUbergraph_GA_Athena_C4_Passive Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Payload = std::move(K2Node_CustomEvent_Payload);
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrackedGroupedActors_ReturnValue = std::move(CallFunc_GetTrackedGroupedActors_ReturnValue);
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue = CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTrackedGroupedActors_ReturnValue = std::move(Parms.CallFunc_GetTrackedGroupedActors_ReturnValue);
}


// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.EventReceived_66DB263A44E303CAE6B174AFF4094381
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_Passive_C::EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_C4_Passive_C", "EventReceived_66DB263A44E303CAE6B174AFF4094381");

	Params::GA_Athena_C4_Passive_C_EventReceived_66DB263A44E303CAE6B174AFF4094381 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_C4_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_C4_Passive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

