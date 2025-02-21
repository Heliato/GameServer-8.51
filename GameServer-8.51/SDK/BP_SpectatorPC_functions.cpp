#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorPC

#include "Basic.hpp"

#include "BP_SpectatorPC_classes.hpp"
#include "BP_SpectatorPC_parameters.hpp"


namespace SDK
{

// Function BP_SpectatorPC.BP_SpectatorPC_C.ExecuteUbergraph_BP_SpectatorPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       Temp_struct_Variable                                   (ConstParm, IsPlainOldData, NoDestructor)
// class UBP_AmbientAudioController_C*     CallFunc_AddComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorPC_C::ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, struct FTransform& Temp_struct_Variable, class UBP_AmbientAudioController_C* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorPC_C", "ExecuteUbergraph_BP_SpectatorPC");

	Params::BP_SpectatorPC_C_ExecuteUbergraph_BP_SpectatorPC Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpectatorPC.BP_SpectatorPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

