#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerLevel

#include "Basic.hpp"

#include "AthenaPlayerLevel_classes.hpp"
#include "AthenaPlayerLevel_parameters.hpp"


namespace SDK
{

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.AnimateBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Lerp_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::AnimateBar(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "AnimateBar");

	Params::AthenaPlayerLevel_C_AnimateBar Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()

void UAthenaPlayerLevel_C::UpdateLevel(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateLevel");

	Params::AthenaPlayerLevel_C_UpdateLevel Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelXp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_LevelXpForLevel                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_MaxLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// float                                   CallFunc_Divide_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array_1                               (ZeroConstructor, ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue_1                          ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::UpdateXp(int32 LevelXp, int32 Param_LevelXpForLevel, int32 Level, int32 Param_MaxLevel, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateXp");

	Params::AthenaPlayerLevel_C_UpdateXp Parms{};

	Parms.LevelXp = LevelXp;
	Parms.Param_LevelXpForLevel = Param_LevelXpForLevel;
	Parms.Level = Level;
	Parms.Param_MaxLevel = Param_MaxLevel;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ready                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "IsReadyForNextXpReward");

	Params::AthenaPlayerLevel_C_IsReadyForNextXpReward Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaLevelInfo                 LevelInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromLevelInfo(const struct FAthenaLevelInfo& LevelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromLevelInfo");

	Params::AthenaPlayerLevel_C_InitializeFromLevelInfo Parms{};

	Parms.LevelInfo = std::move(LevelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           FortPublicAccountInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromAccount(struct FFortPublicAccountInfo& FortPublicAccountInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromAccount");

	Params::AthenaPlayerLevel_C_InitializeFromAccount Parms{};

	Parms.FortPublicAccountInfo = std::move(FortPublicAccountInfo);

	UObject::ProcessEvent(Func, &Parms);

	FortPublicAccountInfo = std::move(Parms.FortPublicAccountInfo);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward             Reward                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerLevel_C::Play_Xp_Reward(struct FAthenaMatchXpReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Play Xp Reward");

	Params::AthenaPlayerLevel_C_Play_Xp_Reward Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Tick");

	Params::AthenaPlayerLevel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_XpToAdd                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Play_XP_Reward_Directly(int32 Param_XpToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Play XP Reward Directly");

	Params::AthenaPlayerLevel_C_Play_XP_Reward_Directly Parms{};

	Parms.Param_XpToAdd = Param_XpToAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled
// (BlueprintCallable, BlueprintEvent)

void UAthenaPlayerLevel_C::EventTrack_Leveled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "EventTrack_Leveled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerLevel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "PreConstruct");

	Params::AthenaPlayerLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UAthenaPlayerLevel_C::WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UAthenaPlayerLevel_C::WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaMatchXpReward             K2Node_CustomEvent_Reward                              (ConstParm)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_XpToAdd                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*                  CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*            CallFunc_GetAthenaProfile_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaSeasonRewardLevelInfo     CallFunc_GetSeasonLevelInfo_ReturnValue                ()
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*                  CallFunc_GetContext_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*            CallFunc_GetAthenaProfile_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaSeasonRewardLevelInfo     CallFunc_GetSeasonLevelInfo_ReturnValue_1              ()
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_SelectInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::ExecuteUbergraph_AthenaPlayerLevel(int32 EntryPoint, struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_CustomEvent_XpToAdd, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAthenaSeasonRewardLevelInfo& CallFunc_GetSeasonLevelInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FAthenaSeasonRewardLevelInfo& CallFunc_GetSeasonLevelInfo_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "ExecuteUbergraph_AthenaPlayerLevel");

	Params::AthenaPlayerLevel_C_ExecuteUbergraph_AthenaPlayerLevel Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Reward = std::move(K2Node_CustomEvent_Reward);
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_XpToAdd = K2Node_CustomEvent_XpToAdd;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSeasonLevelInfo_ReturnValue = std::move(CallFunc_GetSeasonLevelInfo_ReturnValue);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetAthenaProfile_ReturnValue_1 = CallFunc_GetAthenaProfile_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSeasonLevelInfo_ReturnValue_1 = std::move(CallFunc_GetSeasonLevelInfo_ReturnValue_1);
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.LevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::LevelChanged__DelegateSignature(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "LevelChanged__DelegateSignature");

	Params::AthenaPlayerLevel_C_LevelChanged__DelegateSignature Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

