#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyDispatcher

#include "Basic.hpp"

#include "PlayerSurveyDispatcher_classes.hpp"
#include "PlayerSurveyDispatcher_parameters.hpp"


namespace SDK
{

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCommonActivatablePanel* Panel)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UCommonActivatablePanel*          K2Node_CustomEvent_Panel                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyPanelBase*       K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyPanelBase*       K2Node_Event_Widget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsActivated_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyPanelBase*       K2Node_Event_Widget_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyPanelBase*       K2Node_Event_Widget_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::ExecuteUbergraph_PlayerSurveyDispatcher(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, class UFortPlayerSurveyPanelBase* K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base, bool K2Node_DynamicCast_bSuccess, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget, bool CallFunc_IsActivated_ReturnValue, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget_1, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "ExecuteUbergraph_PlayerSurveyDispatcher");

	Params::PlayerSurveyDispatcher_C_ExecuteUbergraph_PlayerSurveyDispatcher Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Panel = K2Node_CustomEvent_Panel;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue_1 = CallFunc_GetUIManagerWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base = K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_Widget_2 = K2Node_Event_Widget_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          Panel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::HandleFirstActivation(class UCommonActivatablePanel* Panel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "HandleFirstActivation");

	Params::PlayerSurveyDispatcher_C_HandleFirstActivation Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::StartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "StartSurveyIntro");

	Params::PlayerSurveyDispatcher_C_StartSurveyIntro Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.RemoveSurveyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::RemoveSurveyWidget(class UFortPlayerSurveyPanelBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "RemoveSurveyWidget");

	Params::PlayerSurveyDispatcher_C_RemoveSurveyWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::DisplaySurveyWidget(class UFortPlayerSurveyPanelBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "DisplaySurveyWidget");

	Params::PlayerSurveyDispatcher_C_DisplaySurveyWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*       Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UCommonActivatablePanel* Panel)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UPlayerSurveyPanel_C*             K2Node_DynamicCast_AsPlayer_Survey_Panel               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyDispatcher_C::DoStartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget, TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate, class UPlayerSurveyPanel_C* K2Node_DynamicCast_AsPlayer_Survey_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSurveyDispatcher_C", "DoStartSurveyIntro");

	Params::PlayerSurveyDispatcher_C_DoStartSurveyIntro Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPlayer_Survey_Panel = K2Node_DynamicCast_AsPlayer_Survey_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

