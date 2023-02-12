#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy538.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDummy538::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy538::Dispose(ActionDummy538 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionDummy538::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy538::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDummy538::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy538::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionDummy538::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy538::ExecuteFromCallContext(ActionDummy538 *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

void ActionDummy538::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDummy538::Construct(ActionDummy538 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy538;
		return;
		}
		
	*/
	return;
}

