#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PieChartStatWidget

#include "Basic.hpp"

#include "PieChartStatWidget_classes.hpp"
#include "PieChartStatWidget_parameters.hpp"


namespace SDK
{

// Function PieChartStatWidget.PieChartStatWidget_C.AddStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatGroupData                   StatGroupData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     K2Node_MakeArray_Array                                 (ZeroConstructor, ReferenceParm)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>             K2Node_MakeArray_Array_1                               (ZeroConstructor, ReferenceParm)
// struct FLinearColor                     CallFunc_Array_Get_Item_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonNumericType                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonNumericType                      Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     K2Node_MakeArray_Array_2                               (ZeroConstructor, ReferenceParm)
// class FName                             CallFunc_Array_Get_Item_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize                  K2Node_MakeStruct_SlateChildSize                       (NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPieChartRowWidget_C*             CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonNumericType                      K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                       CallFunc_AddChild_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 K2Node_DynamicCast_AsVertical_Box_Slot                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPieChartStatWidget_C::AddStat(struct FStatGroupData& StatGroupData, int32 Param_Index, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, const struct FLinearColor& CallFunc_Array_Get_Item_1, ECommonNumericType Temp_byte_Variable, ECommonNumericType Temp_byte_Variable_1, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_2, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPieChartRowWidget_C* CallFunc_Create_ReturnValue, ECommonNumericType K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PieChartStatWidget_C", "AddStat");

	Params::PieChartStatWidget_C_AddStat Parms{};

	Parms.StatGroupData = std::move(StatGroupData);
	Parms.Param_Index = Param_Index;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Array_Get_Item_1 = std::move(CallFunc_Array_Get_Item_1);
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeArray_Array_2 = std::move(K2Node_MakeArray_Array_2);
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_MakeStruct_SlateChildSize = std::move(K2Node_MakeStruct_SlateChildSize);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
	K2Node_MakeArray_Array_2 = std::move(Parms.K2Node_MakeArray_Array_2);
}


// Function PieChartStatWidget.PieChartStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UPieChartStatWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PieChartStatWidget_C", "OnStatChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PieChartStatWidget.PieChartStatWidget_C.ExecuteUbergraph_PieChartStatWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle                 CallFunc_GetStatStyle_ReturnValue                      (ConstParm)
// TArray<struct FStatGroupData>           CallFunc_CreateWeaponGroupData_ReturnValue             (ZeroConstructor, ReferenceParm)
// struct FStatGroupData                   CallFunc_Array_Get_Item                                ()
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()
// class FText                             CallFunc_TextToUpper_ReturnValue_1                     ()
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPieChartStatWidget_C::ExecuteUbergraph_PieChartStatWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, TArray<struct FStatGroupData>& CallFunc_CreateWeaponGroupData_ReturnValue, const struct FStatGroupData& CallFunc_Array_Get_Item, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PieChartStatWidget_C", "ExecuteUbergraph_PieChartStatWidget");

	Params::PieChartStatWidget_C_ExecuteUbergraph_PieChartStatWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = std::move(CallFunc_GetStatStyle_ReturnValue);
	Parms.CallFunc_CreateWeaponGroupData_ReturnValue = std::move(CallFunc_CreateWeaponGroupData_ReturnValue);
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_CreateWeaponGroupData_ReturnValue = std::move(Parms.CallFunc_CreateWeaponGroupData_ReturnValue);
}

}

