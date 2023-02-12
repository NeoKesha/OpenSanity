#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearFocus::Dispose(ActionClearFocus *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearFocus::Construct(ActionClearFocus *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearFocus;
		return;
		}
		
	*/
	return;
}

int ActionClearFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearFocus::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearFocus::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearFocus::ExecuteFromCallContext(ActionClearFocus *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float *pfVar1;
		pfVar1 = &(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffffffc);
		return;
		}
		
	*/
	return;
}

