#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsOverviewSubScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsOverviewSubScreen_C_HandleBack final 
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4930[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.ExecuteUbergraph_ProfileStatsOverviewSubScreen
// 0x0014 (0x0014 - 0x0000)
struct ProfileStatsOverviewSubScreen_C_ExecuteUbergraph_ProfileStatsOverviewSubScreen final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
};

}

