#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRequestDetach.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRequestDetach::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRequestDetach::Dispose(ActionRequestDetach *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRequestDetach::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRequestDetach::Construct(ActionRequestDetach *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RequestDetach;
		return;
		}
		
	*/
	return;
}

int ActionRequestDetach::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRequestDetach::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionRequestDetach::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestDetach::ExecuteFromCallContext(ActionRequestDetach *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		(pIVar1->parent).flags = (pIVar1->parent).flags & 0xffffffbf;
		return;
		}
		
	*/
	return;
}

