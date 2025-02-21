#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownTournamentPosterBack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C
// 0x00D8 (0x06A8 - 0x05D0)
class UShowdownTournamentPosterBack_C final  : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonTextBlock_EventDates;                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_MetaDate;                          // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_MetaTitle;                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DateText;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FlavorText;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_FooterWatermark;                             // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownPin_C*                         ShowdownPin;                                       // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Pin;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleLine1;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleLine2;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry;                               // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_0;                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_1;                           // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_2;                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_3;                           // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_4;                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_5;                           // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_6;                           // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_7;                           // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_8;                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_9;                           // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_10;                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_11;                          // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTournamentDateEntry_C*                 TournamentDateEntry_C_12;                          // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_DateGrid;                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         DateRowMax;                                        // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTournamentDateText(class FText* TournamentDate, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable_2, bool Temp_bool_Variable_1, class FText Temp_text_Variable_3, int32 Temp_int_Variable, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, int32 Temp_int_Variable_1, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue, bool Temp_bool_Variable_2, int32 CallFunc_BreakDateTime_Year_1, int32 CallFunc_BreakDateTime_Month_1, int32 CallFunc_BreakDateTime_Day_1, int32 CallFunc_BreakDateTime_Hour_1, int32 CallFunc_BreakDateTime_Minute_1, int32 CallFunc_BreakDateTime_Second_1, int32 CallFunc_BreakDateTime_Millisecond_1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_BreakDateTime_Year_2, int32 CallFunc_BreakDateTime_Month_2, int32 CallFunc_BreakDateTime_Day_2, int32 CallFunc_BreakDateTime_Hour_2, int32 CallFunc_BreakDateTime_Minute_2, int32 CallFunc_BreakDateTime_Second_2, int32 CallFunc_BreakDateTime_Millisecond_2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue_1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue_2, int32 CallFunc_BreakDateTime_Year_3, int32 CallFunc_BreakDateTime_Month_3, int32 CallFunc_BreakDateTime_Day_3, int32 CallFunc_BreakDateTime_Hour_3, int32 CallFunc_BreakDateTime_Minute_3, int32 CallFunc_BreakDateTime_Second_3, int32 CallFunc_BreakDateTime_Millisecond_3, int32 CallFunc_BreakDateTime_Year_4, int32 CallFunc_BreakDateTime_Month_4, int32 CallFunc_BreakDateTime_Day_4, int32 CallFunc_BreakDateTime_Hour_4, int32 CallFunc_BreakDateTime_Minute_4, int32 CallFunc_BreakDateTime_Second_4, int32 CallFunc_BreakDateTime_Millisecond_4, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText K2Node_Select_Default_2, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_BreakDateTime_Year_5, int32 CallFunc_BreakDateTime_Month_5, int32 CallFunc_BreakDateTime_Day_5, int32 CallFunc_BreakDateTime_Hour_5, int32 CallFunc_BreakDateTime_Minute_5, int32 CallFunc_BreakDateTime_Second_5, int32 CallFunc_BreakDateTime_Millisecond_5, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void RefreshDataBP();
	void EventColorize();
	void EventPopulateEventWindowData();
	void ExecuteUbergraph_ShowdownTournamentPosterBack(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UTournamentDateEntry_C* K2Node_DynamicCast_AsTournament_Date_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetTournamentId_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_4, TArray<class FString>& CallFunc_GetTournamentEvents_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UTournamentDateEntry_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 CallFunc_GetTournamentBestScore_ReturnValue, float K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 K2Node_Select_Default_2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentPosterBack_C">();
	}
	static class UShowdownTournamentPosterBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentPosterBack_C>();
	}
};

}

