#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tiered_Chest_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tiered_Chest_Athena.Tiered_Chest_Athena_C
// 0x00B0 (0x0CF8 - 0x0C48)
class ATiered_Chest_Athena_C final  : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Loot_Chest_Aura_Athena;                          // 0x0C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Chest_SmokeSheet;                                // 0x0C58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   TrasureLight;                                      // 0x0C60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Chest_Ambient_Sound;                               // 0x0C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpInteactoIcon_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0C70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileSelectedTL_LerpObject_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0C74(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileSelectedTL__Direction_EEB30EBE433E8977EDA63DB381EAF0C8; // 0x0C78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55CB[0x7];                                     // 0x0C79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileSelectedTL;                                  // 0x0C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MobileOnInteractTL_LERP_9BD788A146DACD005BAF94BEBEDAB584; // 0x0C88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MobileOnInteractTL__Direction_9BD788A146DACD005BAF94BEBEDAB584; // 0x0C8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55CC[0x3];                                     // 0x0C8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MobileOnInteractTL;                                // 0x0C90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Loot_Effect;                                       // 0x0C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpecialChestOpenSound;                             // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs;                                              // 0x0CA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         MobileWiggleAmount;                                // 0x0CB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55CD[0x4];                                     // 0x0CBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChimeTimer;                                        // 0x0CC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ChestChimeVisualUpdate;                            // 0x0CC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55CE[0x4];                                     // 0x0CCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MobileInteractionMaterial;                         // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MobileInteractIcon;                                // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconLocation;                        // 0x0CE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MobileInteractIconScale;                           // 0x0CEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tiered_Chest_Athena(int32 EntryPoint, TArray<class AFortPlayerController*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetMaxAudibleDistance_Max_Distance, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnBeginSearch();
	void DisableBacchusHighlight();
	void EnableBacchusHighlight();
	void Chime_Visual();
	void Mobile_OnDisconnect();
	void Mobile_OnInteract();
	void Mobile_Outline_Off();
	void Mobile_Outline_On();
	void OnSetSearched();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnLoot();
	void MobileSelectedTL__UpdateFunc();
	void MobileSelectedTL__FinishedFunc();
	void MobileOnInteractTL__UpdateFunc();
	void MobileOnInteractTL__FinishedFunc();
	void UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue);
	void SetLightVisibility(bool Visible, bool CallFunc_IsValid_ReturnValue);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue);
	void CreateMobileMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CleanupWiggleMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetMaxAudibleDistance(float* Max_Distance, bool CallFunc_IsValid_ReturnValue);
	void SetVisibleMobileInteractIcon(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*>& PrimComponents, bool bUseCustomDepth, int32 StencilValue, bool* bOutConsume, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);

	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tiered_Chest_Athena_C">();
	}
	static class ATiered_Chest_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATiered_Chest_Athena_C>();
	}
};

}

