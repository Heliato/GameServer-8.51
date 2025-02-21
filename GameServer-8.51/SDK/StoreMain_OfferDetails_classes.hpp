#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_OfferDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
// 0x00E0 (0x0590 - 0x04B0)
class UStoreMain_OfferDetails_C final  : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BaseColor;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseColorDetails;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         BonusMTXArea;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderDisclaimer;                                  // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CloseIcon;                                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BaseQuantity;                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonText_BonusQuantity;                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FounderPackLabelText;                              // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       KeyArt;                                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton;                                 // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MTXArea;                                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayGradient;                                   // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverlayGradientDetails;                            // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySalePrice;                                  // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxDetails;                                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute1;                  // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute2;                  // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice;                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxOfferInfo;                                     // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuckHighlight;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                 ProgressModal;                                     // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InitCurrency(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetBonusQuantity_ReturnValue, int32 CallFunc_GetTotalQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, class FText CallFunc_GetDescription_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue_1, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, int32 CallFunc_GetTotalQuantity_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, ESlateVisibility K2Node_Select_Default_2);
	void InitStoreTypeVisuals(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool Temp_bool_Variable_1, EFortMtxStoreOfferType CallFunc_GetFortStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
	void UnregisterInput();
	void RegisterInput(TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void PopDetails(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Init(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, TArray<struct FFortMtxDetailsAttribute>& CallFunc_GetDetailsAttributes_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, const struct FFortMtxDetailsAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetName_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, ESlateVisibility Temp_byte_Variable, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FSlateBrush& CallFunc_GetDetailsImage_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_OfferDetailsAttribute_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void HandleBack(bool* PassThrough);
	void HandlePurchaseComplete(bool bSuccess);
	void Construct();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_CustomEvent_bSuccess, TDelegate<void(bool bSuccess)> K2Node_CreateDelegate_OutputDelegate, class UFortStoreContext* CallFunc_GetContext_ReturnValue_2, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HandleBack_PassThrough, bool CallFunc_IsMobileGame_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, ESlateVisibility K2Node_Select_Default, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetails_C">();
	}
	static class UStoreMain_OfferDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetails_C>();
	}
};

}

