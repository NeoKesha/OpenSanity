#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x236.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x236::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x236::Dispose(Action0x236 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x236::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x236::Construct(Action0x236 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x236;
		return;
		}
		
	*/
	return;
}

int Action0x236::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x236::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x236::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x236::ExecuteFromCallContext(Action0x236 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		char cVar2;
		if ((PTR_00496350 != (InstanceContextRefCounter *)0x0) &&(pIVar1 = PTR_00496350->ctx, pIVar1 != (InstanceContext *)0x0)) {
		this_00 = (ctx->parent).ctx;
		cVar2 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar2 != '\0') {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)pIVar1;
		}
		}
		return;
		}
		
	*/
	return;
}

