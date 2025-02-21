#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeTile_Weekly

#include "Basic.hpp"

#include "ChallengeTile_Weekly_classes.hpp"
#include "ChallengeTile_Weekly_parameters.hpp"


namespace SDK
{

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.SetDynamicColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           WeeklyDynamicMaterialTarget                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle           FortChallengeSetStyle                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeTile_Weekly_C::SetDynamicColors(class UImage* WeeklyDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "SetDynamicColors");

	Params::ChallengeTile_Weekly_C_SetDynamicColors Parms{};

	Parms.WeeklyDynamicMaterialTarget = WeeklyDynamicMaterialTarget;
	Parms.FortChallengeSetStyle = std::move(FortChallengeSetStyle);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle           DisplayStyle                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bIsComplete                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Weekly_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "OnChallengeSetEstablished");

	Params::ChallengeTile_Weekly_C_OnChallengeSetEstablished Parms{};

	Parms.DisplayStyle = std::move(DisplayStyle);
	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Weekly_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Weekly_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.OnContainsPartyAssistedChallengeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bHasPartyAssistedChallenge                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Weekly_C::OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "OnContainsPartyAssistedChallengeChanged");

	Params::ChallengeTile_Weekly_C_OnContainsPartyAssistedChallengeChanged Parms{};

	Parms.bHasPartyAssistedChallenge = bHasPartyAssistedChallenge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.ExecuteUbergraph_ChallengeTile_Weekly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortChallengeSetStyle           K2Node_Event_DisplayStyle                              (ConstParm)
// bool                                    K2Node_Event_bIsComplete                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_bIsLocked                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bHasPartyAssistedChallenge                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Weekly_C::ExecuteUbergraph_ChallengeTile_Weekly(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bHasPartyAssistedChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Weekly_C", "ExecuteUbergraph_ChallengeTile_Weekly");

	Params::ChallengeTile_Weekly_C_ExecuteUbergraph_ChallengeTile_Weekly Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_DisplayStyle = std::move(K2Node_Event_DisplayStyle);
	Parms.K2Node_Event_bIsComplete = K2Node_Event_bIsComplete;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_bHasPartyAssistedChallenge = K2Node_Event_bHasPartyAssistedChallenge;

	UObject::ProcessEvent(Func, &Parms);
}

}

