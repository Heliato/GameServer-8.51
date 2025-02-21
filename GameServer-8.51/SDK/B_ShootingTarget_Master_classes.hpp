#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ShootingTarget_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ShootingTarget_Master.B_ShootingTarget_Master_C
// 0x03E8 (0x0EF0 - 0x0B08)
class AB_ShootingTarget_Master_C final  : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   AimAssistPawn;                                     // 0x0B10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_TargetImpact_Falldown;                           // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       RoundShortWeakPoint;                               // 0x0B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       RoundWeakPoint;                                    // 0x0B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      HuskyWeakPoint1;                                   // 0x0B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PumpkinHeadTargetWeakPoint;                        // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       LlamaTargetWeakPoint;                              // 0x0B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       TomatoHeadTargetWeakPoint;                         // 0x0B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HandsOnHipsWeakPoint;                              // 0x0B50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PandaHeadWeakPoint;                                // 0x0B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       TeddyBearWeakPoint;                                // 0x0B60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CrouchingTargetWeakPoint;                          // 0x0B68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HuskTargetWeakPoint;                               // 0x0B70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DancingTargetWeakPoint;                            // 0x0B78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       LoserTargetWeakPoint;                              // 0x0B80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      StandingTargetWeakPoint;                           // 0x0B88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TargetMesh;                                        // 0x0B90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HeightExtender;                                    // 0x0B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ProximityTrigger;                                  // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*         FortMinigameProgress;                              // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Target_StandShort;                              // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Target_Base;                                    // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         KnockDownTimeline_Rotation_8B965F244DB51315A670CE8BD54F045D; // 0x0BD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            KnockDownTimeline__Direction_8B965F244DB51315A670CE8BD54F045D; // 0x0BD4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6838[0x3];                                     // 0x0BD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     KnockDownTimeline;                                 // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_Height_50A7E1DD45D0851E9ECD309DBAE220D5; // 0x0BE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_50A7E1DD45D0851E9ECD309DBAE220D5; // 0x0BE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6839[0x3];                                     // 0x0BE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PopUpTimeline_Rotation_EC7265FB4A8A31A05B401FB83B908B21; // 0x0BF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PopUpTimeline__Direction_EC7265FB4A8A31A05B401FB83B908B21; // 0x0BF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_683A[0x3];                                     // 0x0BF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PopUpTimeline;                                     // 0x0BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Rotated_Piece;                                     // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartingHealthSetting;                             // 0x0C08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResetDelaySetting;                                 // 0x0C0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         JumpTimeSetting;                                   // 0x0C10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBeforeHidingSetting;                           // 0x0C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentMaxHealthMultiplier;                        // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HingeLocationSetting;                              // 0x0C1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartingPositionSetting;                           // 0x0C20(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPopUpsSetting;                                  // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScoreValueSetting;                                 // 0x0C28(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeakPointMultiplierSetting;                        // 0x0C2C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ProximityDistanceSetting;                          // 0x0C30(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TeamAssignmentSetting;                             // 0x0C34(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddGameTimeSetting;                                // 0x0C38(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetMeshSetting;                                 // 0x0C3C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumResets;                                         // 0x0C40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PopUpOnJumpSetting;                                // 0x0C44(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WeakPointKnockdownSetting;                         // 0x0C45(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TargetIsUp;                                        // 0x0C46(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683B[0x1];                                     // 0x0C47(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CurrentlyDisplayedMesh;                            // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InJumpUpPosition;                                  // 0x0C50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WeakPointHit;                                      // 0x0C51(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683C[0x6];                                     // 0x0C52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ModifyMaxHealth;                                   // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_             TargetKnockedDownDispatcher;                       // 0x0C60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_             TargetPopUpDispatcher;                             // 0x0C70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UStaticMesh>             StandingTargetRef;                                 // 0x0C80(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             LoserTargetRef;                                    // 0x0CA8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             DancingTargetRef;                                  // 0x0CD0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             HuskTargetRef;                                     // 0x0CF8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             CrouchingTargetRef;                                // 0x0D20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             TeddyBearTargetRef;                                // 0x0D48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             PandaHeadTargetRef;                                // 0x0D70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             HandsOnHipsTargetRef;                              // 0x0D98(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             TomatoHeadTargetRef;                               // 0x0DC0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             LlamaTargetRef;                                    // 0x0DE8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             PumpkinHeadTargetRef;                              // 0x0E10(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             HuskyTargetRef;                                    // 0x0E38(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             RoundTargetRef;                                    // 0x0E60(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             RoundTargetShortRef;                               // 0x0E88(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                           PopUpDelayTimer;                                   // 0x0EB0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HideTargetTimer;                                   // 0x0EB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HopTimer;                                          // 0x0EC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UStaticMesh>>     TargetMeshesArray;                                 // 0x0EC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>            WeakPointArray;                                    // 0x0ED8(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                          UserSuppressHealthBar;                             // 0x0EE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void TargetKnockedDownDispatcher__DelegateSignature();
	void TargetPopUpDispatcher__DelegateSignature();
	void ExecuteUbergraph_B_ShootingTarget_Master(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, bool Temp_bool_Variable_2, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_MinigameJustStartedOrStopped, bool CallFunc_CanPopUp_CanPopUp, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_WeakPointWasHit_HitComponent, bool CallFunc_WeakPointWasHit_ReturnValue, int32 CallFunc_AwardScore_ScoreAwarded, int32 CallFunc_AwardScore_TeamAwardedPoints, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_ShouldTriggerTarget_Result, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_TargetShouldFall_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, class UObject* Temp_object_Variable_6, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_TimerDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_CustomEvent_InJumpUpPosition, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded, TSoftObjectPtr<class UStaticMesh> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_CustomEvent_Knocked_Down_, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 K2Node_CustomEvent_Check_for_Positive_Score, class AController* K2Node_CustomEvent_Instigator, bool CallFunc_IsLocalController_ReturnValue, class USoundBase* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTransform& K2Node_CustomEvent_ImpactTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_CustomEvent_Jump_Up_, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class USoundBase* K2Node_Select_Default_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetMaxHealth_ReturnValue_2, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems);
	void PostFinishSpawning();
	void PopUpTargetTimerEvent();
	void Target_Movement_Audio(bool Jump_Up_);
	void SpawnWeakpointFX(const struct FTransform& ImpactTransform);
	void Impact_Audio(int32 Check_for_Positive_Score, class AController* Param_Instigator);
	void Knock_Down_Audio(bool Knocked_Down_);
	void SetHopTimer();
	void HopTimerEvent();
	void Hop(bool Param_InJumpUpPosition);
	void SetHideTargetTimer(float TimerDuration);
	void HideTargetTimerEvent();
	void ResetFromSettings();
	void InitializeSettings();
	void PickMeshFromSettings();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void PopUpTarget(bool MinigameJustStartedOrStopped);
	void KnockdownTarget();
	void OnReady_A57ED5A14BEB6A98DB20D88D1582D58A();
	void OnLoaded_E00ACB5548EAE7DC61ECB69BAE5C78CA(class UObject* Loaded);
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void KnockDownTimeline__UpdateFunc();
	void KnockDownTimeline__FinishedFunc();
	void PopUpTimeline__UpdateFunc();
	void PopUpTimeline__FinishedFunc();
	void CanPopUp(bool MinigameJustStartedOrStopped, bool* Param_CanPopUp, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ResetWeakPoints(int32 Temp_int_Array_Index_Variable, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems, int32 Temp_int_Loop_Counter_Variable, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool WeakPointWasHit(struct FHitResult& Hit_Result, class UPrimitiveComponent** HitComponent, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_IsWithinWeakpointBounds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void PrepareChosenTarget(class UStaticMeshComponent* Param_StaticMeshComponent, class UPrimitiveComponent* WeakPointComponent_1, class UPrimitiveComponent* WeakPointComponent2);
	void CalculateScore(int32* ScoreToAward, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void AwardScore(class AFortPlayerController* FortPlayerController, int32* ScoreAwarded, int32* TeamAwardedPoints, class UFortMinigameManager* MinigameManager, class UFortMinigameManager* CallFunc_GetMinigameManager_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutSourceTags, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutContextTags, uint8 CallFunc_GetActorTeam_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_CalculateScore_ScoreToAward);
	void ShouldTriggerTarget(class UObject* Overlapping_Actor, class UPrimitiveComponent* Overlapping_Component, bool* Result, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void MinigameIsRunning(bool* Param_MinigameIsRunning, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetStartingPosition(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	bool TargetShouldFall(float CallFunc_GetHealth_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetMaxHealth(float NewMaxHealth, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	void HideTarget();
	void InitializeHideTargetTimer(bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ClearBunnyHopTimer();
	void SetBunnyHopTimer(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void CheckIfShouldHop(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void CreateWeakPointArray(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13);
	void SetAimAssistEnabled(bool NewType, bool Temp_bool_Variable, ECollisionResponse Temp_byte_Variable, ECollisionResponse Temp_byte_Variable_1, ECollisionResponse K2Node_Select_Default, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue, ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_ByteToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, float NewDamage, class UFortWeaponItemDefinition* CallFunc_GetWeaponDataFromDamageCauser_OutWeaponData, float CallFunc_BlueprintModifyIncomingDamage_ReturnValue, float CallFunc_CalculateDamageFromWeaponData_OutDamage, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_EffectContextHasHitResult_ReturnValue, class UPrimitiveComponent* CallFunc_WeakPointWasHit_HitComponent, bool CallFunc_WeakPointWasHit_ReturnValue);
	void UpdateHealthBarVisibility(bool ShouldShowBar, bool ShouldSuppress, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool IsWithinWeakpointBounds(const struct FVector& Impact_location, class USceneComponent* Component, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void CalculateDamageFromWeaponData(class UFortWeaponItemDefinition* WeaponData, float InDamage, float* OutDamage, float NewDamage, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetWeaponStatsRow_OutRow, bool CallFunc_GetWeaponStatsRow_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetWeaponDataFromDamageCauser(class UObject* DamageCauser, class UFortWeaponItemDefinition** OutWeaponData, class UFortWeaponItemDefinition* WeaponData, class AFortProjectileAthena* K2Node_DynamicCast_AsFort_Projectile_Athena, bool K2Node_DynamicCast_bSuccess, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon_1, bool K2Node_DynamicCast_bSuccess_2);
	void WeakPointArrayContainsItems(bool* ArrayContainsItems, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);

	class UStaticMesh* GetCollisionStaticMesh() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ShootingTarget_Master_C">();
	}
	static class AB_ShootingTarget_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ShootingTarget_Master_C>();
	}
};

}

