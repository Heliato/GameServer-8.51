#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinServer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// 0x0080 (0x03E0 - 0x0360)
class UJoinServer_C final  : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                     MainContentStack;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ManualStart;                                       // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_466F[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FConfirmationDialogAction>      TutorialCanceledConfirmActions;                    // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                   NoneAction;                                        // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundPromptTutorial;                               // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MatchmakingAttempts;                               // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TutorialMatchmakingStarted;                        // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4670[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UProgressWidget_C*                      ProgressWidget;                                    // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialWindow_C*                      TutorialWindow;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbandonSession;                                    // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4671[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                MenuWidget;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMatchmakingAttempts;                            // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4672[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URejoinWindow_C*                        RejoinWindow;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RejoinAttemptCount;                                // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsCampaignSubGame(bool* Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleLobbyConnectingToGame();
	void ShowAbandoningProgress(class UWidget* CallFunc_PopWidget_ReturnValue);
	void ShowRetryRejoinWindow(class FText Failure, bool AllowRetry, class UWidget* CallFunc_PopWidget_ReturnValue);
	void ShowRetryRejoinSession(int32 Temp_int_Variable, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsJoinableGameAvailable_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void RemoveRejoinWindowDuringRejoin(class UWidget* CallFunc_PopWidget_ReturnValue);
	void HideRejoinWindow(bool Param_AbandonSession);
	void ShowRejoinWindow(class UWidget* CallFunc_PopWidget_ReturnValue);
	class UWidget* HandleGetMainMenuContent();
	void ShowTutorialCanceled(class UWidget* CallFunc_PopWidget_ReturnValue);
	void GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText, EMatchmakingCompleteResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText K2Node_Select_Default);
	void HandleLobbyTimeUpdated(int32 TimeRemaining, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsWorldRecordLoaded_ReturnValue, bool CallFunc_JoinFromLobby_ReturnValue);
	void SkipTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UWidget* CallFunc_PopWidget_ReturnValue);
	void StartTutorialMatchmakingFlow(class UWidget* CallFunc_PopWidget_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_StartOnboardingMission_ReturnValue);
	void HandleEnterState(EFortUIState PreviousState, EFortUIState LocalPreviousState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleLobbyDisconnected();
	void HandleMatchmakingStateChange(EMatchmakingState OldState, EMatchmakingState NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable);
	void HandleMatchmakingComplete(EMatchmakingCompleteResult Result, EMatchmakingCompleteResult MatchmakingResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetMatchmakingError_ErrorText, class UWidget* CallFunc_PopWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialize(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class URejoinWindow_C* CallFunc_Create_ReturnValue, class UProgressWidget_C* CallFunc_Create_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, TDelegate<void(int32 CurrentTime)> K2Node_CreateDelegate_OutputDelegate_3, class UTutorialWindow_C* CallFunc_Create_ReturnValue_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(EMatchmakingState OldState, EMatchmakingState NewState)> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void(EMatchmakingCompleteResult Result)> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, class FName ResultName);
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void RequestTutorialRetry();
	void ShowSkipTutorial();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleRequestRejoinRetry();
	void HandleRequestAbandon();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Construct();
	void OnEnterState(EFortUIState PreviousUIState);
	void ExecuteUbergraph_JoinServer(int32 EntryPoint, EFortDialogResult Temp_byte_Variable, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, class UFortTutorialContext* CallFunc_GetContext_ReturnValue_1, class FName Temp_name_Variable, bool CallFunc_ShouldPromptToSkipTutorial_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource_1, class UObject* K2Node_HandleClientEvent_EventFocus_1, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_1, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_RejoinSession* CallFunc_RejoinSession_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class UFortAsyncAction_AbandonSession* CallFunc_AbandonSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, EFortUIState K2Node_Event_PreviousUIState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinServer_C">();
	}
	static class UJoinServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinServer_C>();
	}
};

}

