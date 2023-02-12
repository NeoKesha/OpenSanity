#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x257.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x257::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x257::Dispose(Action0x257 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x257::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x257::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x257::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x257::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x257::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x257::ExecuteFromCallContext(Action0x257 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Character);
		if (pIVar1 == (InstanceNodeAbstract *)0x0) {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		return;
		}
		if (PTR_00496350->ctx == (InstanceContext *)0x0) {
		return;
		}
		pIVar1 = InstanceDataList::GetNode(&PTR_00496350->ctx->nodes,Character);
		if (pIVar1 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		}
		thunk_FUN_0006faa0((int)pIVar1[1].vtable);
		return;
		}
		
	*/
	return;
}

void Action0x257::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x257::Construct(Action0x257 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x257;
		return;
		}
		
	*/
	return;
}

