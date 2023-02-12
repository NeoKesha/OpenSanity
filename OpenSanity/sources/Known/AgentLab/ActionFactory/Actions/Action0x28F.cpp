#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x28F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x28F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x28F::Dispose(Action0x28F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x28F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x28F * __fastcall Action0x28F::Construct(Action0x28F *this){
		uint uVar1;
		uVar1 = this->argIdCount;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x28F;
		this->argIdCount = uVar1 & 0xfffffff0;
		return this;
		}
		
	*/
	return;
}

int Action0x28F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x28F::GetSize(void){
		return 0x28;
		}
		
	*/
	return 0;
}

void Action0x28F::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x28F::UnkMethod(Action0x28F *this,int *param_1){
		uint uVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar3 == 0x15) {
		*(short *)((int)&this->argListStart + (this->argIdCount & 0xfU) * 2) = psVar3[2];
		uVar1 = this->argIdCount;
		this->argIdCount = (uVar1 + 1 ^ uVar1) & 0xf ^ uVar1;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x28F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x28F::ExecuteFromCallContext(Action0x28F *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		uint uVar2;
		int *piVar3;
		InstanceNodeInput *pIVar1;
		pIVar1 = (InstanceNodeInput *)(((ctx->parent).ctx)->nodes).array[0xb];
		if ((pIVar1 != (InstanceNodeInput *)0x0) && (*(char *)&(pIVar1->parent).ctx == '\x01')) {
		uVar2 = 0;
		if ((this->argIdCount & 0xfU) != 0) {
		piVar3 = &this->argListStart;
		do {
		*(undefined2 *)((int)&(pIVar1->parent).field5_0x10 + ((pIVar1->parent).time >> 10 & 0xf) * 2) =*(undefined2 *)piVar3;
		uVar1 = (pIVar1->parent).time;
		(pIVar1->parent).time = ((uVar1 & 0xfffffc00) + 0x400 ^ uVar1) & 0x3c00 ^ uVar1;
		uVar2 = uVar2 + 1;
		piVar3 = (int *)((int)piVar3 + 2);
		}
		 while (uVar2 < (this->argIdCount & 0xfU));
		}
		thunk_FUN_00038eb0((int)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

