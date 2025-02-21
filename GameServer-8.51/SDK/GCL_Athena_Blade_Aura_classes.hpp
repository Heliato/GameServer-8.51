#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Athena_Blade_Aura

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_Athena_Blade_Aura.GCL_Athena_Blade_Aura_C
// 0x0020 (0x07B0 - 0x0790)
class AGCL_Athena_Blade_Aura_C final  : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       Spawned_Emitters;                                  // 0x07A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCL_Athena_Blade_Aura(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* K2Node_Event_MyTarget_1, struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* K2Node_Event_MyTarget, struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Show();
	void Unhide();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Athena_Blade_Aura_C">();
	}
	static class AGCL_Athena_Blade_Aura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Athena_Blade_Aura_C>();
	}
};

}

