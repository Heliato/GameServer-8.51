#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckForMessageItems

#include "Basic.hpp"

#include "CheckForMessageItems_classes.hpp"
#include "CheckForMessageItems_parameters.hpp"


namespace SDK
{

// Function CheckForMessageItems.CheckForMessageItems_C.Closed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*          Param_Closed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACheckForMessageItems_C::Closed(class UCommonActivatablePanel* Param_Closed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckForMessageItems_C", "Closed");

	Params::CheckForMessageItems_C_Closed Parms{};

	Parms.Param_Closed = Param_Closed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckForMessageItems.CheckForMessageItems_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGiftBoxItemDefinition*       CallFunc_GetGiftBoxDefinition_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGiftBoxItemDefinition*       CallFunc_GetGiftBoxDefinition_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           CallFunc_TryLoadHeaderSubWidgetClass_OutWidgetClass    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TryLoadHeaderSubWidgetClass_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                      CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortActivatablePanel*            K2Node_DynamicCast_AsFort_Activatable_Panel            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(class UCommonActivatablePanel* Panel)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsInZone_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*                  CallFunc_GetContext_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*                  CallFunc_GetContext_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGiftBoxItem*                 CallFunc_GetNextMessage_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasActiveModalWidget_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsInViewport_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForMessageItems_C::ShowMessage(class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue_1, class UClass* CallFunc_TryLoadHeaderSubWidgetClass_OutWidgetClass, bool CallFunc_TryLoadHeaderSubWidgetClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UFortActivatablePanel* K2Node_DynamicCast_AsFort_Activatable_Panel, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, class UFortGiftBoxItem* CallFunc_GetNextMessage_ReturnValue, bool CallFunc_HasActiveModalWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckForMessageItems_C", "ShowMessage");

	Params::CheckForMessageItems_C_ShowMessage Parms{};

	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue = CallFunc_GetGiftBoxDefinition_ReturnValue;
	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue_1 = CallFunc_GetGiftBoxDefinition_ReturnValue_1;
	Parms.CallFunc_TryLoadHeaderSubWidgetClass_OutWidgetClass = CallFunc_TryLoadHeaderSubWidgetClass_OutWidgetClass;
	Parms.CallFunc_TryLoadHeaderSubWidgetClass_ReturnValue = CallFunc_TryLoadHeaderSubWidgetClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Activatable_Panel = K2Node_DynamicCast_AsFort_Activatable_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue_1 = CallFunc_GetUIManagerWidget_ReturnValue_1;
	Parms.CallFunc_GetNextMessage_ReturnValue = CallFunc_GetNextMessage_ReturnValue;
	Parms.CallFunc_HasActiveModalWidget_ReturnValue = CallFunc_HasActiveModalWidget_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckForMessageItems.CheckForMessageItems_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams        Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckForMessageItems_C::Execute(struct FFortScriptedActionParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckForMessageItems_C", "Execute");

	Params::CheckForMessageItems_C_Execute Parms{};

	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CheckForMessageItems.CheckForMessageItems_C.ExecuteUbergraph_CheckForMessageItems
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams        K2Node_Event_Params                                    (ConstParm, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPendingLogout_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForMessageItems_C::ExecuteUbergraph_CheckForMessageItems(int32 EntryPoint, struct FFortScriptedActionParams& K2Node_Event_Params, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CheckForMessageItems_C", "ExecuteUbergraph_CheckForMessageItems");

	Params::CheckForMessageItems_C_ExecuteUbergraph_CheckForMessageItems Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = std::move(K2Node_Event_Params);
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

