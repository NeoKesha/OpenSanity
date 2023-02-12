#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x25E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x25E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x25E::Dispose(Action0x25E *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x25E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x25E::Construct(Action0x25E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25E;
		return;
		}
		
	*/
	return;
}

int Action0x25E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x25E::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x25E::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x25E::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void Action0x25E::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x25E::ExecuteFromCallContext(Action0x25E *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *ctx_00;
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceContext **this_00;
		uVar1 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar1 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar1];
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		}
		ctx_00 = (((ctx->parent).ctx)->parent).ctx;
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Camera);
		pIVar2 = pIVar3[0x12].ctx;
		this_00 = &pIVar3[0x12].ctx;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = (InstanceContext *)(pIVar2->parent).vtable;
		}
		if (pIVar2 != ctx_00) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		if (ctx_00 == (InstanceContext *)0x0) {
		*this_00 = (InstanceContext *)0x0;
		return;
		}
		pIVar2 = (InstanceContext *)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		*this_00 = pIVar2;
		}
		return;
		}
		
	*/
	return;
}

