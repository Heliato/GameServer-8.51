#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImpactNumbers

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0028 (0x04B8 - 0x0490)
class AImpactNumbers_C final  : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Spacing_percentage_for_1s;                         // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontYSize_0;                                       // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontXSize_0;                                       // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Number_Spacing_Multiplier;                         // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Number_of_number_rotations;                        // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ImpactNumbers(int32 EntryPoint, struct FFortDamageNumberInfo& K2Node_Event_NewDamageNumberInfo, const struct FTransform& CallFunc_init_a_new_number_set_OutCameraTransform, const struct FVector& CallFunc_init_a_new_number_set_OutNumberLocation);
	void OnNewDamageNumber(struct FFortDamageNumberInfo& NewDamageNumberInfo);
	void Init_a_new_number_set(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation, const struct FVector& NumberLocation, const struct FVector& LocationOffset, const struct FTransform& CameraTransform, float Temp_float_Variable, EFortDamageNumberType Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable, EFortDamageNumberType Temp_byte_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FVector& K2Node_Select_Default_2, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImpactNumbers_C">();
	}
	static class AImpactNumbers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AImpactNumbers_C>();
	}
};

}

