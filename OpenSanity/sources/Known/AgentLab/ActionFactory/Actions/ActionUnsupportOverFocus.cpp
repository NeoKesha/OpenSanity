#include "headers/Known/AgentLab/ActionFactory/Actions/ActionUnsupportOverFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionUnsupportOverFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionUnsupportOverFocus::Dispose(ActionUnsupportOverFocus *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionUnsupportOverFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionUnsupportOverFocus::Construct(ActionUnsupportOverFocus *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_UnsupportOverFocus;
		return;
		}
		
	*/
	return;
}

int ActionUnsupportOverFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionUnsupportOverFocus::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionUnsupportOverFocus::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionUnsupportOverFocus::ExecuteFromCallContext(ActionUnsupportOverFocus *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(**(code **)(*(int *)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42 + 0x10))();
		return;
		}
		
	*/
	return;
}

