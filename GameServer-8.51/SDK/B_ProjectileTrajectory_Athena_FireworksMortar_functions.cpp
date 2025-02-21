#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ProjectileTrajectory_Athena_FireworksMortar

#include "Basic.hpp"

#include "B_ProjectileTrajectory_Athena_FireworksMortar_classes.hpp"
#include "B_ProjectileTrajectory_Athena_FireworksMortar_parameters.hpp"


namespace SDK
{

// Function B_ProjectileTrajectory_Athena_FireworksMortar.B_ProjectileTrajectory_Athena_FireworksMortar_C.ExecuteUbergraph_B_ProjectileTrajectory_Athena_FireworksMortar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>                  K2Node_Event_SplinePoints                              (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  K2Node_Event_SplineTangents                            (ZeroConstructor, ReferenceParm)
// struct FRotator                         CallFunc_K2_GetComponentRotation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                            CallFunc_GetInstigator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Roll                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Pitch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Yaw                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         CallFunc_GetDefaultTargetingRotation_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_BreakRotator_Roll_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Pitch_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakRotator_Yaw_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_MakeRotator_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       CallFunc_K2_SetWorldRotation_SweepHitResult            (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_ProjectileTrajectory_Athena_FireworksMortar_C::ExecuteUbergraph_B_ProjectileTrajectory_Athena_FireworksMortar(int32 EntryPoint, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ProjectileTrajectory_Athena_FireworksMortar_C", "ExecuteUbergraph_B_ProjectileTrajectory_Athena_FireworksMortar");

	Params::B_ProjectileTrajectory_Athena_FireworksMortar_C_ExecuteUbergraph_B_ProjectileTrajectory_Athena_FireworksMortar Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SplinePoints = std::move(K2Node_Event_SplinePoints);
	Parms.K2Node_Event_SplineTangents = std::move(K2Node_Event_SplineTangents);
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = std::move(CallFunc_K2_GetComponentRotation_ReturnValue);
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = std::move(CallFunc_GetDefaultTargetingRotation_ReturnValue);
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = std::move(CallFunc_MakeRotator_ReturnValue);
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = std::move(CallFunc_K2_SetWorldRotation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_Event_SplinePoints = std::move(Parms.K2Node_Event_SplinePoints);
	K2Node_Event_SplineTangents = std::move(Parms.K2Node_Event_SplineTangents);
}


// Function B_ProjectileTrajectory_Athena_FireworksMortar.B_ProjectileTrajectory_Athena_FireworksMortar_C.SetTrajectorySpline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  SplinePoints                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  SplineTangents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_ProjectileTrajectory_Athena_FireworksMortar_C::SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ProjectileTrajectory_Athena_FireworksMortar_C", "SetTrajectorySpline");

	Params::B_ProjectileTrajectory_Athena_FireworksMortar_C_SetTrajectorySpline Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);
}


// Function B_ProjectileTrajectory_Athena_FireworksMortar.B_ProjectileTrajectory_Athena_FireworksMortar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_ProjectileTrajectory_Athena_FireworksMortar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ProjectileTrajectory_Athena_FireworksMortar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

