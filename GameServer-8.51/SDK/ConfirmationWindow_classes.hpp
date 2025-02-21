#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmationWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// 0x0248 (0x0590 - 0x0348)
class UConfirmationWindow_C final  : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonBox;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CloseIcon;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ContentSwitcher;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DescriptionScroll;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HoverDescription;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftOptionalWidget;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox_NUI;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MainContentHorizontalBox;                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainIcon;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MobileCloseOverlay;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             OptionalWidget;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RootOverlay;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SelectableConfirmButtons;                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TapToCloseZone;                                    // 0x03C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WaitThrobber;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortDialogDescription_NUI             ConfirmationDescription;                           // 0x03E0(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UIconTextButton_C*>              ConfirmButtons;                                    // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UIconTextButton_C*                      DeclineButton;                                     // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ResultNames;                                       // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bShowingConfirmation;                              // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463E[0x3];                                     // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                ButtonBoxPadding;                                  // 0x052C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                ButtonBoxPadding_VerticalBox;                      // 0x053C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_463F[0x4];                                     // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           HoverTexts;                                        // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                           ButtonIconColor;                                   // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WaitThrobberColorParamName;                        // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WaitThrobberColor;                                 // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle  WaitingForLatentActionHandle;                      // 0x0588(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bShowLightBoxAnims;                                // 0x058C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldTriggerCameraModeOnClose;                   // 0x058D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void PreConstruct(bool IsDesignTime);
	void OnBeginOutro();
	void OnBeginIntro();
	void HandleOutroEnded();
	void HandleIntroEnded();
	void Construct();
	void SetDescription(const struct FFortDialogDescription_NUI& NewDescription);
	void Initialize();
	void AddConfirmButtons(const struct FConfirmationDialogAction& LocalConfirmDialogAction, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_HasAnyConfirmAction_ReturnValue, bool CallFunc_IsSimpleConfirmAction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FConfirmationDialogAction& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void AddDeclineButton(class UIconTextButton_C* CallFunc_Create_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_GetInputPriority_ReturnValue, TDelegate<void(class UCommonButton* Button)> K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void DeclineActionClicked(class UCommonButton* Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	bool IsSimpleConfirmAction(bool CallFunc_Not_PreBool_ReturnValue);
	void ConfirmActionClicked(class UCommonButton* Button, const struct FFortDialogDescription_NUI& ResponseConfirmationDescription, class FName ResultName, int32 FoundIndex, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetResultName_ResultName, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	bool HasAnyConfirmAction(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AddSingleConfirmButton(const struct FConfirmationDialogAction& ConfirmDialogAction, bool UseInputAction, class UIconTextButton_C* AddedConfirmButton, bool LocalUseInputAction, const struct FConfirmationDialogAction& LocalConfirmDialogAction, TDelegate<void(class UCommonButton* Button)> K2Node_CreateDelegate_OutputDelegate, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetInputAction_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TDelegate<void(class UCommonButton* Button)> K2Node_CreateDelegate_OutputDelegate_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_GetInputPriority_ReturnValue);
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& K2Node_Select_Default);
	void GetResultName(class UIconTextButton_C* ConfirmButton, class FName* ResultName, int32 FoundIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void KillCurrentConfirmation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	void Deinitialize();
	void SetupMainIcon(bool CallFunc_IsValid_ReturnValue);
	void SetupTitleAndDescription(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void SetupLeft();
	void Set_Hover_Description(class UCommonButton* Button_to_Hover, ESlateVisibility Temp_byte_Variable, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void GetLatentActionWaitHandle(struct FFortDialogExternalLatentActionHandle* LatentActionHandle);
	void StopWaitingForLatentAction();
	void OnWaitForExternalLatentAction(const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void ClickButtonIfBot(bool CallFunc_IsValid_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientBot_ReturnValue);
	void SetupNonInteractiveContent();
	void SetupLeftAdditionalContent(bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetupAdditionalContent(bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CloseConfirmation(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void CenterFirstButton(bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default);
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void PlayShowSound(bool CallFunc_IsValid_ReturnValue);
	void CancelActionClicked(class UCommonButton* Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfirmationWindow_C">();
	}
	static class UConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfirmationWindow_C>();
	}
};

}

