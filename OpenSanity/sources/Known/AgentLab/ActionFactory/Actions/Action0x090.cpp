#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x090.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x090::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x090::Dispose(Action0x090 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x090::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x090::Construct(Action0x090 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x090;
		return;
		}
		
	*/
	return;
}

int Action0x090::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x090::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x090::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x090::ExecuteFromCallContext(Action0x090 *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeShadow *pIVar1;
		pIVar1 = (InstanceNodeShadow *)(((ctx->parent).ctx)->nodes).array[10];
		if ((pIVar1 != (InstanceNodeShadow *)0x0) && (uVar1 = 0, ((uint)pIVar1[2].array[3] & 0xf) != 0)) {
		do {
		*(undefined *)((int)pIVar1[1].array + (uVar1 - 8)) = 1;
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < ((uint)pIVar1[2].array[3] & 0xf));
		}
		return;
		}
		
	*/
	return;
}

