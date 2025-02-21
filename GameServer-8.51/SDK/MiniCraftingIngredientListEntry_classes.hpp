#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
// 0x0010 (0x0270 - 0x0260)
class UMiniCraftingIngredientListEntry_C final  : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemCount_C*                           ItemCountWidget;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* Get_ItemCountWidget_ToolTipWidget(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void RefreshBeingPreviewed(const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Refresh(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void RefreshListEntry();
	void ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniCraftingIngredientListEntry_C">();
	}
	static class UMiniCraftingIngredientListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniCraftingIngredientListEntry_C>();
	}
};

}

