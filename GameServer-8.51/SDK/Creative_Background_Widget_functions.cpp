#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Background_Widget

#include "Basic.hpp"

#include "Creative_Background_Widget_classes.hpp"
#include "Creative_Background_Widget_parameters.hpp"


namespace SDK
{

// Function Creative_Background_Widget.Creative_Background_Widget_C.ExecuteUbergraph_Creative_Background_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::ExecuteUbergraph_Creative_Background_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "ExecuteUbergraph_Creative_Background_Widget");

	Params::Creative_Background_Widget_C_ExecuteUbergraph_Creative_Background_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UCreative_Background_Widget_C::SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetText");

	Params::Creative_Background_Widget_C_SetText Parms{};

	Parms.Text = std::move(Text);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetBackgroundColor");

	Params::Creative_Background_Widget_C_SetBackgroundColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FontSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo                   K2Node_MakeStruct_SlateFontInfo                        (HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextScale");

	Params::Creative_Background_Widget_C_SetTextScale Parms{};

	Parms.FontSize = FontSize;
	Parms.K2Node_MakeStruct_SlateFontInfo = std::move(K2Node_MakeStruct_SlateFontInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            Alignment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Background_Widget_C::SetTextAlignment(ETextJustify Alignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextAlignment");

	Params::Creative_Background_Widget_C_SetTextAlignment Parms{};

	Parms.Alignment = Alignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()

void UCreative_Background_Widget_C::SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Background_Widget_C", "SetTextColor");

	Params::Creative_Background_Widget_C_SetTextColor Parms{};

	Parms.TextColor = std::move(TextColor);
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

