#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowMoveBackwards.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowMoveBackwards::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowMoveBackwards::Dispose(ActionNowMoveBackwards *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNowMoveBackwards::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNowMoveBackwards::Construct(ActionNowMoveBackwards *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowMoveBackwards;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionNowMoveBackwards::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowMoveBackwards::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowMoveBackwards::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowMoveBackwards::UnkMethod(ActionNowMoveBackwards *this,int *param_1){
		FUN_00181a50(param_1,(uint *)&this->unlabelled12);
		return;
		}
		
	*/
	return;
}

void ActionNowMoveBackwards::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowMoveBackwards::ExecuteFromCallContext(ActionNowMoveBackwards *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeObjectLink *pIVar2;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		if (*(char *)&(pIVar1->parent).flags < '\0') {
		pIVar2 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar1->nodes,ObjectLink);
		if ((pIVar2 != (InstanceNodeObjectLink *)0x0) && (pIVar2->field67_0x70 != (UNV009 *)0x0)) {
		FUN_000f8350((int)pIVar2->field67_0x70);
		}
		}
		return;
		}
		
	*/
	return;
}

