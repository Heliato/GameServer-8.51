#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FerretWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Dual_Generic_FerretVehicle_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C
// 0x0010 (0x0E38 - 0x0E28)
class AB_FerretWeapon_C : public AB_Ranged_Dual_Generic_FerretVehicle_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_FerretWeapon_C;                   // 0x0E28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortAthenaFerretVehicle*               Biplane;                                           // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_FerretWeapon(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AAthena_Player_SneakySnowman_C* K2Node_DynamicCast_AsAthena_Player_Sneaky_Snowman, bool K2Node_DynamicCast_bSuccess, class AB_FerretWeapon_C* K2Node_DynamicCast_AsB_Ferret_Weapon, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AB_SneakySnowman_Athena_C* K2Node_DynamicCast_AsB_Sneaky_Snowman_Athena, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortAthenaVehicle* CallFunc_GetHostVehicleCached_ReturnValue, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_3, EDualWeaponHand K2Node_Event_Hand, bool K2Node_Event_bPersistantFire, float CallFunc_GetCurrentOverheatValue_ReturnValue, float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void OnStartOverheated();
	void HandFired(EDualWeaponHand Hand, bool bPersistantFire);
	void FerretSnowmanCheck();
	void K2_OnUnEquip();
	void OnWeaponAttached();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_FerretWeapon_C">();
	}
	static class AB_FerretWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_FerretWeapon_C>();
	}
};

}

