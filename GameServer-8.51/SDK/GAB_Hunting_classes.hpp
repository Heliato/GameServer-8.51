#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Hunting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Hunting.GAB_Hunting_C
// 0x0070 (0x09B0 - 0x0940)
class UGAB_Hunting_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEnvQuery*                              EQS_Hunting_Query;                                 // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EQS_Grid_Half_Size;                                // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EQS_Density;                                       // 0x0954(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HuntingMoveTaskName;                               // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIController*                      MyFortAIController;                                // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 HuntingTarget;                                     // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastTimeStartedHunting;                            // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HuntingRestartDelta;                               // 0x0974(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_MoveAI*                MovementTask;                                      // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 GoalDistancesOnCompleteMove;                       // 0x0980(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                        PawnPositionsOnCompletedMove;                      // 0x0990(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          ShouldAbortHunting;                                // 0x09A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B92[0x3];                                     // 0x09A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinGoalDistChange;                                 // 0x09A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPawnDistChange;                                 // 0x09A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_Hunting(int32 EntryPoint, EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetGoalActor_ReturnValue, TDelegate<void(class AActor* Actor, const struct FAIStimulus& Stimulus)> K2Node_CreateDelegate_OutputDelegate_1, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, bool K2Node_Event_bWasCancelled, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class AActor* CallFunc_GetGoalActor_ReturnValue_1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_Actor, const struct FAIStimulus& K2Node_CustomEvent_Stimulus, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TDelegate<void(EPathFollowingResult Result, class AAIController* AIController)> K2Node_CreateDelegate_OutputDelegate_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_UpdateDistanceData_MinValue, float CallFunc_UpdateDistanceData_MaxValue, bool CallFunc_UpdateDistanceData_HasValidData, float CallFunc_UpdatePositionData_MaxDistance, bool CallFunc_UpdatePositionData_HasValidData, float CallFunc_Subtract_FloatFloat_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TDelegate<void(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6);
	void StoreGoalDistance();
	void Restart_Hunting();
	void StartQuery();
	void OnTargetPerceptionUpdated_Event_0(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void OnHuntingQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnComplete_1139C33842819C6E767F7AA892C4E6BD();
	void OnInterrupted_1139C33842819C6E767F7AA892C4E6BD();
	void OnCancelled_1139C33842819C6E767F7AA892C4E6BD();
	void OnRequestFailed_1139C33842819C6E767F7AA892C4E6BD();
	void OnMoveFinished_1139C33842819C6E767F7AA892C4E6BD(EPathFollowingResult Result, class AAIController* AIController);
	void UpdateDistanceData(TArray<float>& DistArray, float NewDistance, float* MinValue, float* MaxValue, bool* HasValidData, float MaxValueInArray, float MinValueInArray, int32 Temp_int_Array_Index_Variable, float CallFunc_Array_Get_Item, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void UpdatePositionData(TArray<struct FVector>& PosArray, const struct FVector& NewPosition, float* MaxDistance, bool* HasValidData, float MaxValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_FMax_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Hunting_C">();
	}
	static class UGAB_Hunting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Hunting_C>();
	}
};

}

