#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_DisablePawnRotation

#include "Basic.hpp"

#include "AnimNotifyState_DisablePawnRotation_classes.hpp"
#include "AnimNotifyState_DisablePawnRotation_parameters.hpp"


namespace SDK
{

// Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            K2Node_DynamicCast_AsPawn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_DisablePawnRotation_C", "Received_NotifyBegin");

	Params::AnimNotifyState_DisablePawnRotation_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetOwner_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            K2Node_DynamicCast_AsPawn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      CallFunc_GetController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_DisablePawnRotation_C", "Received_NotifyEnd");

	Params::AnimNotifyState_DisablePawnRotation_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

