#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsMatchesSubScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.SetMatches
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_SetMatches final 
{
public:
	TArray<class UObject*>                        InDataProvider;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_HandleBack final 
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D49[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleStatViewChanged
// 0x0008 (0x0008 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_HandleStatViewChanged final 
{
public:
	class UAthenaBaseStatView*                    StatView;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature final 
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature final 
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.ExecuteUbergraph_ProfileStatsMatchesSubScreen
// 0x0098 (0x0098 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAthenaBaseStatView* StatView)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5D4D[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaBaseStatView*                    K2Node_CustomEvent_StatView;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchSetStatView*                K2Node_DynamicCast_AsAthena_Match_Set_Stat_View;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAthenaMatchStatView*>           CallFunc_GetBestMatchViews_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View_1;     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D4F[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item_1;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsHovered;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

