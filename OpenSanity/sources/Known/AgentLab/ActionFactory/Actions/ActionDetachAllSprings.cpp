#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDetachAllSprings.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDetachAllSprings::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDetachAllSprings::Dispose(ActionDetachAllSprings *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDetachAllSprings::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDetachAllSprings::Construct(ActionDetachAllSprings *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DetachAllSprings;
		return;
		}
		
	*/
	return;
}

int ActionDetachAllSprings::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDetachAllSprings::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDetachAllSprings::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDetachAllSprings::ExecuteFromCallContext(ActionDetachAllSprings *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		FUN_000fc3f0((int)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

