#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_UtilityItem_FireworksMortar_Athena

#include "Basic.hpp"

#include "B_UtilityItem_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_UtilityItem_FireworksMortar_Athena.B_UtilityItem_FireworksMortar_Athena_C
// 0x0010 (0x0918 - 0x0908)
class AB_UtilityItem_FireworksMortar_Athena_C final  : public AB_UtilityItem_Generic_C
{
public:
	class UStaticMeshComponent*                   Base;                                              // 0x0908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Top;                                               // 0x0910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_UtilityItem_FireworksMortar_Athena_C">();
	}
	static class AB_UtilityItem_FireworksMortar_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_UtilityItem_FireworksMortar_Athena_C>();
	}
};

}

