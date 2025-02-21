#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend.FrontEnd_C
// 0x0018 (0x0270 - 0x0258)
class AFrontEnd_C final  : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          NewLobby;                                          // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38FC[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHBOnboardingFlow_C*                    HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess);
	void OnMatchStarted();
	void EnableTutorial();
	void ReceiveBeginPlay();
	void ShowDebugPlayers();
	void HideDebugPlayers();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsBROnly_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_Less_IntInt_ReturnValue, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item, class ATeamMemberPedestal_C* K2Node_DynamicCast_AsTeam_Member_Pedestal, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item_2, class ATeamMemberPedestal_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors_1, int32 CallFunc_Array_Length_ReturnValue_3, class AActor* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_C">();
	}
	static class AFrontEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEnd_C>();
	}
};

}

