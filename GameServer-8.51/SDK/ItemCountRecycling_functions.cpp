#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCountRecycling

#include "Basic.hpp"

#include "ItemCountRecycling_classes.hpp"
#include "ItemCountRecycling_parameters.hpp"


namespace SDK
{

// Function ItemCountRecycling.ItemCountRecycling_C.ExecuteUbergraph_ItemCountRecycling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Temp_text_Variable                                     ()
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()

void UItemCountRecycling_C::ExecuteUbergraph_ItemCountRecycling(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountRecycling_C", "ExecuteUbergraph_ItemCountRecycling");

	Params::ItemCountRecycling_C_ExecuteUbergraph_ItemCountRecycling Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCountRecycling.ItemCountRecycling_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemCountRecycling_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountRecycling_C", "PreConstruct");

	Params::ItemCountRecycling_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCountRecycling.ItemCountRecycling_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCountRecycling_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountRecycling_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCountRecycling.ItemCountRecycling_C.SetItemDefinition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              Param_ItemDefinition                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()

void UItemCountRecycling_C::SetItemDefinition(class UFortItemDefinition* Param_ItemDefinition, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCountRecycling_C", "SetItemDefinition");

	Params::ItemCountRecycling_C_SetItemDefinition Parms{};

	Parms.Param_ItemDefinition = Param_ItemDefinition;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}

