#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_PARENT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C
// 0x0120 (0x05F8 - 0x04D8)
class ABP_Hex_PARENT_C final  : public AFortTheaterMapTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SpinnerIconMesh;                                   // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_StrongStormAffected;                             // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       StormZoneIndicator;                                // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_StormAffected;                                   // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_CloudTwister_RandomLightning_01;                 // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PinnedQuestIcon;                                   // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MissionIconMesh;                                   // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MouseoverMesh;                                     // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SelectedIndicatorMesh;                             // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HexTileSound;                                      // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7; // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7; // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6113[0x3];                                     // 0x0535(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_12;                                       // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE; // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE; // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6114[0x3];                                     // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_11;                                       // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        HexAudioComponent;                                 // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HexMapSound;                                       // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormChance;                                       // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseHexNeighborTextureBlending;                     // 0x0564(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoesTileHaveRoads;                                 // 0x0565(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFirstOutpost;                                    // 0x0566(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOutpost;                                         // 0x0567(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsQuickplayMission;                                // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6115[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RandomIndex;                                       // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HexDecoMesh;                                       // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mouseover;                                         // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MissionSelected;                                   // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsPlayable;                                    // 0x057A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsLocked;                                      // 0x057B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsHidden;                                      // 0x057C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TileIsVaildMission;                                // 0x057D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6116[0x2];                                     // 0x057E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDMissionIcon;                                    // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MIDMinusSelected;                                  // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    Hex_Deco_Meshes;                                   // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*               MIDMinusMouseover;                                 // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RenderHexWithClouds;                               // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6117[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MIDMissionPinnedIcon;                              // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DifficultyColor;                                   // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PinnedQuest;                                       // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6118[0x7];                                     // 0x05C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATheaterCamera_Blueprint_C*             TheaterCamera;                                     // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraIsMissionControl;                            // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTutorial;                                        // 0x05D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6119[0x2];                                     // 0x05DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimesUpdated;                                      // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TileIsBeingInitialized;                            // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PauseUpdates;                                      // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PinnedMissionExists;                               // 0x05E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OppositePinnedQuest;                               // 0x05E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         OppositePinnedQuestOpacity;                        // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLightning;                                      // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMainMission;                                     // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBlockParty;                                      // 0x05EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_611A[0x1];                                     // 0x05EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TileTypeNumber;                                    // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormModLightningStrength;                         // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRefocusTile;                                      // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UpdateFromFrontendCamera(EFrontEndCamera CameraMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void HasPinnedQuest(bool* Pinned);
	void HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& UniqueId, bool HasCompletedQuest, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue);
	void HandleMissionAlert(const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue_2, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue_2, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue_3, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UMissionAlertIndicator_C* K2Node_DynamicCast_AsMission_Alert_Indicator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsMissionAlertTile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB);
	void UserConstructionScript(struct FTransform& Temp_struct_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void Timeline_11__FinishedFunc();
	void Timeline_11__UpdateFunc();
	void Timeline_12__FinishedFunc();
	void Timeline_12__UpdateFunc();
	void OnLoaded_192496DB41CC2100CC1C729DB594CEF8(class UObject* Loaded);
	void CheckFocus();
	void FireLightningA();
	void ForceDefocus();
	void OnMissionDataUpdated();
	void OnDefocus();
	void OnFocus();
	void OnHostDeselect();
	void OnHostSelect();
	void OnClientDeselect();
	void OnClientSelect();
	void HandleTeamPowerChanged(int32 TeamPower, int32 PersonalPower);
	void OnInitializeTile();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnMarkedQuestChanged();
	void CheckIfQuestShouldBePinned();
	void CheckForPinnedInLevel();
	void RetryTileInitialized();
	void SetMissionPowerLevelDependencies();
	void ReceiveBeginPlay();
	void MissionLightning(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void MissionLightningOff(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void Unpause_Updates();
	void AsyncUpdateBanner(class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& Unique_Net_Id);
	void RefreshTile();
	void ExecuteUbergraph_BP_Hex_PARENT(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_CustomEvent_TeamPower, int32 K2Node_CustomEvent_PersonalPower, bool CallFunc_IsTilePlayable_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, EFrontEndCamera K2Node_CustomEvent_NewCamera, EFrontEndCamera K2Node_CustomEvent_OldCamera, class UFortQuestItem* CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest, bool CallFunc_IsTileValidForMarkedQuest_ReturnValue, bool CallFunc_HasValidMissionData_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, TArray<class ATheaterCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_IsTileLocked_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, const struct FFortPublicAccountInfo& CallFunc_GetCurrentlyViewedAccountInfo_Result, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_2, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, TDelegate<void(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, TDelegate<void(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)> K2Node_CreateDelegate_OutputDelegate_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, int32 Temp_int_Array_Index_Variable, class ATheaterCamera_Blueprint_C* CallFunc_Array_Get_Item, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, const struct FLinearColor& CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid, bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, class UTexture* K2Node_Select_Default, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails, bool CallFunc_GetTileMissionDetails_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FLinearColor& CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_From_Difficulty_Value_Success, class FText CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText, int32 CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue, TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(int32 TeamPower, int32 PersonalPower)> K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_EventName_1, float K2Node_CustomEvent_EmitterTime_1, const struct FVector& K2Node_CustomEvent_Location_1, const struct FVector& K2Node_CustomEvent_Velocity_1, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_7, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails_1, bool CallFunc_GetTileMissionDetails_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_CustomEvent_Material_Instance_Dynamic, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Unique_Net_Id, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsTeamRatingDataValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Hex_PARENT_C">();
	}
	static class ABP_Hex_PARENT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Hex_PARENT_C>();
	}
};

}

