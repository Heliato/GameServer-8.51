#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_Tactical_MeleeHitsHeal

#include "Basic.hpp"

#include "GA_Ninja_Tactical_MeleeHitsHeal_classes.hpp"
#include "GA_Ninja_Tactical_MeleeHitsHeal_parameters.hpp"


namespace SDK
{

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_Event_EventData                                 (ConstParm)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*          CallFunc_GetAbilitySystemComponent_ReturnValue         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetGameTimeInSeconds_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bWasCancelled                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetGameTimeInSeconds_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Abs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_FloatFloat_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool K2Node_Event_bWasCancelled, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	Parms.K2Node_Event_EventData = std::move(K2Node_Event_EventData);
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_OnEndAbility");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Param_EventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& Param_EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.Param_EventData = std::move(Param_EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBaseWeaponStats             CallFunc_GetDataTableRowFromName_OutRow                ()
// bool                                    CallFunc_GetDataTableRowFromName_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer            CallFunc_MakeLiteralGameplayTagContainer_ReturnValue   ()
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "SetupAbility");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = std::move(CallFunc_GetDataTableRowFromName_OutRow);
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = std::move(CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess = CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue = CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAllTags_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue, bool CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);
	Parms.CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue = CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue;
	Parms.CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue = CallFunc_ShouldHammerHitsHealRespondToEvent_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

