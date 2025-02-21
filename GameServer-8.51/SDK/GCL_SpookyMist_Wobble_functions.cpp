#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_SpookyMist_Wobble

#include "Basic.hpp"

#include "GCL_SpookyMist_Wobble_classes.hpp"
#include "GCL_SpookyMist_Wobble_parameters.hpp"


namespace SDK
{

// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ExecuteUbergraph_GCL_SpookyMist_Wobble
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   Temp_object_Variable                                   (ConstParm, ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Add_VectorVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetTimeSeconds_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   CallFunc_SphereOverlapActors_OutActors                 (ZeroConstructor, ReferenceParm)
// bool                                    CallFunc_SphereOverlapActors_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*                 K2Node_DynamicCast_AsBuilding_SMActor                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_FindLookAtRotation_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_Conv_RotatorToVector_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_SpookyMist_Wobble_C::ExecuteUbergraph_GCL_SpookyMist_Wobble(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_GetTimeSeconds_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "ExecuteUbergraph_GCL_SpookyMist_Wobble");

	Params::GCL_SpookyMist_Wobble_C_ExecuteUbergraph_GCL_SpookyMist_Wobble Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = std::move(Temp_object_Variable);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_Add_VectorVector_ReturnValue = std::move(CallFunc_Add_VectorVector_ReturnValue);
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_1);
	Parms.CallFunc_SphereOverlapActors_OutActors = std::move(CallFunc_SphereOverlapActors_OutActors);
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_2);
	Parms.CallFunc_FindLookAtRotation_ReturnValue = std::move(CallFunc_FindLookAtRotation_ReturnValue);
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = std::move(CallFunc_Conv_RotatorToVector_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_SphereOverlapActors_OutActors = std::move(Parms.CallFunc_SphereOverlapActors_OutActors);
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WiggleActors
// (BlueprintCallable, BlueprintEvent)

void AGCL_SpookyMist_Wobble_C::WiggleActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "WiggleActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_SpookyMist_Wobble_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCL_SpookyMist_Wobble_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "OnRemove");

	Params::GCL_SpookyMist_Wobble_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                           PlayerPawn                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)

bool AGCL_SpookyMist_Wobble_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AActor* PlayerPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "OnActive");

	Params::GCL_SpookyMist_Wobble_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCL_SpookyMist_Wobble_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_SpookyMist_Wobble_C", "WhileActive");

	Params::GCL_SpookyMist_Wobble_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

