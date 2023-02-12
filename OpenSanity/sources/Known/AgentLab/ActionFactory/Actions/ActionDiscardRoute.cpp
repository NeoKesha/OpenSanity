#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDiscardRoute.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDiscardRoute::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDiscardRoute::Dispose(ActionDiscardRoute *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDiscardRoute::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDiscardRoute::Construct(ActionDiscardRoute *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DiscardRoute;
		return;
		}
		
	*/
	return;
}

int ActionDiscardRoute::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDiscardRoute::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDiscardRoute::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDiscardRoute::ExecuteFromCallContext(ActionDiscardRoute *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (((ctx->parent).ctx)->nodes).array[0xf];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		FUN_00186550((int)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

