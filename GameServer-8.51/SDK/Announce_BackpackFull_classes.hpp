#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_BackpackFull

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_BackpackFull.Announce_BackpackFull_C
// 0x0010 (0x03A8 - 0x0398)
class AAnnounce_BackpackFull_C final  : public AFortClientAnnouncement_Basic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announce_BackpackFull(int32 EntryPoint);
	void OnClientAnnouncementStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_BackpackFull_C">();
	}
	static class AAnnounce_BackpackFull_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_BackpackFull_C>();
	}
};

}

