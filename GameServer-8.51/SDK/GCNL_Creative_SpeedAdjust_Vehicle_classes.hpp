#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Creative_SpeedAdjust_Vehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Creative_SpeedAdjust_Vehicle.GCNL_Creative_SpeedAdjust_Vehicle_C
// 0x0008 (0x0798 - 0x0790)
class AGCNL_Creative_SpeedAdjust_Vehicle_C final  : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GCNL_Creative_SpeedAdjust_Vehicle(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Creative_SpeedAdjust_Vehicle_C">();
	}
	static class AGCNL_Creative_SpeedAdjust_Vehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Creative_SpeedAdjust_Vehicle_C>();
	}
};

}

