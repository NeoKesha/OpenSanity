#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearCollisions.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearCollisions::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearCollisions::Dispose(ActionClearCollisions *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearCollisions::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearCollisions::Construct(ActionClearCollisions *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearCollisions;
		return;
		}
		
	*/
	return;
}

int ActionClearCollisions::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearCollisions::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearCollisions::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearCollisions::ExecuteFromCallContext(ActionClearCollisions *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeInstanceD::FUN_00175120((InstanceNodeInstanceD *)(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

