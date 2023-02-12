#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x081.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x081::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x081::Dispose(Action0x081 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x081::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x081::Construct(Action0x081 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x081;
		return;
		}
		
	*/
	return;
}

int Action0x081::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x081::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x081::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x081::ExecuteFromCallContext(Action0x081 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceNodeAbstract *this_01;
		char cVar1;
		this_00 = (ctx->parent).ctx;
		cVar1 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if ((cVar1 != '\0') &&(this_01 = (this_00->nodes).array[0x11], this_01 != (InstanceNodeAbstract *)0x0)) {
		InstanceNodeAbstract::FUN_00168860(this_01);
		}
		return;
		}
		
	*/
	return;
}

