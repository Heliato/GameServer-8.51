#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButtonWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
// 0x0108 (0x0340 - 0x0238)
class UAthenaCustomizationSlotButtonWrapper_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaCustomizationSlotButton_C*       SlotButton;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   BannerDisplayName;                                 // 0x0248(0x0018)(Edit, BlueprintVisible)
	EAthenaCustomizationCategory                  CustomizationType;                                 // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E01[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastInlineDelegateProperty_             OnSlotClicked;                                     // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_             OnSlotHovered;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   CategoryDescription;                               // 0x0288(0x0018)(Edit, BlueprintVisible)
	UMulticastInlineDelegateProperty_             OnSlotUnhovered;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SubslotIndex;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBangType                                 BangType;                                          // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E02[0x2];                                     // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SlotImage;                                         // 0x02B8(0x0088)(Edit, BlueprintVisible)

public:
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_CanShowLockerSlotType_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(EAthenaCustomizationCategory Param_CustomizationType, class FText BannerLabel, class FText CustomizationDescription, int32 Param_SubslotIndex);
	void OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory Param_CustomizationType, class UCommonButton* Button, class FText BannerLabel, int32 Subslot_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButtonWrapper_C">();
	}
	static class UAthenaCustomizationSlotButtonWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButtonWrapper_C>();
	}
};

}

