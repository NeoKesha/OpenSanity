#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearUserMessage.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearUserMessage::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearUserMessage::Dispose(ActionClearUserMessage *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearUserMessage::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearUserMessage::Construct(ActionClearUserMessage *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearUserMessage;
		return;
		}
		
	*/
	return;
}

int ActionClearUserMessage::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearUserMessage::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearUserMessage::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearUserMessage::ExecuteFromCallContext(ActionClearUserMessage *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		FUN_0016d7a0((int)(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

