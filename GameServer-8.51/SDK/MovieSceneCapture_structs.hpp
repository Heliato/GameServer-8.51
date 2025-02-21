#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum MovieSceneCapture.EHDRCaptureGamut
// NumValues: 0x0007
enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                              = 0,
	HCGM_P3DCI                               = 1,
	HCGM_Rec2020                             = 2,
	HCGM_ACES                                = 3,
	HCGM_ACEScg                              = 4,
	HCGM_Linear                              = 5,
	HCGM_MAX                                 = 6,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
// NumValues: 0x0005
enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                                     = 0,
	Initialized                              = 1,
	Capturing                                = 2,
	Finalizing                               = 3,
	EMovieSceneCaptureProtocolState_MAX      = 4,
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FCapturedPixels final 
{
public:
	uint8                                         Pad_2C92[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008 (0x0008 - 0x0000)
struct FCaptureResolution final 
{
public:
	int32                                         ResX;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResY;                                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0060 (0x0060 - 0x0000)
struct FMovieSceneCaptureSettings final 
{
public:
	struct FDirectoryPath                         OutputDirectory;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameModeBase>              GameModeOverride;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutputFormat;                                      // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteExisting;                                // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRelativeFrameNumbers;                          // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C93[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HandleFrames;                                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MovieExtension;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ZeroPadFrameNumbers;                               // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C94[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             FrameRate;                                         // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCaptureResolution                     Resolution;                                        // 0x004C(0x0008)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableTextureStreaming;                           // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicEngineScalability;                       // 0x0055(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicMode;                                    // 0x0056(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMovement;                                    // 0x0057(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowTurning;                                     // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPlayer;                                       // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowHUD;                                          // 0x005A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C95[0x5];                                     // 0x005B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010 (0x0010 - 0x0000)
struct FCompositionGraphCapturePasses final 
{
public:
	TArray<class FString>                         Value;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010 (0x0010 - 0x0000)
struct FFrameMetrics final 
{
public:
	float                                         TotalElapsedTime;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameDelta;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameNumber;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumDroppedFrames;                                  // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0050 (0x0050 - 0x0000)
struct FCapturedPixelsID final 
{
public:
	TMap<class FName, class FName>                Identifiers;                                       // 0x0000(0x0050)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

