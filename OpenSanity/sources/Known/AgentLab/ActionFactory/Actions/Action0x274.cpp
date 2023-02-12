#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x274.h"

void Action0x274::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x274::ExecuteFromCallContext(Action0x274 *this){
		float fVar1;
		InstanceNodeAbstract *pIVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		InstanceNodeAbstract *pIVar5;
		float fVar6;
		uVar3 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar3 == 6) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar3];
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = *(InstanceContext **)&pIVar4->parent;
		}
		}
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar4->field27_0xe0 + 1),Camera);
		if (pIVar5 != (InstanceNodeAbstract *)0x0) {
		uVar3 = this->unlabelled12 & 7;
		if (uVar3 == 0) {
		pIVar2 = (InstanceNodeAbstract *)this->unlabelled16;
		*(uint *)&pIVar5[0x43].field2_0x8 = *(uint *)&pIVar5[0x43].field2_0x8 | 0x1000;
		pIVar5[0x47].field5_0x10 = pIVar2;
		}
		else if (uVar3 == 1) {
		fVar1 = (float)this->unlabelled16;
		fVar6 = FLOAT_003863a8 / FLOAT_0039d7e8;
		*(uint *)&pIVar5[0x43].field2_0x8 = *(uint *)&pIVar5[0x43].field2_0x8 | 0x8000;
		pIVar5[0x48].vtable = (InstanceNodeAbstract_VTable *)(int)(fVar6 * fVar1);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x274::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x274::Dispose(Action0x274 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x274::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x274 * __fastcall Action0x274::Construct(Action0x274 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x274;
		this->unlabelled12 = uVar1 & 0xfffffff8;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x274::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x274::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

