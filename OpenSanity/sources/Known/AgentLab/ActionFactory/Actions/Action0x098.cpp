#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x098.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x098::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x098::Dispose(Action0x098 *this,byte param_1){
		thunk_FUN_00055570(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x098::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x098::ExecuteFromCallContext(Action0x098 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		int iVar3;
		char cVar4;
		void *pvVar5;
		float fVar6;
		pIVar1 = (ctx->parent).ctx;
		cVar4 = (*(pIVar1->parent).vtable[2].Method4)(pIVar1);
		if ((cVar4 != '\0') && (pIVar2 = (pIVar1->nodes).array[8], pIVar2 != (InstanceNodeAbstract *)0x0)){
		pIVar1 = (ctx->parent).ctx;
		iVar3 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar3 == 0) {
		pvVar5 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar5 = (void *)FUN_00017ba8(iVar3);
		}
		if ((*(byte *)&this->unlabelled24 & 1) != 0) {
		fVar6 = FUN_00180490(&this->unlabelled12,pvVar5);
		pIVar2[10].vtable =(InstanceNodeAbstract_VTable *)(int)((DAT_00496378 * FLOAT_003863a0 * (float)(int)pIVar2[10].vtable + fVar6) *FLOAT_003863a4);
		}
		if ((*(byte *)&this->unlabelled24 & 2) != 0) {
		fVar6 = FUN_00180490(&this->unlabelled16,pvVar5);
		pIVar2[10].ctx =(InstanceContext *)(int)((DAT_00496378 * FLOAT_003863a0 * (float)(int)pIVar2[10].ctx + fVar6) *FLOAT_003863a4);
		}
		if ((*(byte *)&this->unlabelled24 & 4) != 0) {
		fVar6 = FUN_00180490(&this->unlabelled20,pvVar5);
		*(int *)&pIVar2[10].field2_0x8 =(int)((DAT_00496378 * FLOAT_003863a0 * (float)*(int *)&pIVar2[10].field2_0x8 + fVar6) *FLOAT_003863a4);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x098::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x098 * __fastcall Action0x098::Construct(Action0x098 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x098;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = this->unlabelled24 & 0xfffffff8;
		return this;
		}
		
	*/
	return;
}

int Action0x098::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x098::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void Action0x098::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x098::UnkMethod(Action0x098 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *this_00;
		if (sVar1 == 0x26) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		uVar3 = this->unlabelled24 | 1;
		LAB_001977ad:this->unlabelled24 = uVar3;
		}
		else {
		if (sVar1 == 0x27) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		uVar3 = this->unlabelled24 | 2;
		goto LAB_001977ad;
		}
		if (sVar1 == 0x28) {
		this->unlabelled20 = this->unlabelled20 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		uVar3 = this->unlabelled24 | 4;
		goto LAB_001977ad;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

