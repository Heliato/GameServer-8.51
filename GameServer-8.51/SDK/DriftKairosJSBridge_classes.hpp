#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DriftKairosJSBridge

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DriftKairosJSBridge.DriftKairosCommonJSBridge
// 0x0000 (0x0028 - 0x0028)
class UDriftKairosCommonJSBridge : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DriftKairosCommonJSBridge">();
	}
	static class UDriftKairosCommonJSBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDriftKairosCommonJSBridge>();
	}
};

// Class DriftKairosJSBridge.DanceChallengesJSBridge
// 0x0010 (0x0038 - 0x0028)
class UDanceChallengesJSBridge final  : public UDriftKairosCommonJSBridge
{
public:
	uint8                                         Pad_12D9[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetDanceChallenges(const struct FWebJSResponse& Response);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DanceChallengesJSBridge">();
	}
	static class UDanceChallengesJSBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDanceChallengesJSBridge>();
	}
};

}

