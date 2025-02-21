#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0160 (0x0550 - 0x03F0)
class UAthenaLobby_C final  : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialImportButton_C*                  Button_SocialImport;                               // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonGamepadSelect;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmergencyNoticeWidget_C*               EmergencyNoticeWidget;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendLinkButton_C*                    FriendLinkButton;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Header;                                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchmakingRegionAndPool_C*            MatchmakingRegion;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimalTeamDisplay_C*                  MinimalTeamDisplay;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPCB_InfoPannel_C*                      PCB_InfoPannel;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPendingAccountMergeNotification_C*     PendingAccountMergeNotification;                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                   PlayerEmblemAndXp;                                 // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanel_C*              PlayerPanel;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaFrontEndRadialPicker_C*          RadialPicker;                                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ShadowPlayHighlights;                              // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                    StoreToastWidget;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputCancel;                                       // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         SwitcherDetailsActiveIndex;                        // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HoveredPlayerIndex;                                // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputScroll;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         SelectedPlayerIndex;                               // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BD2[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NavigationOrderToPlayerIndex;                      // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                    InputNews;                                         // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InputCustomMatchmaking;                            // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaNewsModal_C*                     NewsModal;                                         // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHeadlessReminder_C*              HeadlessReminder;                                  // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                         SpawnedPartyFinder;                                // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDpadUpKeyIsDown;                                  // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD3[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    InputEmote;                                        // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UStoreToastRequest*                     StoreToastRequest;                                 // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TryShowToast;                                      // 0x0510(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         HoveredPlayerIndex_0;                              // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BD4[0x4];                                     // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialPanel_C*                         SpawnedSocialPanel;                                // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputAction_InspectChallenges;                     // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InputManageSquads;                                 // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortSquadSelectionMenu*                SquadSelectMenu;                                   // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnInputManageSquads(bool* NewParam, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class USquadSelection_C* CallFunc_Create_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ConfigureGenericLinkButton(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableLobbyGenericLinkButton_ReturnValue, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default_1);
	void OnKeybindsChanged();
	void CloseEmotePicker(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void HandleOnPlayerLeaveUpdatePlayerPanel(int32 PlayerIndex, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnInputEmote(bool* PassThrough, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel, TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate);
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void HighlightsCountChanged(int32 NewParam, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void ShowModalNews(TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaNewsModal_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnInputNews(bool* bPassThrough);
	void OnSelect(int32 PlayerIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess_2, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue_2, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_ShouldShowExternalFriendsUI_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetTeamMember_OutMember, bool CallFunc_GetTeamMember_ReturnValue);
	void CanNavigatePlayers(bool* bCanNavigatePlayers, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHoveredPlayer(int32 PlayerIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanNavigatePlayers_bCanNavigatePlayers);
	void HoverNextPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void HoverPreviousPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void ShouldAddPlay(bool* bShouldAdd, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeInput(class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetCurrentPartyMaxSize_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_3);
	void OnLobbyPlayerPadUnhovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLobbyPlayerPadHovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void OnLobbyPlayerGadgetsClicked(int32 PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int32 PlayerIndex);
	void OnLobbyDisconnected(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_ShouldAddCancel_bShouldAdd, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_OnInputCancel_bCommited, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd, bool CallFunc_IsVisible_ReturnValue);
	void RefreshInput(bool Temp_bool_Variable, EInputActionState Temp_byte_Variable, EInputActionState Temp_byte_Variable_1, bool Temp_bool_Variable_1, EInputActionState Temp_byte_Variable_2, EInputActionState Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_ShouldAddScroll_bShouldAdd, ESlateVisibility K2Node_Select_Default, EInputActionState K2Node_Select_Default_1, bool CallFunc_ShouldAddCancel_bShouldAdd_1, EInputActionState K2Node_Select_Default_2);
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(bool Register, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_4, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_6, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_5, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_8, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate_8, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_9, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_10, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_11);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnInputCancel(bool* bCommited, bool CallFunc_IsVisible_ReturnValue);
	void OnTeamMemberRemoved(int32 EmptySlot, bool CallFunc_IsActivated_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_IsActivated_ReturnValue);
	void Refresh(int32 UpdatedPlayerIndex);
	void Initialize(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetLobbyBackgroundLevelName_ReturnValue);
	void DialogResult_156754AE468EF93DCA2009A412591BA7(EFortDialogResult Result, class FName ResultName);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnPlayerClicked(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void Event_Abandon();
	void Construct();
	void OnActivated();
	void OnNavigationUp();
	void Destruct();
	void ShowDailyNews();
	void AcceptPartySuggestion();
	void Tester();
	void ShowMobileAutoFireScreen();
	void OnDeactivated();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void AttemptToShowToast();
	void TryToastAgainNextFrame();
	void ClosePlayerPanel();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void OnPlaylistChanged(EFortLobbyType LobbyType, class UFortPlaylistAthena* PlaylistData);
	void LoadLobbyBackground();
	void Load_Lobby_Background_Recursive();
	void UpdatePartnerLobyInfo();
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UFortPickerContext* CallFunc_GetContext_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, EFortLobbyType Temp_byte_Variable, EFrontEndCamera Temp_byte_Variable_1, EFrontEndCamera Temp_byte_Variable_2, EFrontEndCamera Temp_byte_Variable_3, EFrontEndCamera Temp_byte_Variable_4, EFortLobbyType Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable, EInputActionState Temp_byte_Variable_10, EInputActionState Temp_byte_Variable_11, int32 K2Node_Event_PlayerIndex_2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_3, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UFortHUDContext* CallFunc_GetContext_ReturnValue_4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_5, bool Temp_bool_Variable_1, class UFortHUDContext* CallFunc_GetContext_ReturnValue_6, int32 K2Node_Event_PlayerIndex_1, int32 K2Node_Event_PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, TDelegate<void(int32 NumHighlights)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, TDelegate<void(class UCommonActivatablePanel* Panel)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_7, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_8, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_9, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_11, class UStoreToastRequest* K2Node_Event_StoreUpdatedRequest, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_ShouldBeginRequest_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsActivated_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_12, EFortDialogResult Temp_byte_Variable_12, TDelegate<void(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept)> K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess_1, class FName Temp_name_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End_2, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Has_Been_Initd_Variable, EFortLobbyType K2Node_Event_LobbyType, class UFortPlaylistAthena* K2Node_Event_PlaylistData, class UAthenaMatchmakingPlay_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play, bool K2Node_DynamicCast_bSuccess_4, ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess_1, EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, EFrontEndCamera K2Node_Select_Default_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_ShouldDisplayPCBData_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_HasAnyTags_ReturnValue, EInputActionState K2Node_Select_Default_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobby_C">();
	}
	static class UAthenaLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobby_C>();
	}
};

}

