#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAquisitionStyleScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
// 0x0058 (0x0508 - 0x04B0)
class UAthenaDirectAquisitionStyleScreen_C final  : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                         Button_Next;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_Previous;                                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CameraFramingWidget;                               // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*                ItemInfoHeader;                                    // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*       LockedNotification;                                // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StyleDisclaimer;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          OfferSet;                                          // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2C[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IndexIntoOffersWithVariantsList;                   // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OfferSubIndicesWithVariants;                       // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortItemDefinition*                    InitialTriggeringItemDef;                          // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SwitchToNextItemInOffer(int32 Direction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void ScanOfferForVariants(int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, ESlateVisibility K2Node_Select_Default, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, int32 CallFunc_GetNumGrantedItems_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasModifiableVariants_ReturnValue);
	void UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, bool IsOwned, class UFortAccountItemDefinition* GrantedItemDef, int32 CallFunc_Array_Get_Item, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, class UFortCosmeticVariant* CallFunc_GetVariantChannel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetVariantUnlockRequirement_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void HandleBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void OnOfferSet();
	void BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned);
	void OnActivated();
	void OnDeactivated();
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void RebuildStylesFromOffer();
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantChannel, const struct FGameplayTag& K2Node_ComponentBoundEvent_VariantTag, bool K2Node_ComponentBoundEvent_IsOwned, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Array_Get_Item, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<struct FMcpVariantChannelInfo>& CallFunc_GetDefaultVariantChannels_OutDefaultVariantData, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_HasTag_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAquisitionStyleScreen_C">();
	}
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAquisitionStyleScreen_C>();
	}
};

}

