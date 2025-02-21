#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsMatchesSubScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C
// 0x0050 (0x0370 - 0x0320)
class UProfileStatsMatchesSubScreen_C final  : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaProfileStatBox*                  ListProfileStatBox;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        MatchList;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaProfileStatBox*                  MatchProfileStatBox;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlacementStatRowWidget_C*              PlacementStatRowWidget;                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreStatRowWidget_C*                  ScoreStatRowWidget;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USmallStatRowWidget_C*                  Stat1;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopWeaponStatRow_C*                    TopWeaponStatRow;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void SetMatches(TArray<class UObject*>& InDataProvider);
	void HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	void OnActivated();
	void BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_ProfileStatsMatchesSubScreen(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class UAthenaBaseStatView* StatView)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, class UAthenaBaseStatView* K2Node_CustomEvent_StatView, class UAthenaMatchSetStatView* K2Node_DynamicCast_AsAthena_Match_Set_Stat_View, bool K2Node_DynamicCast_bSuccess_1, TArray<class UAthenaMatchStatView*>& CallFunc_GetBestMatchViews_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProfileStatsMatchesSubScreen_C">();
	}
	static class UProfileStatsMatchesSubScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProfileStatsMatchesSubScreen_C>();
	}
};

}

