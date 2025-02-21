#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Goose_Status_VR

#include "Basic.hpp"

#include "GCNL_Goose_Status_VR_classes.hpp"
#include "GCNL_Goose_Status_VR_parameters.hpp"


namespace SDK
{

// Function GCNL_Goose_Status_VR.GCNL_Goose_Status_VR_C.ExecuteUbergraph_GCNL_Goose_Status_VR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_LinearColorToVector_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_MyTarget_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_Event_Parameters_2                              (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> K2Node_Event_ParticleComponents_2                      (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          K2Node_Event_AudioComponents_2                         (ConstParm, ZeroConstructor, ReferenceParm)
// class AActor*                           K2Node_Event_MyTarget_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_Event_Parameters_1                              (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> K2Node_Event_ParticleComponents_1                      (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          K2Node_Event_AudioComponents_1                         (ConstParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      K2Node_Event_BurstDecalInstance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_MyTarget                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           K2Node_Event_Parameters                                (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> K2Node_Event_ParticleComponents                        (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          K2Node_Event_AudioComponents                           (ConstParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     K2Node_Event_BurstCameraShakeInstance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      K2Node_Event_BurstDecalInstance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Goose_Status_VR_C::ExecuteUbergraph_GCNL_Goose_Status_VR(int32 EntryPoint, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class AActor* K2Node_Event_MyTarget_2, struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class AActor* K2Node_Event_MyTarget_1, struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget, struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Goose_Status_VR_C", "ExecuteUbergraph_GCNL_Goose_Status_VR");

	Params::GCNL_Goose_Status_VR_C_ExecuteUbergraph_GCNL_Goose_Status_VR Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = std::move(CallFunc_Conv_LinearColorToVector_ReturnValue);
	Parms.K2Node_Event_MyTarget_2 = K2Node_Event_MyTarget_2;
	Parms.K2Node_Event_Parameters_2 = std::move(K2Node_Event_Parameters_2);
	Parms.K2Node_Event_ParticleComponents_2 = std::move(K2Node_Event_ParticleComponents_2);
	Parms.K2Node_Event_AudioComponents_2 = std::move(K2Node_Event_AudioComponents_2);
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = std::move(K2Node_Event_Parameters_1);
	Parms.K2Node_Event_ParticleComponents_1 = std::move(K2Node_Event_ParticleComponents_1);
	Parms.K2Node_Event_AudioComponents_1 = std::move(K2Node_Event_AudioComponents_1);
	Parms.K2Node_Event_BurstCameraShakeInstance_1 = K2Node_Event_BurstCameraShakeInstance_1;
	Parms.K2Node_Event_BurstDecalInstance_1 = K2Node_Event_BurstDecalInstance_1;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = std::move(K2Node_Event_Parameters);
	Parms.K2Node_Event_ParticleComponents = std::move(K2Node_Event_ParticleComponents);
	Parms.K2Node_Event_AudioComponents = std::move(K2Node_Event_AudioComponents);
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Goose_Status_VR.GCNL_Goose_Status_VR_C.OnApplication
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Goose_Status_VR_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Goose_Status_VR_C", "OnApplication");

	Params::GCNL_Goose_Status_VR_C_OnApplication Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Goose_Status_VR.GCNL_Goose_Status_VR_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*                     BurstCameraShakeInstance                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                      BurstDecalInstance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Goose_Status_VR_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Goose_Status_VR_C", "OnRemoval");

	Params::GCNL_Goose_Status_VR_C_OnRemoval Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Goose_Status_VR.GCNL_Goose_Status_VR_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> ParticleComponents                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>          AudioComponents                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_Goose_Status_VR_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Goose_Status_VR_C", "OnLoopingStart");

	Params::GCNL_Goose_Status_VR_C_OnLoopingStart Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.ParticleComponents = std::move(ParticleComponents);
	Parms.AudioComponents = std::move(AudioComponents);

	UObject::ProcessEvent(Func, &Parms);
}

}

