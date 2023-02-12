#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x25F.h"

void Action0x25F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x25F::Dispose(Action0x25F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x25F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x25F::Construct(Action0x25F *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25F;
		return;
		}
		
	*/
	return;
}

int Action0x25F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x25F::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x25F::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x25F::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void Action0x25F::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x25F::ExecuteFromCallContext(Action0x25F *this){
		InstanceContextRefCounter *pIVar1;
		uint uVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceContext *pIVar4;
		InstanceContext **this_00;
		InstanceContext *pIVar5;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = pIVar1->ctx;
		}
		}
		pIVar3 = InstanceDataList::GetNode(&pIVar5->nodes,Camera);
		pIVar4 = pIVar3[0x12].ctx;
		this_00 = &pIVar3[0x12].ctx;
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = (InstanceContext *)(pIVar4->parent).vtable;
		}
		if (pIVar4 != pIVar5) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		if (pIVar5 == (InstanceContext *)0x0) {
		*this_00 = (InstanceContext *)0x0;
		return;
		}
		pIVar5 = (InstanceContext *)InstanceContextSmartPtr::CreateRef(&pIVar5->smartPtr,pIVar5,0);
		*this_00 = pIVar5;
		}
		return;
		}
		
	*/
	return;
}

