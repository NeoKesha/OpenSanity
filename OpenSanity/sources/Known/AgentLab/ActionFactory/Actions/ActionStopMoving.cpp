#include "headers/Known/AgentLab/ActionFactory/Actions/ActionStopMoving.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionStopMoving::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionStopMoving::Dispose(ActionStopMoving *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionStopMoving::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionStopMoving::Construct(ActionStopMoving *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_StopMoving;
		return;
		}
		
	*/
	return;
}

int ActionStopMoving::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionStopMoving::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionStopMoving::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionStopMoving::ExecuteFromCallContext(ActionStopMoving *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeAbstract::FUN_0016ec40((InstanceNodeAbstract *)(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

