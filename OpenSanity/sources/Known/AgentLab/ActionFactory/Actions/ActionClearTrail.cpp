#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearTrail.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearTrail::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearTrail::Dispose(ActionClearTrail *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearTrail::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearTrail::Execute(ActionClearTrail *this,InstanceContext *ctx){
		(*(ctx->parent).vtable[4].Method3)(ctx);
		return;
		}
		
	*/
	return;
}

void ActionClearTrail::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearTrail::ExecuteFromCallContext(ActionClearTrail *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		this_00 = (ctx->parent).ctx;
		(*(this_00->parent).vtable[4].Method3)(this_00);
		return;
		}
		
	*/
	return;
}

int ActionClearTrail::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearTrail::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearTrail::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearTrail::Construct(ActionClearTrail *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearTrail;
		return;
		}
		
	*/
	return;
}

