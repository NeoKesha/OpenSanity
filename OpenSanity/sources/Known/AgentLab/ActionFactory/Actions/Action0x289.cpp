#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x289.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x289::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x289::Dispose(Action0x289 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x289::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x289::Construct(Action0x289 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x289;
		return;
		}
		
	*/
	return;
}

void Action0x289::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x289::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x289::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x289::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x289::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x289::ExecuteFromCallContext(Action0x289 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *pIVar2;
		pIVar2 = (ctx->parent).ctx;
		fVar1 = *(float *)&pIVar2[1].parent.field_0x8;
		*(undefined4 *)&pIVar2[1].parent.field_0x8 = 0;
		if ((0.0 < fVar1) && (INT_00495d20 = INT_00495d20 + -1, INT_00495d20 < 0)) {
		INT_00495d20 = 0;
		}
		return;
		}
		
	*/
	return;
}

