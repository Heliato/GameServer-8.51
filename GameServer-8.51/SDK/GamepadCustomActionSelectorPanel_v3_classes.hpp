#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadCustomActionSelectorPanel_v3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "InputCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
// 0x00B8 (0x0400 - 0x0348)
class UGamepadCustomActionSelectorPanel_v3_C final  : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Clear;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_Clear;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        CommonListView_GamepadActions;                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Clear1;                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_Clear2;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget_Clear;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                   OptionsMenuHeader;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Back;                                              // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastInlineDelegateProperty_             CustomActionSelected;                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UFortOptionsMenuInputData*>      CurrentInputData;                                  // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_             CustomClosedUsingBack;                             // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_             CustomClearButton;                                 // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKey                                   KeyNone;                                           // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Clear;                                             // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void CustomActionSelected__DelegateSignature(int32 SelectedIndex, class FName ActionName);
	void CustomClosedUsingBack__DelegateSignature();
	void CustomClearButton__DelegateSignature();
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFortOptionsMenuInputData*>& K2Node_CustomEvent_InputData, class UObject* K2Node_CustomEvent_Item, TDelegate<void(class UObject* Item)> K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_GetIndexForItem_ReturnValue, EFortInputActionGroup CallFunc_GetInputActionGroup_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_CreateCustomListItem_ReturnItem, bool CallFunc_IsValid_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_2);
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDeactivated();
	void OnActivated();
	void BP_OnItemClicked_Bind(class UObject* Item);
	void UpdatePanel(TArray<class UFortOptionsMenuInputData*>& InputData);
	void Construct();
	void HandleBack(bool* PassThrough);
	void CreateCustomListItem(class FName ActionName, EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem, class FName ActionName_Local, EFortInputActionGroup InputActionGroup_Local, class FName CustomPresetName_Local, class UGamepadKeyTextButton_C* ReturnItem_Local, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_GetScreenLabel_ReturnValue, const struct FKey& CallFunc_GetKeyForAction_ReturnValue, class UGamepadKeyTextButton_C* CallFunc_Create_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void HandleClear(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadCustomActionSelectorPanel_v3_C">();
	}
	static class UGamepadCustomActionSelectorPanel_v3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadCustomActionSelectorPanel_v3_C>();
	}
};

}

