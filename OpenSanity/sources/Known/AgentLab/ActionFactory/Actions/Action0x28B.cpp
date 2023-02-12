#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x28B.h"

void Action0x28B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x28B::Dispose(Action0x28B *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x28B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x28B::Construct(Action0x28B *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x28B;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int Action0x28B::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x28B::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x28B::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x28B::ExecuteFromCallContext(Action0x28B *this){
		uint *puVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceNodeAbstract *pIVar4;
		if (this->unlabelled12 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[this->unlabelled12];
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		}
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Input);
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character);
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) && (pIVar4 != (InstanceNodeAbstract *)0x0)) {
		puVar1 = (uint *)(pIVar4[1].vtable[4].UpdateTime + 0x10);
		*puVar1 = *puVar1 & 0xfffffffb;
		}
		return;
		}
		
	*/
	return;
}

