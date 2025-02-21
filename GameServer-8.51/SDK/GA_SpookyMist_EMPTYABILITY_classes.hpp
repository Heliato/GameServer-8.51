#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpookyMist_EMPTYABILITY

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C
// 0x0008 (0x0948 - 0x0940)
class UGA_SpookyMist_EMPTYABILITY_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SpookyMist_EMPTYABILITY_C">();
	}
	static class UGA_SpookyMist_EMPTYABILITY_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SpookyMist_EMPTYABILITY_C>();
	}
};

}

