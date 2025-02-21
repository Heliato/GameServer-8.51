#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeSetDetails

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ChallengeSetDetails.ChallengeSetDetails_C.SetDynamicColors
// 0x0090 (0x0090 - 0x0000)
struct ChallengeSetDetails_C_SetDynamicColors final 
{
public:
	class UImage*                                 DetailsDynamicMaterialTarget;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeSetStyle                 FortChallengeSetStyle;                             // 0x0008(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeSetDetails.ChallengeSetDetails_C.GetWidgetForFramingViewedItem
// 0x0008 (0x0008 - 0x0000)
struct ChallengeSetDetails_C_GetWidgetForFramingViewedItem final 
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeSetDetails.ChallengeSetDetails_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ChallengeSetDetails_C_HandleBack final 
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5950[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeSetDetails.ChallengeSetDetails_C.OnChallengeSetEstablished
// 0x0088 (0x0088 - 0x0000)
struct ChallengeSetDetails_C_OnChallengeSetEstablished final 
{
public:
	struct FFortChallengeSetStyle                 DisplayStyle;                                      // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsComplete;                                       // 0x0080(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChallengeSetDetails.ChallengeSetDetails_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChallengeSetDetails_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final 
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChallengeSetDetails.ChallengeSetDetails_C.ExecuteUbergraph_ChallengeSetDetails
// 0x0118 (0x0118 - 0x0000)
struct ChallengeSetDetails_C_ExecuteUbergraph_ChallengeSetDetails final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5951[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5952[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortChallengeSetStyle                 K2Node_Event_DisplayStyle;                         // 0x0020(0x0080)(ConstParm)
	bool                                          K2Node_Event_bIsComplete;                          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5953[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button_1;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5954[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetChallengeStyleLightAccentColor_ReturnValue; // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5955[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5956[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCircleArrowButton_C*                   K2Node_DynamicCast_AsCircle_Arrow_Button_2;        // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5957[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemInfoHeaderWidget_C*                K2Node_DynamicCast_AsItem_Info_Header_Widget;      // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleBack_PassThrough;                   // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5958[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x00F8(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
};

}

