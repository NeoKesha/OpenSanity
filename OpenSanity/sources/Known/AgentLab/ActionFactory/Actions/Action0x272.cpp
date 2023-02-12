#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x272.h"

void Action0x272::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x272::Dispose(Action0x272 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x272::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x272::Construct(Action0x272 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x272;
		return;
		}
		
	*/
	return;
}

int Action0x272::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x272::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x272::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x272::ExecuteFromCallContext(Action0x272 *this){
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
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
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Camera);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pIVar3[0x26].field5_0x10 = (InstanceNodeAbstract *)((uint)pIVar3[0x26].field5_0x10 | 0x800);
		FUN_001cde90((int)&pIVar3[0x23].field2_0x8);
		pIVar3[0x12].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar3[0x12].vtable | 0x100000);
		FUN_001c8fd0((int)&pIVar3[0xc].field5_0x10);
		}
		return;
		}
		
	*/
	return;
}

