#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameStat_Time

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameStat_Time.MinigameStat_Time_C
// 0x0008 (0x0198 - 0x0190)
class UMinigameStat_Time_C final  : public UFortMinigameStatFilter
{
public:
	bool                                          NewVar_0;                                          // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	int32 Compare(int32 FirstScore, int32 SecondScore, bool SecondIsValid, bool FirstIsValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1) const;
	class FText FormatStat(int32 InCount, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_GetTotalMinutes_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetMilliseconds_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetSeconds_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_GetMinutes_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameStat_Time_C">();
	}
	static class UMinigameStat_Time_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameStat_Time_C>();
	}
};

}

