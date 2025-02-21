#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginResultWIdget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
// 0x0028 (0x0390 - 0x0368)
class ULoginResultWIdget_C final  : public UFortLoginResultWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                    RetryAction;                                       // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    Restart_Action;                                    // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void SetForceQuitButtons(bool bForceQuit);
	void ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, bool K2Node_Event_bForceQuit, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginResultWIdget_C">();
	}
	static class ULoginResultWIdget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginResultWIdget_C>();
	}
};

}

