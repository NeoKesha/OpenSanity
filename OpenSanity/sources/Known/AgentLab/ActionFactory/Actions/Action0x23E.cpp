#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x23E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x23E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x23E * __fastcall Action0x23E::Construct(Action0x23E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x23E;
		FUN_00175340(&this->unlabelled12);
		return this;
		}
		
	*/
	return;
}

void Action0x23E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x23E::Dispose(Action0x23E *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int Action0x23E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x23E::GetSize(void){
		return 0x54;
		}
		
	*/
	return 0;
}

void Action0x23E::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23E::ExecuteFromCallContext(Action0x23E *this,int time_clock,InstanceContext *ctx){
		InstanceNodeAbstract::FUN_0017c840((InstanceNodeAbstract *)(ctx->parent).ctx,(int)&this->unlabelled12,time_clock);
		return;
		}
		
	*/
	return;
}

