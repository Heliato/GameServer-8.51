#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TicketCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketCounter.TicketCounter_C
// 0x0038 (0x0268 - 0x0230)
class UTicketCounter_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URefundTicket_C*                        RefundTicket;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                        RefundTicket_C_2;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                        RefundTicket_C_3;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    TicketArray;                                       // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          HighlightPendingTicket;                            // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void ConsumeTicket(int32 TicketIndex);
	void Construct();
	void ExecuteUbergraph_TicketCounter(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array, class UUserWidget* CallFunc_Array_Get_Item, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Array_Get_Item_1, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 K2Node_CustomEvent_NumTicketsAvailableToUse, int32 K2Node_CustomEvent_TicketIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketCounter_C">();
	}
	static class UTicketCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketCounter_C>();
	}
};

}

