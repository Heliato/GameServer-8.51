#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativePlayModal

#include "Basic.hpp"

#include "CreativePlayModal_classes.hpp"
#include "CreativePlayModal_parameters.hpp"


namespace SDK
{

// Function CreativePlayModal.CreativePlayModal_C.ExecuteUbergraph_CreativePlayModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreativeIslandLinkScreen_C*      CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(class UFortCreativeIslandLink* IslandLink)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Temp_class_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsCreativeModeAccessLimited_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCreativeServerInfo*          K2Node_ComponentBoundEvent_ServerInfo                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreativeServerOptions_C*         K2Node_DynamicCast_AsCreative_Server_Options           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_PauseAnimation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetStartTime_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_PauseAnimation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_FloatFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetEndTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bUsingGamepad                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Temp_class_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_Event_InitObject                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaMatchmakingWidget*     K2Node_DynamicCast_AsFort_Athena_Matchmaking_Widget    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*         CallFunc_GetUINavigationManager_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetSelectedButtonIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    CallFunc_GetButtonAtIndex_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUISubsystem*               CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreativeServerOptionsTile_C*     K2Node_DynamicCast_AsCreative_Server_Options_Tile      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(bool bUsingGamepad)>     K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor)
// class UClass*                           K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*              CallFunc_GetRuntimeOptions_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCreativeIslandLink*          K2Node_CustomEvent_IslandLink                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UCreativePlayModal_C::ExecuteUbergraph_CreativePlayModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, float Temp_float_Variable, class UCreativeIslandLinkScreen_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, TDelegate<void(class UFortCreativeIslandLink* IslandLink)> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UClass* Temp_class_Variable, bool CallFunc_IsCreativeModeAccessLimited_ReturnValue, class UFortCreativeServerInfo* K2Node_ComponentBoundEvent_ServerInfo, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select_Default, class UCreativeServerOptions_C* K2Node_DynamicCast_AsCreative_Server_Options, bool K2Node_DynamicCast_bSuccess, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_bUsingGamepad, class UClass* Temp_class_Variable_1, class UObject* K2Node_Event_InitObject, class UFortAthenaMatchmakingWidget* K2Node_DynamicCast_AsFort_Athena_Matchmaking_Widget, bool K2Node_DynamicCast_bSuccess_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, bool Temp_bool_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCreativeServerOptionsTile_C* K2Node_DynamicCast_AsCreative_Server_Options_Tile, bool K2Node_DynamicCast_bSuccess_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate_3, class UClass* K2Node_Select_Default_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, ESlateVisibility K2Node_Select_Default_3, class UFortCreativeIslandLink* K2Node_CustomEvent_IslandLink, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "ExecuteUbergraph_CreativePlayModal");

	Params::CreativePlayModal_C_ExecuteUbergraph_CreativePlayModal Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsCreativeModeAccessLimited_ReturnValue = CallFunc_IsCreativeModeAccessLimited_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ServerInfo = K2Node_ComponentBoundEvent_ServerInfo;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsCreative_Server_Options = K2Node_DynamicCast_AsCreative_Server_Options;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue_1 = CallFunc_PauseAnimation_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.K2Node_DynamicCast_AsFort_Athena_Matchmaking_Widget = K2Node_DynamicCast_AsFort_Athena_Matchmaking_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetSelectedButtonIndex_ReturnValue = CallFunc_GetSelectedButtonIndex_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Server_Options_Tile = K2Node_DynamicCast_AsCreative_Server_Options_Tile;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_CustomEvent_IslandLink = K2Node_CustomEvent_IslandLink;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::CreativePlayModal_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.CreativeIslandCodeConfirmedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCreativeIslandLink*          IslandLink                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::CreativeIslandCodeConfirmedEvent(class UFortCreativeIslandLink* IslandLink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "CreativeIslandCodeConfirmedEvent");

	Params::CreativePlayModal_C_CreativeIslandCodeConfirmedEvent Parms{};

	Parms.IslandLink = IslandLink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::CreativePlayModal_C_BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::CreativePlayModal_C_BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "InitFromObject");

	Params::CreativePlayModal_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.InputTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePlayModal_C::InputTypeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "InputTypeChanged");

	Params::CreativePlayModal_C_InputTypeChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UCreativePlayModal_C::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "OnBeginOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativePlayModal.CreativePlayModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCreativePlayModal_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativePlayModal.CreativePlayModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCreativePlayModal_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativePlayModal.CreativePlayModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativePlayModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativePlayModal.CreativePlayModal_C.BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortCreativeServerInfo*          ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature(class UFortCreativeServerInfo* ServerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature");

	Params::CreativePlayModal_C_BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature Parms{};

	Parms.ServerInfo = ServerInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.NullActionHandler
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePlayModal_C::NullActionHandler(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "NullActionHandler");

	Params::CreativePlayModal_C_NullActionHandler Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function CreativePlayModal.CreativePlayModal_C.InitializeAddFriends
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlatformName                                           (Edit, BlueprintVisible)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FString                           CallFunc_GetPlatformName_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_StrStr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_StrStr_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePlayModal_C::InitializeAddFriends(class FText PlatformName, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "InitializeAddFriends");

	Params::CreativePlayModal_C_InitializeAddFriends Parms{};

	Parms.PlatformName = PlatformName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue = CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = std::move(CallFunc_GetPlatformName_ReturnValue);
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function CreativePlayModal.CreativePlayModal_C.HandleSocialImportClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void UCreativePlayModal_C::HandleSocialImportClosed(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "HandleSocialImportClosed");

	Params::CreativePlayModal_C_HandleSocialImportClosed Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativePlayModal.CreativePlayModal_C.SetStartIsland
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             StartIslandName                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FText                             Temp_text_Variable                                     ()
// class FText                             K2Node_Select_Default                                  ()

void UCreativePlayModal_C::SetStartIsland(class FText StartIslandName, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "SetStartIsland");

	Params::CreativePlayModal_C_SetStartIsland Parms{};

	Parms.StartIslandName = StartIslandName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function CreativePlayModal.CreativePlayModal_C.ManageCancelButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsUsingGamepad_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsMobileGame_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsMobileGame_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePlayModal_C::ManageCancelButton(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativePlayModal_C", "ManageCancelButton");

	Params::CreativePlayModal_C_ManageCancelButton Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue_1 = CallFunc_IsMobileGame_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

