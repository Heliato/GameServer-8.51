#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_Fury

#include "Basic.hpp"

#include "GCNL_GM_Fury_classes.hpp"
#include "GCNL_GM_Fury_parameters.hpp"


namespace SDK
{

// Function GCNL_GM_Fury.GCNL_GM_Fury_C.ExecuteUbergraph_GCNL_GM_Fury
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_CustomEvent_DeadActor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_CustomEvent_Damage                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        K2Node_CustomEvent_InstigatedBy                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          K2Node_CustomEvent_HitLocation                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           K2Node_CustomEvent_DamageCauser                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class AEnemyPawn_Parent_C*              K2Node_CustomEvent_EnemyPawnParentReference            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_GM_Fury_C::ExecuteUbergraph_GCNL_GM_Fury(int32 EntryPoint, class AActor* K2Node_CustomEvent_DeadActor, float K2Node_CustomEvent_Damage, class AFortPawn* K2Node_CustomEvent_InstigatedBy, const struct FVector& K2Node_CustomEvent_HitLocation, class AActor* K2Node_CustomEvent_DamageCauser, TDelegate<void(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)> K2Node_CreateDelegate_OutputDelegate, class AEnemyPawn_Parent_C* K2Node_CustomEvent_EnemyPawnParentReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Fury_C", "ExecuteUbergraph_GCNL_GM_Fury");

	Params::GCNL_GM_Fury_C_ExecuteUbergraph_GCNL_GM_Fury Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DeadActor = K2Node_CustomEvent_DeadActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_HitLocation = std::move(K2Node_CustomEvent_HitLocation);
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EnemyPawnParentReference = K2Node_CustomEvent_EnemyPawnParentReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnEnemyDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DeadActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_GM_Fury_C::OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Fury_C", "OnEnemyDeath");

	Params::GCNL_GM_Fury_C_OnEnemyDeath Parms{};

	Parms.DeadActor = DeadActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.HitLocation = std::move(HitLocation);
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.BindOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyPawn_Parent_C*              EnemyPawnParentReference                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_GM_Fury_C::BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Fury_C", "BindOnDied");

	Params::GCNL_GM_Fury_C_BindOnDied Parms{};

	Parms.EnemyPawnParentReference = EnemyPawnParentReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AEnemyPawn_Parent_C*              K2Node_DynamicCast_AsEnemy_Pawn_Parent                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FParticleSysParam                K2Node_MakeStruct_ParticleSysParam                     (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>        K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)

bool AGCNL_GM_Fury_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Fury_C", "OnActive");

	Params::GCNL_GM_Fury_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.K2Node_DynamicCast_AsEnemy_Pawn_Parent = K2Node_DynamicCast_AsEnemy_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_ParticleSysParam = std::move(K2Node_MakeStruct_ParticleSysParam);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;
}


// Function GCNL_GM_Fury.GCNL_GM_Fury_C.DisableFuryPS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCNL_GM_Fury_C::DisableFuryPS(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Fury_C", "DisableFuryPS");

	Params::GCNL_GM_Fury_C_DisableFuryPS Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

