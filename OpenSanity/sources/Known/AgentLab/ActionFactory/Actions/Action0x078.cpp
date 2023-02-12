#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x078.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x078::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x078::Dispose(Action0x078 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x078::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x078::Construct(Action0x078 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x078;
		return;
		}
		
	*/
	return;
}

int Action0x078::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x078::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x078::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x078::ExecuteFromCallContext(Action0x078 *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceContext *pIVar2;
		pIVar2 = (ctx->parent).ctx;
		if ((char)((uint)(((pIVar2->parent).ctx)->parent).flags >> 8) < '\0') {
		FUN_0017b310(pIVar2);
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 0x200);
		}
		return;
		}
		
	*/
	return;
}

