#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BoostJumpPack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_BoostJumpStates_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
// 0x0168 (0x0AC8 - 0x0960)
class UGA_BoostJumpPack_C final  : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0960(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Jump_Multiple;                                     // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Basic_Jump_Z_Adjust;                               // 0x096C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FinalJumpHeight;                                   // 0x0978(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ACA[0x4];                                     // 0x0984(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     EventTriggerData;                                  // 0x0988(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bJumpButtonHeld;                                   // 0x0A38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAtApex;                                           // 0x0A39(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2ACB[0x2];                                     // 0x0A3A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            JetpackEffectHandle;                               // 0x0A3C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ACC[0x4];                                     // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBoundToPawnLanded;                                // 0x0A50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2ACD[0x3];                                     // 0x0A51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FuelFudge;                                         // 0x0A54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            RegenEffectHandle;                                 // 0x0A58(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bRegenEffectActive;                                // 0x0A60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2ACE[0x7];                                     // 0x0A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ExecuteTags;                                       // 0x0A68(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         JumpButtonHeldCount;                               // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ACF[0x4];                                     // 0x0A8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ReleaseTags;                                       // 0x0A90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TimeStartedHovering;                               // 0x0AB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeStartedFalling;                                // 0x0AB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndHoverDelay;                                     // 0x0AB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndFallingDelay;                                   // 0x0ABC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasDied;                                          // 0x0AC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, struct FHitResult& K2Node_CustomEvent_Hit, struct FGameplayEventData& K2Node_Event_EventData, EJumpBoostPackState K2Node_Event_InPreviousState, EJumpBoostPackState K2Node_Event_InCurrentState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Delay_ProcessAbilityStateMachine();
	void OnCurrentStateChanged(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnPawnLanded(struct FHitResult& Hit);
	void On_Reached_Jump_Apex();
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void HandleBoostJump(const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_SetJumpHeight_Pawn_Out, const struct FVector& CallFunc_SetJumpHeight_Jump_Height);
	void SetupTransitionVariables(const struct FGameplayTag& Tag, const struct FGameplayTag& TargetTag, bool CallFunc_Reasons_To_Reset_on_Transition_ReturnValue, bool CallFunc_IsCurrentlyDead_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void DetermineStateToTransitionTo(Enum_BoostJumpStates* BoostState, bool K2Node_SwitchEnum_CmpSuccess, Enum_BoostJumpStates CallFunc_TransitionFromFalling_TargetBoostState, Enum_BoostJumpStates CallFunc_TransitionFromHovering_TargetBoostState, Enum_BoostJumpStates CallFunc_TransitionFromBoost_TargetBoostState, Enum_BoostJumpStates CallFunc_TransitionFromIdle_TargetBoostState);
	void ProcessAbilityStateMachine(bool K2Node_SwitchEnum_CmpSuccess, Enum_BoostJumpStates CallFunc_DetermineStateToTransitionTo_BoostState, bool K2Node_SwitchEnum_CmpSuccess_1);
	void TransitionFromBoost(Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void TransitionFromHovering(Enum_BoostJumpStates* TargetBoostState, float CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void TransitionFromFalling(Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ResetTransitionVariables(const struct FGameplayTag& TargetTag);
	void HandleHovering(float CallFunc_GetTimeSeconds_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_2);
	void HandleFalling(float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void HandleIdle();
	void Setup_Notify_at_Apex(bool bNotifyApex, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess);
	void PotentiallyEndHovering(bool bForceEndHovering, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetCurrentBoostState(EJumpBoostPackState NewState, EJumpBoostPackState PreviousState, Enum_BoostJumpStates PreviewBoostState);
	void HandleCurrentBoostStateChanged(EJumpBoostPackState PreviousState, EJumpBoostPackState Param_CurrentState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	bool IsUsingJetpackEffectActive(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Setup_PlayerPawn(TDelegate<void(struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate);
	void K2_OnEndAbility(bool bWasCancelled);
	void Consider_Starting_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Consider_Stopping_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Start_Regen_Effect(bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void Stop_Regen_Effect();
	void ProcessTriggerData(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Reset_Toggle_Input_State(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void OnFuelIsFull();
	void OnFuelIsEmpty();
	void OnAbilityCanceled();
	void SavePlayerPawn(const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void Reengage_Hovering_Movement(bool CallFunc_IsFalling_ReturnValue);
	void Reengage_Falling_Movement(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Handle_Jetpack_Equipped(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);

	void TransitionFromIdle(Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBoostAllowed_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetFuel_Fuel_1, float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) const;
	void GetFuel(float* Fuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default) const;
	void GetMaxFuel(float* MaxFuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default) const;
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class AFortPlayerPawnAthena* PlayerPawn, const struct FGameplayTagContainer& ExplicitExecutionTags, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3) const;
	bool IsBoostAllowed(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue) const;
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2) const;
	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue) const;
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& Tag, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInGhostMode_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAllowedToFly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_C">();
	}
	static class UGA_BoostJumpPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_C>();
	}
};

}

