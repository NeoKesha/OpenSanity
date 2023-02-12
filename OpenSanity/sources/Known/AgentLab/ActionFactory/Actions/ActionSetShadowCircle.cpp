#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetShadowCircle.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetShadowCircle::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetShadowCircle * __fastcall ActionSetShadowCircle::Construct(ActionSetShadowCircle *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetShadowCircle;
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		FUN_00180380(&this->unlabelled28,0);
		FUN_00180380(&this->unlabelled32,0);
		this->unlabelled12 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetShadowCircle::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetShadowCircle::Dispose(ActionSetShadowCircle *this,byte param_1){
		thunk_FUN_00056260(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetShadowCircle::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowCircle::Execute(ActionSetShadowCircle *this,InstanceContext *ctx){
		undefined uVar1;
		int iVar2;
		void *this_02;
		InstanceNodeShadow *pIVar2;
		void *pvVar3;
		UNV004 *this_01;
		UNV004 *pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		pIVar2 = (InstanceNodeShadow *)InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,Shadow);
		if (pIVar2 != (InstanceNodeShadow *)0x0) {
		iVar2 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		uVar1 = *(undefined *)((int)&this->unlabelled12 + 1);
		this_02 = (void *)pIVar2->array[this->unlabelled12 & 0xff]->field2_0x8;
		this_01 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (this_01 == (UNV004 *)0x0) {
		pUVar4 = (UNV004 *)0x0;
		}
		else {
		fVar5 = FUN_00180490(&this->unlabelled20,pvVar3);
		fVar6 = FUN_00180490(&this->unlabelled16,pvVar3);
		pUVar4 = UNV004::Construct(this_01,uVar1,*(undefined *)((int)&this->unlabelled12 + 2),fVar6,fVar5);
		}
		fVar6 = FUN_00180490(&this->unlabelled32,pvVar3);
		fVar7 = FUN_00180490(&this->unlabelled28,pvVar3);
		fVar5 = FUN_00180490(&this->unlabelled24,pvVar3);
		(pUVar4->vec).x = fVar5;
		fVar5 = FLOAT_0038639c;
		(pUVar4->vec).z = fVar6;
		(pUVar4->vec).y = fVar7;
		(pUVar4->vec).w = fVar5;
		FUN_00100600(this_02,(uint)pUVar4);
		}
		return;
		}
		
	*/
	return;
}

int ActionSetShadowCircle::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetShadowCircle::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

void ActionSetShadowCircle::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowCircle::UnkMethod(ActionSetShadowCircle *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		undefined4 uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0xce) {
		switch(uVar1) {
		case 0x29:FUN_00180840(this_00,(US002 *)&this->unlabelled24);
		break;
		case 0x2a:FUN_00180840(this_00,(US002 *)&this->unlabelled28);
		break;
		case 0x2b:FUN_00180840(this_00,(US002 *)&this->unlabelled32);
		break;
		case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:break;
		case 0x4f:*(undefined *)((int)&this->unlabelled12 + 2) = *(undefined *)(this_00 + 2);
		break;
		default:FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		this->unlabelled20 = this->unlabelled16;
		}
		}
		else if (uVar1 < 0x123) {
		if (uVar1 == 0x122) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0xe6) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (uVar1 == 0xe8) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		}
		}
		else if (uVar1 == 0xffff) {
		uVar3 = FUN_000ffd30(*(undefined4 *)(this_00 + 2));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetShadowCircle::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowCircle::ExecuteFromCallContext(ActionSetShadowCircle *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

