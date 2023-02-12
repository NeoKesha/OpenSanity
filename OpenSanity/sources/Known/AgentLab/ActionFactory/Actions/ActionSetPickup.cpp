#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetPickup.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetPickup::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPickup::Execute(ActionSetPickup *this,InstanceContext *ctx){
		float *pfVar1;
		uint uVar2;
		float fVar3;
		uVar2 = (*(ctx->parent).vtable[4].Method4)(ctx);
		pfVar1 = (float *)Float5Array[uVar2 & 0xff];
		fVar3 = (float)((uint)pfVar1[4] ^((uint)(((byte)this->unlabelled24 & 0x10) == 0x10) * 0x10 ^ (uint)pfVar1[4]) & 0x10);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 1) == 1) ^ (uint)fVar3) & 1 ^ (uint)fVar3);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 2) == 2) * 2 ^ (uint)fVar3) & 2 ^ (uint)fVar3);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 4) == 4) * 4 ^ (uint)fVar3) & 4 ^ (uint)fVar3);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 8) == 8) * 8 ^ (uint)fVar3) & 8 ^ (uint)fVar3);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 0x20) == 0x20) * 0x20 ^ (uint)fVar3) & 0x20 ^(uint)fVar3);
		pfVar1[4] = fVar3;
		pfVar1[4] = (float)((((uint)this->unlabelled24 >> 8 & 0xff) << 8 ^ (uint)fVar3) & 0x300 ^(uint)fVar3);
		fVar3 = (float)this->unlabelled12;
		*pfVar1 = fVar3;
		pfVar1[1] = fVar3 * fVar3;
		pfVar1[2] = (float)this->unlabelled16;
		pfVar1[3] = (float)this->unlabelled20;
		fVar3 = (float)((uint)pfVar1[4] ^((uint)((this->unlabelled24 & 0x400U) == 0x400) * 0x400 ^ (uint)pfVar1[4]) & 0x400);
		pfVar1[4] = fVar3;
		fVar3 = (float)(((uint)(((byte)this->unlabelled24 & 0x80) == 0x80) * 0x80 ^ (uint)fVar3) & 0x80 ^(uint)fVar3);
		pfVar1[4] = fVar3;
		pfVar1[4] = (float)(((uint)(((byte)this->unlabelled24 & 0x40) == 0x40) * 0x40 ^ (uint)fVar3) &0x40 ^ (uint)fVar3);
		return;
		}
		
	*/
	return;
}

void ActionSetPickup::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetPickup::Dispose(ActionSetPickup *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetPickup::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetPickup * __fastcall ActionSetPickup::Construct(ActionSetPickup *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled24;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetPickup;
		this->unlabelled12 = (int)fVar2;
		this->unlabelled16 = (int)fVar2;
		this->unlabelled20 = (int)fVar2;
		this->unlabelled24 = uVar1 & 0xfffff800;
		return this;
		}
		
	*/
	return;
}

void ActionSetPickup::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPickup::UnkMethod(ActionSetPickup *this,int *param_1){
		char cVar1;
		bool bVar2;
		undefined2 *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		puVar3 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*puVar3) {
		case 0x204:this->unlabelled24 =this->unlabelled24 ^ (*(int *)(puVar3 + 2) << 8 ^ this->unlabelled24) & 0x300U;
		break;
		case 0x21c:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 6 ^ this->unlabelled24) & 0x40;
		break;
		case 0x21d:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 7 ^ this->unlabelled24) & 0x80;
		break;
		case 0x21e:this->unlabelled12 = *(int *)(puVar3 + 2);
		this->unlabelled24 = this->unlabelled24 | 0x400;
		break;
		case 0x21f:this->unlabelled16 = *(int *)(puVar3 + 2);
		this->unlabelled24 = this->unlabelled24 | 0x400;
		break;
		case 0x220:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ (this->unlabelled24 ^ (uint)bVar2) & 1;
		break;
		case 0x221:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 * 2 ^ this->unlabelled24) & 2;
		break;
		case 0x222:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 2 ^ this->unlabelled24) & 4;
		break;
		case 0x223:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 * 8 ^ this->unlabelled24) & 8;
		break;
		case 0x225:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 4 ^ this->unlabelled24) & 0x10;
		break;
		case 0x226:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 4 ^ this->unlabelled24) & 0x10;
		case 0x224:bVar2 = FUN_0017efa0((int)puVar3);
		this->unlabelled24 = this->unlabelled24 ^ ((uint)bVar2 << 5 ^ this->unlabelled24) & 0x20;
		break;
		case 0x227:this->unlabelled20 = *(int *)(puVar3 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionSetPickup::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPickup::ExecuteFromCallContext(ActionSetPickup *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionSetPickup::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetPickup::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

