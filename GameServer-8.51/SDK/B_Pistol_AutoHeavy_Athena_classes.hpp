#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pistol_AutoHeavy_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Pistol_Auto_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
// 0x0008 (0x0D90 - 0x0D88)
class AB_Pistol_AutoHeavy_Athena_C : public AB_Pistol_Auto_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Pistol_AutoHeavy_Athena_C;        // 0x0D88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int32 EntryPoint);
	void OnWeaponAttached();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Pistol_AutoHeavy_Athena_C">();
	}
	static class AB_Pistol_AutoHeavy_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Pistol_AutoHeavy_Athena_C>();
	}
};

}

