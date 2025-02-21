#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOffer_SalesTextBanner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C
// 0x0020 (0x0250 - 0x0230)
class UAthenaDirectAcquisitionOffer_SalesTextBanner_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          BorderViolatorMinusPercentOff;                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CTextBlockPercentOff;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          PointBorderLeft;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void Set_Sales_Text(class FText Sales_Text);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class FText K2Node_CustomEvent_Sales_Text, class FText CallFunc_TextToUpper_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOffer_SalesTextBanner_C">();
	}
	static class UAthenaDirectAcquisitionOffer_SalesTextBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOffer_SalesTextBanner_C>();
	}
};

}

