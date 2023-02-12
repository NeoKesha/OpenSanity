#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x24B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x24B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x24B::Dispose(Action0x24B *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x24B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x24B * __fastcall Action0x24B::Construct(Action0x24B *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x24B;
		this->unlabelled12 = uVar1 & 0xfffffc00;
		return this;
		}
		
	*/
	return;
}

int Action0x24B::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x24B::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x24B::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x24B::UnkMethod(Action0x24B *this,int *param_1){
		char cVar1;
		byte bVar2;
		undefined2 *puVar3;
		uint uVar4;
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
		case 0x23c:bVar2 = FUN_0017efb0((int)puVar3);
		this->unlabelled12 = this->unlabelled12 ^ (this->unlabelled12 ^ (uint)bVar2) & 3;
		break;
		case 0x23d:bVar2 = FUN_0017efb0((int)puVar3);
		this->unlabelled12 = this->unlabelled12 ^ ((uint)bVar2 * 4 ^ this->unlabelled12) & 0xc;
		break;
		case 0x23e:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 4 ^ this->unlabelled12) & 0x30;
		goto LAB_0003f80b;
		case 0x23f:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 10 ^ this->unlabelled12) & 0xc00;
		goto LAB_0003f80b;
		case 0x240:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 6 ^ this->unlabelled12) & 0xc0;
		LAB_0003f80b:this->unlabelled12 = this->unlabelled12 ^ uVar4;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x24B::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x24B::ExecuteFromCallContext(Action0x24B *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		uint uVar2;
		iVar1 = *(int *)((int)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42 + 0x20);
		uVar2 = this->unlabelled12 & 3;
		if (uVar2 == 1) {
		uVar2 = *(uint *)(iVar1 + 0x10) | 0x10000;
		LAB_00037bee:*(uint *)(iVar1 + 0x10) = uVar2;
		}
		else if (uVar2 == 2) {
		uVar2 = *(uint *)(iVar1 + 0x10) & 0xfffeffff;
		goto LAB_00037bee;
		}
		uVar2 = (uint)this->unlabelled12 >> 4 & 3;
		if (uVar2 == 1) {
		uVar2 = *(uint *)(iVar1 + 0x10) | 0x40000;
		}
		else {
		if (uVar2 != 2) goto LAB_00037c15;
		uVar2 = *(uint *)(iVar1 + 0x10) & 0xfffbffff;
		}
		*(uint *)(iVar1 + 0x10) = uVar2;
		LAB_00037c15:uVar2 = (uint)this->unlabelled12 >> 10 & 3;
		if (uVar2 == 1) {
		*(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0xe000;
		}
		else if (uVar2 == 2) {
		*(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffff1fff;
		return;
		}
		return;
		}
		
	*/
	return;
}

