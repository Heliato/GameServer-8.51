#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_MedicPack_FuelRegen

#include "Basic.hpp"

#include "GCL_MedicPack_FuelRegen_classes.hpp"
#include "GCL_MedicPack_FuelRegen_parameters.hpp"


namespace SDK
{

// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ExecuteUbergraph_GCL_MedicPack_FuelRegen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetFuelPercent_FuelPercent                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           CallFunc_GetSkeletalMeshForPartType_ReturnValue        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetFuelPercent_FuelPercent_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetFloatValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetWorldDeltaSeconds_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FInterpTo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_MapRangeUnclamped_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           CallFunc_GetSkeletalMeshForPartType_ReturnValue_1      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFuelPercent_FuelPercent_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_FloatFloat_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetReserveFuelPercent_FuelPercent             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::ExecuteUbergraph_GCL_MedicPack_FuelRegen(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, float CallFunc_GetFuelPercent_FuelPercent, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent_1, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetFuelPercent_FuelPercent_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetReserveFuelPercent_FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ExecuteUbergraph_GCL_MedicPack_FuelRegen");

	Params::GCL_MedicPack_FuelRegen_C_ExecuteUbergraph_GCL_MedicPack_FuelRegen Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetFuelPercent_FuelPercent = CallFunc_GetFuelPercent_FuelPercent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_GetFuelPercent_FuelPercent_1 = CallFunc_GetFuelPercent_FuelPercent_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForPartType_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFuelPercent_FuelPercent_2 = CallFunc_GetFuelPercent_FuelPercent_2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetReserveFuelPercent_FuelPercent = CallFunc_GetReserveFuelPercent_FuelPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Start Fuel Blink FX
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::Start_Fuel_Blink_FX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "Start Fuel Blink FX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ResetBlink
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::ResetBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ResetBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::Audio_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "Audio Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ReceiveTick");

	Params::GCL_MedicPack_FuelRegen_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "FullBlinkTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "FullBlinkTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*             K2Node_DynamicCast_AsPlayer_Pawn_Athena                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           CallFunc_GetSkeletalMeshForPartType_ReturnValue        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCL_MedicPack_FuelRegen_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "OnActive");

	Params::GCL_MedicPack_FuelRegen_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           CallFunc_GetSkeletalMeshForPartType_ReturnValue        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCL_MedicPack_FuelRegen_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "OnRemove");

	Params::GCL_MedicPack_FuelRegen_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.CacheAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               ReserveMaxFuelAttribute                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FGameplayAttribute               MaxFuelAttribute                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                                   CallFunc_GetSimulatedAttributeValue_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFloatAttribute_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetSimulatedAttributeValue_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFloatAttribute_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::CacheAttributes(const struct FGameplayAttribute& ReserveMaxFuelAttribute, const struct FGameplayAttribute& MaxFuelAttribute, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "CacheAttributes");

	Params::GCL_MedicPack_FuelRegen_C_CacheAttributes Parms{};

	Parms.ReserveMaxFuelAttribute = std::move(ReserveMaxFuelAttribute);
	Parms.MaxFuelAttribute = std::move(MaxFuelAttribute);
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue = CallFunc_GetSimulatedAttributeValue_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue_1 = CallFunc_GetSimulatedAttributeValue_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_1 = CallFunc_GetFloatAttribute_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuelPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   FuelPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetFuel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Divide_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::GetFuelPercent(float* FuelPercent, float CallFunc_GetFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetFuelPercent");

	Params::GCL_MedicPack_FuelRegen_C_GetFuelPercent Parms{};

	Parms.CallFunc_GetFuel_ReturnValue = CallFunc_GetFuel_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FuelPercent != nullptr)
		*FuelPercent = Parms.FuelPercent;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.SetFuelRechargeAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  CallFunc_K2_GetRootComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetFuelPercent_FuelPercent                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*                  CallFunc_SpawnSoundAttached_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_FloatFloat_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  CallFunc_K2_GetRootComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*                  CallFunc_SpawnSoundAttached_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::SetFuelRechargeAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetFuelPercent_FuelPercent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "SetFuelRechargeAudioEnabled");

	Params::GCL_MedicPack_FuelRegen_C_SetFuelRechargeAudioEnabled Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetFuelPercent_FuelPercent = CallFunc_GetFuelPercent_FuelPercent;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute               FuelAttribute                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                                    CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFloatAttribute_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetSimulatedAttributeValue_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AGCL_MedicPack_FuelRegen_C::GetFuel(const struct FGameplayAttribute& FuelAttribute, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetFuel");

	Params::GCL_MedicPack_FuelRegen_C_GetFuel Parms{};

	Parms.FuelAttribute = std::move(FuelAttribute);
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue = CallFunc_GetSimulatedAttributeValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuelPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   FuelPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetReserveFuel_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Divide_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::GetReserveFuelPercent(float* FuelPercent, float CallFunc_GetReserveFuel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetReserveFuelPercent");

	Params::GCL_MedicPack_FuelRegen_C_GetReserveFuelPercent Parms{};

	Parms.CallFunc_GetReserveFuel_ReturnValue = CallFunc_GetReserveFuel_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FuelPercent != nullptr)
		*FuelPercent = Parms.FuelPercent;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute               ReserveFuelAttribute                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                                    CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetFloatAttribute_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GetSimulatedAttributeValue_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AGCL_MedicPack_FuelRegen_C::GetReserveFuel(const struct FGameplayAttribute& ReserveFuelAttribute, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetReserveFuel");

	Params::GCL_MedicPack_FuelRegen_C_GetReserveFuel Parms{};

	Parms.ReserveFuelAttribute = std::move(ReserveFuelAttribute);
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSimulatedAttributeValue_ReturnValue = CallFunc_GetSimulatedAttributeValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

