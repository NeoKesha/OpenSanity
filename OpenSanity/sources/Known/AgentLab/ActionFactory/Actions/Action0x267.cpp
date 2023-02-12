#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x267.h"

void Action0x267::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x267::Dispose(Action0x267 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x267::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x267 * __fastcall Action0x267::Construct(Action0x267 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x267;
		this->unlabelled12 = uVar1 | 1;
		return this;
		}
		
	*/
	return;
}

int Action0x267::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x267::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x267::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x267::UnkMethod(Action0x267 *this,int *param_1){
		char cVar1;
		short *psVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		if (*(int *)(psVar2 + 2) == 0) {
		uVar3 = this->unlabelled12 | 1;
		}
		else {
		if (*(int *)(psVar2 + 2) != 1) goto LAB_00045c74;
		uVar3 = this->unlabelled12 & 0xfffffffe;
		}
		this->unlabelled12 = uVar3;
		}
		LAB_00045c74:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x267::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x267::ExecuteFromCallContext(Action0x267 *this){
		Method8 *pMVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		pIVar3 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar3 = PTR_00496350->ctx;
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		pMVar1 = (pIVar4[1].vtable)->Method8;
		uVar2 = *(uint *)(pMVar1 + 0x1c);
		*(uint *)(pMVar1 + 0x1c) =uVar2 ^ ((uint)(byte)~*(byte *)&this->unlabelled12 << 0x19 ^ uVar2) & 0x2000000;
		return;
		}
		
	*/
	return;
}

