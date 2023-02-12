#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x25C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x25C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x25C::Dispose(Action0x25C *this,byte param_1){
		ActionAbstract::CleanUp(&this->field0_0x0);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->field0_0x0;
		}
		
	*/
	return;
}

void Action0x25C::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x25C::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x25C::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x25C::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x25C::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x25C::ExecuteFromCallContext(Action0x25C *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeCharacter *pIVar1;
		pIVar1 = (InstanceNodeCharacter *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Character);
		if (pIVar1 != (InstanceNodeCharacter *)0x0) {
		thunk_FUN_000665d0(pIVar1->field1_0x18);
		}
		return;
		}
		
	*/
	return;
}

void Action0x25C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x25C::Construct(Action0x25C *this){
		(this->field0_0x0).nextAction = (ActionAbstract *)0x0;
		(this->field0_0x0).field1_0x4 = 0xffffff;
		(this->field0_0x0).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25c;
		return;
		}
		
	*/
	return;
}

