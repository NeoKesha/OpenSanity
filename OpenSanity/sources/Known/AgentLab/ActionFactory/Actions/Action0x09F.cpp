#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x09F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x09F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x09F::Dispose(Action0x09F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x09F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x09F::Construct(Action0x09F *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x09F;
		return;
		}
		
	*/
	return;
}

int Action0x09F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x09F::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x09F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09F::ExecuteFromCallContext(Action0x09F *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		pIVar1 = (((ctx->parent).ctx)->nodes).array[0xe];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		uVar2 = pIVar1[4].time;
		pIVar1[5].vtable = (InstanceNodeAbstract_VTable *)0x0;
		pIVar1[4].time = uVar2 & 0xfffeffff;
		}
		return;
		}
		
	*/
	return;
}

