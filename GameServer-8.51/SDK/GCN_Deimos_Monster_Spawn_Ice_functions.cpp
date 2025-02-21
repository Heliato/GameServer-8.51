#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Deimos_Monster_Spawn_Ice

#include "Basic.hpp"

#include "GCN_Deimos_Monster_Spawn_Ice_classes.hpp"
#include "GCN_Deimos_Monster_Spawn_Ice_parameters.hpp"


namespace SDK
{

// Function GCN_Deimos_Monster_Spawn_Ice.GCN_Deimos_Monster_Spawn_Ice_C.OnBurst
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_K2_AttachToComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGCN_Deimos_Monster_Spawn_Ice_C::OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Deimos_Monster_Spawn_Ice_C", "OnBurst");

	Params::GCN_Deimos_Monster_Spawn_Ice_C_OnBurst Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_Deimos_Monster_Spawn_Ice.GCN_Deimos_Monster_Spawn_Ice_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_OnExecute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGCN_Deimos_Monster_Spawn_Ice_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_Deimos_Monster_Spawn_Ice_C", "OnExecute");

	Params::GCN_Deimos_Monster_Spawn_Ice_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

