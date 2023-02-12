#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetProjectile.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetProjectile::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetProjectile::Dispose(ActionSetProjectile *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetProjectile::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetProjectile::Execute(ActionSetProjectile *this,InstanceContext *ctx){
		float fVar1;
		int iVar2;
		uint uVar3;
		void *pvVar4;
		float fVar5;
		uVar3 = (*(ctx->parent).vtable[4].Method4)(ctx);
		fVar1 = Float9Array[uVar3 & 0xff];
		*(int *)((int)fVar1 + 4) = this->unlabelled16;
		if ((*(byte *)&this->unlabelled12 & 0x20) != 0) {
		iVar2 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar4 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar2);
		}
		fVar5 = FUN_00180490(&this->unlabelled32,pvVar4);
		*(float *)((int)fVar1 + 0x18) = fVar5;
		*(uint *)((int)fVar1 + 0x1c) = *(uint *)((int)fVar1 + 0x1c) | 0x40;
		}
		if ((*(byte *)&this->unlabelled12 & 0x10) != 0) {
		iVar2 = this->unlabelled24;
		*(int *)((int)fVar1 + 0x10) = this->unlabelled20;
		*(int *)((int)fVar1 + 0x14) = iVar2;
		*(uint *)((int)fVar1 + 0x1c) = *(uint *)((int)fVar1 + 0x1c) | 0x100;
		}
		if ((*(byte *)&this->unlabelled12 & 0x40) != 0) {
		*(int *)((int)fVar1 + 0xc) = this->unlabelled28;
		*(uint *)((int)fVar1 + 0x1c) = *(uint *)((int)fVar1 + 0x1c) | 0x80;
		}
		if ((*(byte *)&this->unlabelled12 & 0x80) != 0) {
		*(uint *)((int)fVar1 + 0x1c) = *(uint *)((int)fVar1 + 0x1c) | 0x200;
		}
		return;
		}
		
	*/
	return;
}

void ActionSetProjectile::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetProjectile * __fastcall ActionSetProjectile::Construct(ActionSetProjectile *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		this->unlabelled16 = (int)FLOAT_00387520;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetProjectile;
		this->unlabelled12 = uVar1 & 0xffffff01 | 1;
		this->unlabelled20 = 0;
		this->unlabelled24 = (int)fVar2;
		this->unlabelled28 = 0;
		FUN_00180380(&this->unlabelled32,0);
		return this;
		}
		
	*/
	return;
}

int ActionSetProjectile::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetProjectile::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

void ActionSetProjectile::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetProjectile::UnkMethod(ActionSetProjectile *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
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
		if (uVar1 < 0x91) {
		if (uVar1 == 0x90) {
		this->unlabelled24 = *(int *)(this_00 + 2);
		goto LAB_0005d85e;
		}
		if (uVar1 == 0x6a) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled32);
		uVar3 = this->unlabelled12 | 0x20;
		}
		else if (uVar1 == 0x78) {
		this->unlabelled20 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled12 | 0x10;
		}
		else {
		if (uVar1 != 0x7a) goto LAB_0005d85e;
		this->unlabelled28 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled12 | 0x40;
		}
		LAB_0005d85b:this->unlabelled12 = uVar3;
		}
		else {
		if (uVar1 == 0x204) {
		uVar3 = this->unlabelled12 ^ (*(uint *)(this_00 + 2) ^ this->unlabelled12) & 0xf;
		goto LAB_0005d85b;
		}
		if (uVar1 == 0x227) {
		this->unlabelled16 = *(int *)(this_00 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(int *)(this_00 + 2) == 0x82)) {
		uVar3 = this->unlabelled12 | 0x80;
		goto LAB_0005d85b;
		}
		}
		LAB_0005d85e:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionSetProjectile::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetProjectile::ExecuteFromCallContext(ActionSetProjectile *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

