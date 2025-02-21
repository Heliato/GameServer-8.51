#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Commando_InAPinch

#include "Basic.hpp"

#include "GCN_Commando_InAPinch_classes.hpp"
#include "GCN_Commando_InAPinch_parameters.hpp"


namespace SDK
{

// Function GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.ExecuteUbergraph_GCN_Commando_InAPinch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_MyTarget                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       K2Node_Event_EventType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_Event_Parameters                                (ConstParm, ContainsInstancedReference)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCN_Commando_InAPinch_C::ExecuteUbergraph_GCN_Commando_InAPinch(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, EGameplayCueEvent K2Node_Event_EventType, struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Commando_InAPinch_C", "ExecuteUbergraph_GCN_Commando_InAPinch");

	Params::GCN_Commando_InAPinch_C_ExecuteUbergraph_GCN_Commando_InAPinch Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = std::move(K2Node_Event_Parameters);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_Commando_InAPinch_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Commando_InAPinch_C", "K2_HandleGameplayCue");

	Params::GCN_Commando_InAPinch_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

