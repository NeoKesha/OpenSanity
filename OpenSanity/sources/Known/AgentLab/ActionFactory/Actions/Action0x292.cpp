#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x292.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x292::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x292 * __fastcall Action0x292::Construct(Action0x292 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x292;
		FUN_00180380(&this->unlabelled12,0);
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		FUN_00180380(&this->unlabelled28,0);
		FUN_00180380(&this->unlabelled32,0);
		FUN_00180380(&this->unlabelled36,0);
		return this;
		}
		
	*/
	return;
}

void Action0x292::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x292::ExecuteFromCallContext(Action0x292 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		float fVar3;
		void *pvVar4;
		InstanceNodeAbstract *pIVar5;
		float fVar6;
		InputStruct *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		InstanceNodeInput *pIVar2;
		pIVar1 = (ctx->parent).ctx;
		pIVar2 = (InstanceNodeInput *)(pIVar1->nodes).array[0xb];
		if ((pIVar2 != (InstanceNodeInput *)0x0) && (*(char *)&(pIVar2->parent).ctx == '\x02')) {
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar4 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar2);
		}
		pIVar5 = (InstanceNodeAbstract *)FUN_00180490(&this->unlabelled12,pvVar4);
		fVar6 = FUN_00180490(&this->unlabelled16,pvVar4);
		pIVar7 = (InputStruct *)FUN_00180490(&this->unlabelled20,pvVar4);
		fVar8 = FUN_00180490(&this->unlabelled24,pvVar4);
		fVar9 = FUN_00180490(&this->unlabelled28,pvVar4);
		fVar10 = FUN_00180490(&this->unlabelled32,pvVar4);
		fVar11 = FUN_00180490(&this->unlabelled36,pvVar4);
		fVar3 = FLOAT_0038639c;
		(pIVar2->parent).field5_0x10 = pIVar5;
		(pIVar2->parent).field6_0x14 = (uint)fVar6;
		pIVar2->input = pIVar7;
		*(float *)&pIVar2->field_0x1c = fVar3;
		pIVar2->field18_0x2c = (int)fVar11;
		*(float *)&pIVar2->field_0x20 = fVar8;
		*(float *)&pIVar2->field_0x24 = fVar9;
		*(float *)&pIVar2->field_0x28 = fVar10;
		}
		return;
		}
		
	*/
	return;
}

void Action0x292::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x292::Dispose(Action0x292 *this,byte param_1){
		thunk_FUN_00057a80(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int Action0x292::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x292::GetSize(void){
		return 0x28;
		}
		
	*/
	return 0;
}

void Action0x292::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x292::UnkMethod(Action0x292 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		US002 *other;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x19) {
		if (uVar1 == 0x18) {
		other = (US002 *)&this->unlabelled24;
		}
		else if (uVar1 == 0) {
		other = (US002 *)&this->unlabelled12;
		}
		else if (uVar1 == 1) {
		other = (US002 *)&this->unlabelled16;
		}
		else {
		if (uVar1 != 2) goto LAB_00045332;
		other = (US002 *)&this->unlabelled20;
		}
		LAB_00045322:other->field0_0x0 = other->field0_0x0 & 0xfffffffdU | 4;
		FUN_00180840(this_00,other);
		}
		else {
		if (uVar1 == 0x78) {
		other = (US002 *)&this->unlabelled28;
		goto LAB_00045322;
		}
		if (uVar1 == 0x13d) {
		other = (US002 *)&this->unlabelled32;
		goto LAB_00045322;
		}
		if (uVar1 == 0x13e) {
		other = (US002 *)&this->unlabelled36;
		goto LAB_00045322;
		}
		}
		LAB_00045332:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

