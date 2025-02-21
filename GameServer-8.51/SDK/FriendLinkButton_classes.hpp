#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendLinkButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FriendLinkButton.FriendLinkButton_C
// 0x0018 (0x0B60 - 0x0B48)
class UFriendLinkButton_C final  : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InviteCodeMessage;                                 // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void BP_OnClicked();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_FriendLinkButton(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFriendLink_C* CallFunc_Create_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendLinkButton_C">();
	}
	static class UFriendLinkButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendLinkButton_C>();
	}
};

}

