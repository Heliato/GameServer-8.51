#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalPlayerProfileModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C
// 0x0068 (0x03B0 - 0x0348)
class UBP_LocalPlayerProfileModal_C final  : public UFortPlayerProfileModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LocalPlayerProfileManagement_C*     BP_LocalPlayerProfileManagement;                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CloseAction;                                       // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                   LastChosenIcon;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LastChosenColor;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    PreviousAction;                                    // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    NextAction;                                        // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_LocalPlayerProfileModal(int32 EntryPoint, bool K2Node_Event_bUsingGamepad, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough_1);
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature();
	void Construct();
	void OnActivated();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_66_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_11_OpenBannerEditor__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Activate_Widget(int32 Selection, bool K2Node_SwitchInteger_CmpSuccess);
	void HandleCloseAction(bool* PassThrough, bool CallFunc_Attempt_Leave_Picker_Left, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Setup_Input_Action_Handlers(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_2);
	void HandlePreviousAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HandleNextAction(bool* PassThrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Handle_Leaving_Banner_Editor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LocalPlayerProfileModal_C">();
	}
	static class UBP_LocalPlayerProfileModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LocalPlayerProfileModal_C>();
	}
};

}

