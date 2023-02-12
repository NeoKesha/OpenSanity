#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x086.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x086::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x086::Dispose(Action0x086 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x086::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x086::Construct(Action0x086 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x086;
		return;
		}
		
	*/
	return;
}

int Action0x086::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x086::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x086::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x086::ExecuteFromCallContext(Action0x086 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *pIVar2;
		pIVar1 = (ctx->parent).field14_0x20.ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar2 = (ctx->parent).ctx;
		(pIVar2->parent).field14_0x20.field4_0x10 = pIVar1;
		(pIVar2->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar2->parent).field14_0x20.matrix2.m43 & 0xfffffffd | 1);
		}
		return;
		}
		
	*/
	return;
}

