#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ShieldFlash

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ShieldFlash.BPI_ShieldFlash_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_ShieldFlash_C final  : public IInterface
{
public:
	void FlashShield();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_ShieldFlash_C">();
	}
	static class IBPI_ShieldFlash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ShieldFlash_C>();
	}
};

}

