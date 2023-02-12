#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x276.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x276::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x276::Dispose(Action0x276 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x276::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x276 * __fastcall Action0x276::Construct(Action0x276 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x276;
		this->unlabelled12 = uVar1 & 0xffffff00;
		return this;
		}
		
	*/
	return;
}

int Action0x276::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x276::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x276::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x276::UnkMethod(Action0x276 *this,int *param_1){
		char cVar1;
		bool bVar2;
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
		case 0x220:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = this->unlabelled12 ^ ((bVar2 == false) + 1 ^ this->unlabelled12) & 3;
		break;
		case 0x221:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = (((bVar2 == false) + 1) * 4 ^ this->unlabelled12) & 0xc;
		goto LAB_0003f90b;
		case 0x222:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = this->unlabelled12 ^ (((bVar2 == false) + 1) * 0x10 ^ this->unlabelled12) & 0x30;
		break;
		case 0x223:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = (((bVar2 == false) + 1) * 0x40 ^ this->unlabelled12) & 0xc0;
		LAB_0003f90b:uVar4 = this->unlabelled12 ^ uVar4;
		break;
		default:goto switchD_0003f89a_caseD_4;
		}
		this->unlabelled12 = uVar4;
		switchD_0003f89a_caseD_4:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x276::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x276::Execute(Action0x276 *this,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		uint uVar3;
		InstanceNodeAbstract_VTable *pIVar4;
		pIVar1 = InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,Physics);
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		uVar3 = this->unlabelled12;
		pIVar4 = pIVar1[0x22].vtable;
		if ((uVar3 & 3) == 1) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 | 0x2000);
		}
		else if ((uVar3 & 3) == 2) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 & 0xffffdfff);
		}
		uVar2 = uVar3 >> 2 & 3;
		if (uVar2 == 1) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 | 0x8000);
		}
		else if (uVar2 == 2) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 & 0xffff7fff);
		}
		uVar2 = uVar3 >> 4 & 3;
		if (uVar2 == 1) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 | 0x10000);
		}
		else if (uVar2 == 2) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 & 0xfffeffff);
		}
		uVar3 = uVar3 >> 6 & 3;
		if (uVar3 == 1) {
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)pIVar4 | 0x1000);
		}
		else if (uVar3 == 2) {
		pIVar1[0x22].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar4 & 0xffffefff | 0x30);
		return;
		}
		pIVar1[0x22].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar4 | 0x30);
		}
		return;
		}
		
	*/
	return;
}

void Action0x276::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x276::ExecuteFromCallContext(Action0x276 *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

