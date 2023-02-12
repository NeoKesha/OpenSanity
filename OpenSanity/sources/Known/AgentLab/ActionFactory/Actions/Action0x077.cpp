#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x077.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x077::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x077::Dispose(Action0x077 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x077::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x077::Construct(Action0x077 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x077;
		return;
		}
		
	*/
	return;
}

int Action0x077::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x077::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x077::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x077::ExecuteFromCallContext(Action0x077 *this,undefined4 time_clock,InstanceContext *ctx){
		*(undefined *)&((ctx->parent).ctx)->next = 0;
		return;
		}
		
	*/
	return;
}

