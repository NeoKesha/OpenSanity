#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDetachAllLinkedAgents.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDetachAllLinkedAgents::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDetachAllLinkedAgents::Dispose(ActionDetachAllLinkedAgents *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDetachAllLinkedAgents::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDetachAllLinkedAgents::Construct(ActionDetachAllLinkedAgents *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DetachAllLinkedAgents;
		return;
		}
		
	*/
	return;
}

int ActionDetachAllLinkedAgents::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDetachAllLinkedAgents::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDetachAllLinkedAgents::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDetachAllLinkedAgents::ExecuteFromCallContext(ActionDetachAllLinkedAgents *this,undefined4 time_clock,InstanceContext *ctx){
		int *piVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *this_00;
		pIVar2 = (((ctx->parent).ctx)->parent).ctx;
		this_00 = InstanceDataList::GetNode(&pIVar2->nodes,ObjectLink);
		if (this_00 != (InstanceNodeAbstract *)0x0) {
		FUN_000fc240(this_00,'\x01','\x01','\0');
		piVar1 = &(pIVar2->parent).flags;
		*piVar1 = *piVar1 & 0xffffff7f;
		}
		return;
		}
		
	*/
	return;
}

