#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSupplyDropBalloon

#include "Basic.hpp"

#include "AthenaSupplyDropBalloon_classes.hpp"
#include "AthenaSupplyDropBalloon_parameters.hpp"


namespace SDK
{

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnBalloonDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDropBalloon_C::OnBalloonDestroyed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "OnBalloonDestroyed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ExecuteUbergraph_AthenaSupplyDropBalloon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_IsClosed_Variable                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_Damage_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            K2Node_Event_DamageTags_2                              (ConstParm)
// struct FVector                          K2Node_Event_Momentum_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       K2Node_Event_HitInfo_2                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      K2Node_Event_InstigatedBy_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_DamageCauser_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     K2Node_Event_EffectContext_2                           ()
// bool                                    Temp_bool_Has_Been_Initd_Variable                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortAnalyticsEventAttribute     K2Node_MakeStruct_FortAnalyticsEventAttribute          ()
// float                                   K2Node_Event_Damage_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            K2Node_Event_DamageTags_1                              (ConstParm)
// struct FVector                          K2Node_Event_Momentum_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       K2Node_Event_HitInfo_1                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        K2Node_Event_InstigatedBy_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_DamageCauser_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     K2Node_Event_EffectContext_1                           ()
// float                                   K2Node_Event_Damage                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            K2Node_Event_DamageTags                                (ConstParm)
// struct FVector                          K2Node_Event_Momentum                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       K2Node_Event_HitInfo                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      K2Node_Event_InstigatedBy                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_Event_DamageCauser                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     K2Node_Event_EffectContext                             ()
// struct FVector                          CallFunc_GetSocketLocation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*         CallFunc_SpawnEmitterAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue(NoDestructor, HasGetValueTypeHash)

void AAthenaSupplyDropBalloon_C::ExecuteUbergraph_AthenaSupplyDropBalloon(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Damage_2, struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, struct FHitResult& K2Node_Event_HitInfo_2, class AController* K2Node_Event_InstigatedBy_2, class AActor* K2Node_Event_DamageCauser_2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FFortAnalyticsEventAttribute& K2Node_MakeStruct_FortAnalyticsEventAttribute, float K2Node_Event_Damage_1, struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "ExecuteUbergraph_AthenaSupplyDropBalloon");

	Params::AthenaSupplyDropBalloon_C_ExecuteUbergraph_AthenaSupplyDropBalloon Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Damage_2 = K2Node_Event_Damage_2;
	Parms.K2Node_Event_DamageTags_2 = std::move(K2Node_Event_DamageTags_2);
	Parms.K2Node_Event_Momentum_2 = std::move(K2Node_Event_Momentum_2);
	Parms.K2Node_Event_HitInfo_2 = std::move(K2Node_Event_HitInfo_2);
	Parms.K2Node_Event_InstigatedBy_2 = K2Node_Event_InstigatedBy_2;
	Parms.K2Node_Event_DamageCauser_2 = K2Node_Event_DamageCauser_2;
	Parms.K2Node_Event_EffectContext_2 = std::move(K2Node_Event_EffectContext_2);
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeStruct_FortAnalyticsEventAttribute = std::move(K2Node_MakeStruct_FortAnalyticsEventAttribute);
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageTags_1 = std::move(K2Node_Event_DamageTags_1);
	Parms.K2Node_Event_Momentum_1 = std::move(K2Node_Event_Momentum_1);
	Parms.K2Node_Event_HitInfo_1 = std::move(K2Node_Event_HitInfo_1);
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_EffectContext_1 = std::move(K2Node_Event_EffectContext_1);
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = std::move(K2Node_Event_DamageTags);
	Parms.K2Node_Event_Momentum = std::move(K2Node_Event_Momentum);
	Parms.K2Node_Event_HitInfo = std::move(K2Node_Event_HitInfo);
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = std::move(K2Node_Event_EffectContext);
	Parms.CallFunc_GetSocketLocation_ReturnValue = std::move(CallFunc_GetSocketLocation_ReturnValue);
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = std::move(CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDropBalloon_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "OnDeathServer");

	Params::AthenaSupplyDropBalloon_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDropBalloon_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "OnDeathPlayEffects");

	Params::AthenaSupplyDropBalloon_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaSupplyDropBalloon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDropBalloon_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaSupplyDropBalloon_C", "OnDamageServer");

	Params::AthenaSupplyDropBalloon_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

}

