#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_MimicTrailOff

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_MimicTrailOff_C final  : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IFortAnimNotify_Interface_Interface_C> K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface, bool K2Node_DynamicCast_bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_MimicTrailOff_C">();
	}
	static class UAnimNotify_MimicTrailOff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_MimicTrailOff_C>();
	}
};

}

