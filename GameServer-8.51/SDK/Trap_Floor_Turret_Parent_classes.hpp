#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Turret_Parent

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C
// 0x0028 (0x0D50 - 0x0D28)
class ATrap_Floor_Turret_Parent_C final  : public ABuildingTrapFloor_Turret
{
public:
	class UStaticMeshComponent*                   TurretBase;                                        // 0x0D28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box_Collision;                                     // 0x0D30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FirePoint;                                         // 0x0D38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ExplosionBuildUP_Flashes;                          // 0x0D40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SK_Playset_Turret;                                 // 0x0D48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Floor_Turret_Parent_C">();
	}
	static class ATrap_Floor_Turret_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Floor_Turret_Parent_C>();
	}
};

}

