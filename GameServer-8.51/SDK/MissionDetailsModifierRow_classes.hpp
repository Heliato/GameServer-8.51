#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionDetailsModifierRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C
// 0x00D8 (0x0308 - 0x0230)
class UMissionDetailsModifierRow_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       ImageModifier;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxIcon;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextModifierDescription;                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextModifierName;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 NameTextStyle;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 DescriptionTextStyle;                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Name_MissionDetailsModifierRow_C;                  // 0x0270(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowName;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_452F[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description;                                       // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowDescription;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4530[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              SmallIcon;                                         // 0x02B0(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bUseSmallIcon;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4531[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              LargeIcon;                                         // 0x02E0(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionDetailsModifierRow(int32 EntryPoint);
	void Construct();
	void Update(const struct FVector2D& NormalSize);
	void PlayIntroAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateName(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void UpdateDescription(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void UpdateIcon(const struct FVector2D& Normal_Size, const struct FVector2D& Small_Size, bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1);
	void SetName(class FText In_Name, bool CallFunc_NotEqual_TextText_ReturnValue);
	void SetShowName(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetNameTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void SetDescription(class FText In_Description, bool CallFunc_NotEqual_TextText_ReturnValue);
	void SetShowDescription(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetDescriptionTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void SetUseSmallIcon(bool In_Use, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetSmallIcon(TSoftObjectPtr<class UTexture2D> In_Icon, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue);
	void SetLargeIcon(TSoftObjectPtr<class UTexture2D> In_Icon, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue);
	void SetData(class FText In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, class FText In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, TSoftObjectPtr<class UTexture2D> In_Small_Icon, bool In_Use_Small_Icon, TSoftObjectPtr<class UTexture2D> In_Large_Icon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionDetailsModifierRow_C">();
	}
	static class UMissionDetailsModifierRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionDetailsModifierRow_C>();
	}
};

}

