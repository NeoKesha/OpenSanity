#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x06E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x06E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x06E::Dispose(Action0x06E *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x06E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x06E::Construct(Action0x06E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x06E;
		return;
		}
		
	*/
	return;
}

int Action0x06E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x06E::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x06E::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x06E::ExecuteFromCallContext(Action0x06E *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeAbstract::FUN_0016ec70((InstanceNodeAbstract *)(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

