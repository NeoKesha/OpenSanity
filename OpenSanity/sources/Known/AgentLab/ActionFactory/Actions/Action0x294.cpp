#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x294.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x294::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x294::Dispose(Action0x294 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x294::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x294::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x294::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x294::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x294::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x294::ExecuteFromCallContext(Action0x294 *this,undefined4 time_clock,InstanceContext *ctx){
		Method8 **ppMVar1;
		InstanceNodeAbstract *pIVar2;
		pIVar2 = InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Character);
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		return;
		}
		if (PTR_00496350->ctx == (InstanceContext *)0x0) {
		return;
		}
		pIVar2 = InstanceDataList::GetNode(&PTR_00496350->ctx->nodes,Character);
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		}
		ppMVar1 = &pIVar2[1].vtable[2].Method8;
		*ppMVar1 = (Method8 *)((uint)*ppMVar1 & 0xffffbfff);
		return;
		}
		
	*/
	return;
}

void Action0x294::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x294::Construct(Action0x294 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x294;
		return;
		}
		
	*/
	return;
}

