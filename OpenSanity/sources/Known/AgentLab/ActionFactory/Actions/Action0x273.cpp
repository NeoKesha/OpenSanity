#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x273.h"

void Action0x273::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x273::Dispose(Action0x273 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x273::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x273::Construct(Action0x273 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x273;
		return;
		}
		
	*/
	return;
}

int Action0x273::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x273::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x273::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x273::ExecuteFromCallContext(Action0x273 *this){
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
		*(undefined4 *)&pIVar3[0x43].field2_0x8 = 0x10;
		pIVar3[0x26].field5_0x10 = (InstanceNodeAbstract *)((uint)pIVar3[0x26].field5_0x10 & 0xfffff7ff);
		FUN_001cde90((int)&pIVar3[0x23].field2_0x8);
		*(undefined4 *)&pIVar3[0x1d].field2_0x8 = 0x10;
		pIVar3[0x12].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar3[0x12].vtable & 0xffefffff);
		FUN_001c8fd0((int)&pIVar3[0xc].field5_0x10);
		}
		return;
		}
		
	*/
	return;
}

