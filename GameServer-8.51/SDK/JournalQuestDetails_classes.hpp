#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalQuestDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JournalQuestDetails.JournalQuestDetails_C
// 0x00D0 (0x0310 - 0x0240)
class UJournalQuestDetails_C final  : public UFortJournalQuestDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LiveStreamerDescription_C*          BP_LiveStreamerDescription;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_QuestExpiresWidget_C*               BP_QuestExpiresWidget;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FutureObjectiveProgressBarGroup;                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        FutureTaskList;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObjectiveProgressBarGroup;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestDescription;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestIconMinusFill;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestLocation;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestTitle;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        TaskList;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UpcomingText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsQuestAudioPlaying_;                              // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5872[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortConversation*                      Conversation;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized_;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5873[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAnnounce_Gen_Quest_Conversation_C*     ConversationActor;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       NewVar_0;                                          // 0x02D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastInlineDelegateProperty_             OnSpokenDialogEnded;                               // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortQuestItem*                         QuestItemRef;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOutro;                                           // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	class FText Get_Streaming_Attached_Quest_Name(EFortQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, EFortQuestType CallFunc_GetQuestType_ReturnValue, class FText K2Node_Select_Default);
	void Is_Streaming_Quest(bool* bStreamingQuest, class UFortQuestItemDefinition* CallFunc_Get_Quest_Item_Def_AsFort_Quest_Item_Definition, EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Set_Quest_Display_Name(class FText InText, class FText LocalQuestName, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Get_Streaming_Attached_Quest_Name_ReturnValue, bool CallFunc_Is_Streaming_Quest_bStreamingQuest, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void IsQuestAudioPlaying(bool* Param_IsQuestAudioPlaying);
	void StartConversation(class UFortConversation* Param_Conversation, class UFortQuestItem* QuestItem, bool IsOutro_, bool CallFunc_IsValid_ReturnValue, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_C* CallFunc_FinishSpawningActor_ReturnValue);
	void StopConversation(bool CallFunc_IsValid_ReturnValue);
	void AbandonQuest(class UFortQuestItem* QuestToAbandon, bool* QuestAbandoned_, EFortQuestState CallFunc_GetQuestState_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EFortQuestType CallFunc_GetQuestType_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetRemainingDailyQuestRerolls_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void UpdatePanelInfo(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, TArray<class UFortQuestObjectiveInfo*>& CallFunc_GetFutureObjectives_FutureObjectives, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetDisplayName_ReturnValue, ESlateVisibility K2Node_Select_Default, TArray<class UFortQuestObjectiveInfo*>& CallFunc_GetVisibleObjectives_VisibleObjectives);
	void UpdatePlayButtonState(EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateButtonStates();
	void HandleOnEndSpokenDialog(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Select_Default);
	void Setup(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void HandleCurrentQuestChangedBP();
	void ExecuteUbergraph_JournalQuestDetails(int32 EntryPoint);
	void OnSpokenDialogEnded__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JournalQuestDetails_C">();
	}
	static class UJournalQuestDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJournalQuestDetails_C>();
	}
};

}

