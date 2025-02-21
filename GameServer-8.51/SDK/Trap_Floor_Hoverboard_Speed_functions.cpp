#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Hoverboard_Speed

#include "Basic.hpp"

#include "Trap_Floor_Hoverboard_Speed_classes.hpp"
#include "Trap_Floor_Hoverboard_Speed_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_K2_GetActorLocation_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TriggerIfAppropriate_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Floor_Hoverboard_Speed_C::ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_TriggerIfAppropriate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "ExecuteUbergraph_Trap_Floor_Hoverboard_Speed");

	Params::Trap_Floor_Hoverboard_Speed_C_ExecuteUbergraph_Trap_Floor_Hoverboard_Speed Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = std::move(CallFunc_K2_GetActorLocation_ReturnValue);
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_1);
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = std::move(CallFunc_K2_GetActorLocation_ReturnValue_2);
	Parms.CallFunc_TriggerIfAppropriate_ReturnValue = CallFunc_TriggerIfAppropriate_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnWorldReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Hoverboard_Speed_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>                   TouchingActors                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>                   Touching                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// bool                                    bTouchingIsAlreadyLaunched                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATrap_Floor_Hoverboard_Speed_C::BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& Touching, bool bTouchingIsAlreadyLaunched) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Hoverboard_Speed_C", "BP_ShouldTrigger");

	Params::Trap_Floor_Hoverboard_Speed_C_BP_ShouldTrigger Parms{};

	Parms.TouchingActors = std::move(TouchingActors);
	Parms.Touching = std::move(Touching);
	Parms.bTouchingIsAlreadyLaunched = bTouchingIsAlreadyLaunched;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

