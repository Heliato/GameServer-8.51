#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TracerGeneric

#include "Basic.hpp"

#include "TracerGeneric_classes.hpp"
#include "TracerGeneric_parameters.hpp"


namespace SDK
{

// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       CallFunc_K2_SetRelativeRotation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATracerGeneric_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TracerGeneric_C", "UserConstructionScript");

	Params::TracerGeneric_C_UserConstructionScript Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = std::move(CallFunc_K2_SetRelativeRotation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);
}

}

