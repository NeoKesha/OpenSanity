#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0CE.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0CE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0CE::Dispose(Action0x0CE *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0CE::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CE::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void Action0x0CE::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CE::ExecuteFromCallContext(Action0x0CE *this,undefined4 time_clock,InstanceContext *ctx){
		(ctx->parent).vtable = (InstanceContext_VTable *)((uint)(ctx->parent).vtable | 0x200);
		*(undefined *)((int)&(ctx->parent).field14_0x20.field2_0x8 + 1) =*(undefined *)&(ctx->parent).field14_0x20.field2_0x8;
		return;
		}
		
	*/
	return;
}

int Action0x0CE::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0CE::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0CE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0CE::Construct(Action0x0CE *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CE;
		return;
		}
		
	*/
	return;
}

