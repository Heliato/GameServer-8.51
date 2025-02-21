#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Generic_BotTurret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
// 0x0028 (0x0360 - 0x0338)
class AGCNL_Generic_BotTurret_C final  : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AB_BGA_BotTurret_Parent_C*              BotTurret;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftGunOffset;                                     // 0x0348(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightGunOffset;                                    // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Generic_BotTurret(int32 EntryPoint, int32 K2Node_CustomEvent_Left, bool K2Node_SwitchInteger_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(int32 Left)> K2Node_CreateDelegate_OutputDelegate_1);
	void BotExplosionWarning();
	void BindBotExplosionWarning();
	void BindBotFired();
	void Activated();
	void BotFired(int32 Left);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Generic_BotTurret_C">();
	}
	static class AGCNL_Generic_BotTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Generic_BotTurret_C>();
	}
};

}

