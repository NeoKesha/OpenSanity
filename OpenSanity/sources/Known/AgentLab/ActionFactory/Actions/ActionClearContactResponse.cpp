#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearContactResponse.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearContactResponse::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearContactResponse::Dispose(ActionClearContactResponse *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearContactResponse::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearContactResponse::Construct(ActionClearContactResponse *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearContactResponse;
		return;
		}
		
	*/
	return;
}

int ActionClearContactResponse::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearContactResponse::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearContactResponse::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearContactResponse::ExecuteFromCallContext(ActionClearContactResponse *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		char cVar1;
		this_00 = (ctx->parent).ctx;
		cVar1 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar1 != '\0') {
		FUN_00179970((int *)this_00);
		}
		return;
		}
		
	*/
	return;
}

