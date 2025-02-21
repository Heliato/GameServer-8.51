#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleArrowButton

#include "Basic.hpp"

#include "CircleArrowButton_classes.hpp"
#include "CircleArrowButton_parameters.hpp"


namespace SDK
{

// Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_HoverColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& Param_HoverColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "UpdateArrowColor");

	Params::CircleArrowButton_C_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.Param_HoverColor = std::move(Param_HoverColor);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleArrowButton.CircleArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCircleArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "PreConstruct");

	Params::CircleArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCircleArrowButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Temp_struct_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCircleArrowButton_C::ExecuteUbergraph_CircleArrowButton(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CircleArrowButton_C", "ExecuteUbergraph_CircleArrowButton");

	Params::CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);
}

}

