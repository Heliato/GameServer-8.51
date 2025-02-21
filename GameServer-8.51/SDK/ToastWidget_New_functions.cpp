#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastWidget_New

#include "Basic.hpp"

#include "ToastWidget_New_classes.hpp"
#include "ToastWidget_New_parameters.hpp"


namespace SDK
{

// Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::OnFinishedToast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnFinishedToast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// struct FPointerEvent                    K2Node_Event_MouseEvent_1                              (ConstParm)
// struct FPointerEvent                    K2Node_Event_MouseEvent                                (ConstParm)
// class UCommonButton*                    K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::ExecuteUbergraph_ToastWidget_New(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "ExecuteUbergraph_ToastWidget_New");

	Params::ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_MouseEvent_1 = std::move(K2Node_Event_MouseEvent_1);
	Parms.K2Node_Event_MouseEvent = std::move(K2Node_Event_MouseEvent);
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_New_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::HandleIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "HandleIntroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::HandleOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "HandleOutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnMouseLeave");

	Params::ToastWidget_New_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "OnMouseEnter");

	Params::ToastWidget_New_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::PlayOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "PlayOutro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ToastWidget_New.ToastWidget_New_C.SetToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*              Toast                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIFriendNotification*        K2Node_DynamicCast_AsFort_UIFriend_Notification        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        CallFunc_GetOpenButtonVisibility_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::SetToast(class UFortUINotification* Toast, class UFortUIFriendNotification* K2Node_DynamicCast_AsFort_UIFriend_Notification, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility CallFunc_GetOpenButtonVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "SetToast");

	Params::ToastWidget_New_C_SetToast Parms{};

	Parms.Toast = Toast;
	Parms.K2Node_DynamicCast_AsFort_UIFriend_Notification = K2Node_DynamicCast_AsFort_UIFriend_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOpenButtonVisibility_ReturnValue = CallFunc_GetOpenButtonVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*                 TextBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*                 LocalTextBlock                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             LocalText                                              (Edit, BlueprintVisible)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastWidget_New_C::ShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "ShowText");

	Params::ToastWidget_New_C_ShowText Parms{};

	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::StartIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "StartIntro");

	Params::ToastWidget_New_C_StartIntro Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UToastWidget_New_C::GetOpenButtonVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "GetOpenButtonVisibility");

	Params::ToastWidget_New_C_GetOpenButtonVisibility Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ToastWidget_New.ToastWidget_New_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTwitchNotification_C*            K2Node_DynamicCast_AsTwitch_Notification               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                       CallFunc_GetImageOverride_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UToastWidget_New_C::SetImage(class UTwitchNotification_C* K2Node_DynamicCast_AsTwitch_Notification, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetImageOverride_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "SetImage");

	Params::ToastWidget_New_C_SetImage Parms{};

	Parms.K2Node_DynamicCast_AsTwitch_Notification = K2Node_DynamicCast_AsTwitch_Notification;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetImageOverride_ReturnValue = CallFunc_GetImageOverride_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Temp_class_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Temp_class_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Temp_class_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           Temp_class_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Temp_class_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Temp_class_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastWidget_New_C::ApplyAdditionalStyling(class UClass* Temp_class_Variable, bool Temp_bool_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, bool Temp_bool_Variable_1, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, class UClass* Temp_class_Variable_5, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select_Default_1, class UClass* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "ApplyAdditionalStyling");

	Params::ToastWidget_New_C_ApplyAdditionalStyling Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Unbind                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor)

void UToastWidget_New_C::SetupAnimBindings(bool Unbind, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastWidget_New_C", "SetupAnimBindings");

	Params::ToastWidget_New_C_SetupAnimBindings Parms{};

	Parms.Unbind = Unbind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);
}

}

