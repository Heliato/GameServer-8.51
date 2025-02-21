#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AmbientSplineActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
// 0x0008 (0x02E8 - 0x02E0)
class ABP_AmbientSplineActor_C final  : public AFortSplineAudioActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void Check_Closest_Point();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AmbientSplineActor_C">();
	}
	static class ABP_AmbientSplineActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AmbientSplineActor_C>();
	}
};

}

