#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_ZoneModifiers

#include "Basic.hpp"

#include "Announcement_ZoneModifiers_classes.hpp"
#include "Announcement_ZoneModifiers_parameters.hpp"


namespace SDK
{

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortClientAnnouncement* NewAnnouncement)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// class AFortClientAnnouncement*          K2Node_Event_Announcement                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_ZoneModifiers*K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation(NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>    K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// struct FTransform                       CallFunc_MakeTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement*          K2Node_CustomEvent_NewAnnouncement                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnnouncement_ZoneModifiers_C::ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class AFortClientAnnouncement* NewAnnouncement)> K2Node_CreateDelegate_OutputDelegate_1, class AFortClientAnnouncement* K2Node_Event_Announcement, class AFortClientAnnouncement_ZoneModifiers* K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers, bool K2Node_DynamicCast_bSuccess, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortClientAnnouncement* K2Node_CustomEvent_NewAnnouncement, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "ExecuteUbergraph_Announcement_ZoneModifiers");

	Params::Announcement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers = K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = std::move(K2Node_MakeStruct_FortClientAnnouncementData_Conversation);
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_MakeTransform_ReturnValue = std::move(CallFunc_MakeTransform_ReturnValue);
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NewAnnouncement = K2Node_CustomEvent_NewAnnouncement;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnAnnouncementStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          NewAnnouncement                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::OnAnnouncementStopped(class AFortClientAnnouncement* NewAnnouncement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnAnnouncementStopped");

	Params::Announcement_ZoneModifiers_C_OnAnnouncementStopped Parms{};

	Parms.NewAnnouncement = NewAnnouncement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationStopped
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnConversationStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnConversationStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnDisplayTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnDisplayTimerFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          Announcement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "UpdateWidgetData");

	Params::Announcement_ZoneModifiers_C_UpdateWidgetData Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);
}

}

