#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearWobble.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearWobble::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearWobble::Dispose(ActionClearWobble *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearWobble::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearWobble::Construct(ActionClearWobble *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearWobble;
		return;
		}
		
	*/
	return;
}

int ActionClearWobble::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearWobble::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearWobble::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearWobble::ExecuteFromCallContext(ActionClearWobble *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeInstanceD::FUN_00179910((InstanceNodeInstanceD *)(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

