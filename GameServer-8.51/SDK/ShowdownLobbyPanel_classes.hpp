#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownLobbyPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownLobbyPanel.ShowdownLobbyPanel_C
// 0x01A0 (0x07A8 - 0x0608)
class UShowdownLobbyPanel_C final  : public UFortTournamentLobbyPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EventButtonHover;                                  // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderTimeRemaining;                               // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CentralContentSwitcher;                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderPinContainer;                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_EarnAPin;                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_Score;                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_TournamentWarnings;           // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EarnPinContent;                                    // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               EarnPinMessage;                                    // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EarnPinScoreText;                                  // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HighestScoreTeammatesText;                         // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HighestScoreText;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_SpecialScore;                        // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_35;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DetailsButtonBG;                             // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ErrorBG;                                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PanelBorder;                                 // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MFA_WarningText;                                   // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoMessage;                                         // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_DetailsText;                              // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownPin_C*                         ShowdownPin;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownPin_C*                         ShowdownPin_SpecialScore;                          // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HighestScore;                              // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxTournamentTitle;                            // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_ScoreInfo;                                // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_CrossplayWarning;                             // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_DetailsButton;                                // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_MatchCapWarning;                              // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Remaining;                                    // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         TournamentLogo;                                    // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TournamentTitle;                                   // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TournamentTitle2;                                  // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_PanelContent;                          // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WarningMessage;                                    // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            PrimaryColor;                                      // 0x0728(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ShadowColor;                                       // 0x0750(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HighlightColor;                                    // 0x0778(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DEVhasBranding;                                    // 0x07A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void InputTypeChanged(bool IsGamepad);
	void HandleCrossplayChanged();
	void UpdateColors();
	void Refresh(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, class FText Temp_text_Variable_5, EFortShowdownEventState Temp_byte_Variable_4, int32 CallFunc_GetCurrentEventScore_ReturnValue, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, bool CallFunc_IsWorldCupQualifierEvent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default, EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, bool CallFunc_DoCalloutMFARequirement_ReturnValue, bool CallFunc_DoCalloutMFARequirement_ReturnValue_1, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetTournamentMatchCap_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue, int32 CallFunc_GetTournamentMatchCap_ReturnValue_1, ESlateVisibility Temp_byte_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue_1, int32 CallFunc_GetTournamentMatchCap_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_4, ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 CallFunc_GetCurrentEventScore_ReturnValue_1, class FText K2Node_Select_Default_2, int32 CallFunc_GetBestEventScore_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, ESlateVisibility K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetCurrentEventScore_ReturnValue_2, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_PauseAnimation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float Temp_float_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, class UWidget* K2Node_Select_Default_4, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default_5, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_GetEventId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable_5, float K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void RefreshDataBP();
	void Construct();
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize();
	void BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventSwitchUI(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void BrandingToggle(bool HasBranding);
	void ExecuteUbergraph_ShowdownLobbyPanel(int32 EntryPoint, bool K2Node_CustomEvent_hasBranding, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, float Temp_float_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float K2Node_Select_Default_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsUsingGamepad_ReturnValue, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_4, float K2Node_Select_Default_2, const struct FMargin& K2Node_MakeStruct_Margin_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TDelegate<void(bool bUsingGamepad)> K2Node_CreateDelegate_OutputDelegate, class UCommonUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_4, bool K2Node_CustomEvent_bUsingGamepad, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UWidget* K2Node_Select_Default_3, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool Temp_bool_Variable_5, float K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float Temp_float_Variable_5, float K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownLobbyPanel_C">();
	}
	static class UShowdownLobbyPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownLobbyPanel_C>();
	}
};

}

