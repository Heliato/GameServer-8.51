#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimalSquadMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// 0x0048 (0x0BA8 - 0x0B60)
class UMinimalSquadMember_C final  : public UAthenaMinimalSquadMemberEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StyleNotReady;                                     // 0x0B68(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleSitOut;                                       // 0x0B70(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleEmpty;                                        // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnReady;                                           // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Meeple;                                      // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocalUserIndicator;                                // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MeepleContainer;                                   // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReadyFlash;                                        // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSitOutVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetReadyVisuals();
	void SetNotReadyVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetEmptyVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void OnTeamMemberEstablished(bool bHasValidMember);
	void ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint, EGameReadiness K2Node_Event_ReadyStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_Event_bHasValidMember, bool CallFunc_IsCurrentMemberLocal_ReturnValue, EGameReadiness Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalSquadMember_C">();
	}
	static class UMinimalSquadMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalSquadMember_C>();
	}
};

}

