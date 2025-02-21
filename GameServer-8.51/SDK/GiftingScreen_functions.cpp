#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingScreen

#include "Basic.hpp"

#include "GiftingScreen_classes.hpp"
#include "GiftingScreen_parameters.hpp"


namespace SDK
{

// Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*              CallFunc_GetRuntimeOptions_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::HandleMoreInfoClicked(bool* bPassThrough, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "HandleMoreInfoClicked");

	Params::GiftingScreen_C_HandleMoreInfoClicked Parms{};

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function GiftingScreen.GiftingScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    CallFunc_HasInputActionHandler_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasInputActionHandler_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::ToggleBackAction(bool bEnable, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "ToggleBackAction");

	Params::GiftingScreen_C_ToggleBackAction Parms{};

	Parms.bEnable = bEnable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue_1 = CallFunc_HasInputActionHandler_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGiftingScreen_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "GetWidgetForFramingViewedItem");

	Params::GiftingScreen_C_GetWidgetForFramingViewedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHandled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*         CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::HandleBackClicked(bool* bIsHandled, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "HandleBackClicked");

	Params::GiftingScreen_C_HandleBackClicked Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHandled != nullptr)
		*bIsHandled = Parms.bIsHandled;
}


// Function GiftingScreen.GiftingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*         NewOfferInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::OnOfferSet(class UFortStoreFrontOfferInfo* NewOfferInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnOfferSet");

	Params::GiftingScreen_C_OnOfferSet Parms{};

	Parms.NewOfferInfo = NewOfferInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bGiftingToSelf                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::OnMoveToGiftWrapStep(bool bGiftingToSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnMoveToGiftWrapStep");

	Params::GiftingScreen_C_OnMoveToGiftWrapStep Parms{};

	Parms.bGiftingToSelf = bGiftingToSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::GiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGiftingScreen_C::OnMoveToFriendSelectStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnMoveToFriendSelectStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftingScreen_C::BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::GiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::OnBeginGiftingSubmission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnBeginGiftingSubmission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::OnEndGiftingSubmission(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnEndGiftingSubmission");

	Params::GiftingScreen_C_OnEndGiftingSubmission Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_2_OnItemIsHoveredChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::GiftingScreen_C_BndEvt__TileView_GiftBoxes_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsMobileGame_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreFrontOfferInfo*         K2Node_Event_NewOfferInfo                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bGiftingToSelf                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetActiveWidgetIndex_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          K2Node_ComponentBoundEvent_Item_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ComponentBoundEvent_bIsHovered                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          K2Node_ComponentBoundEvent_Item                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ComponentBoundEvent_bIsSelected                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle              K2Node_MakeStruct_DataTableRowHandle                   (NoDestructor)
// TDelegate<void(bool* bPassThrough)>     K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*              CallFunc_GetRuntimeOptions_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Len_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingScreen_C::ExecuteUbergraph_GiftingScreen(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UFortStoreFrontOfferInfo* K2Node_Event_NewOfferInfo, ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bGiftingToSelf, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftingScreen_C", "ExecuteUbergraph_GiftingScreen");

	Params::GiftingScreen_C_ExecuteUbergraph_GiftingScreen Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Event_NewOfferInfo = K2Node_Event_NewOfferInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bGiftingToSelf = K2Node_Event_bGiftingToSelf;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_MakeStruct_DataTableRowHandle = std::move(K2Node_MakeStruct_DataTableRowHandle);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

