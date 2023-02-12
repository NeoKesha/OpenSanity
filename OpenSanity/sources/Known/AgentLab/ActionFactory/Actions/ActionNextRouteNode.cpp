#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNextRouteNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNextRouteNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNextRouteNode::Dispose(ActionNextRouteNode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNextRouteNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNextRouteNode::Construct(ActionNextRouteNode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NextRouteNode;
		return;
		}
		
	*/
	return;
}

int ActionNextRouteNode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNextRouteNode::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionNextRouteNode::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNextRouteNode::ExecuteFromCallContext(ActionNextRouteNode *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		FUN_001864c0((int)(((ctx->parent).ctx)->nodes).array[0xf]);
		return;
		}
		
	*/
	return;
}

