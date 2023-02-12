#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C7.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C7::Dispose(Action0x0C7 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C7::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0C7::Construct(Action0x0C7 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C7;
		*(undefined *)&this->unlabelled28 = 0;
		return;
		}
		
	*/
	return;
}

int Action0x0C7::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C7::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void Action0x0C7::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C7::UnkMethod(Action0x0C7 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == -1) {
		*(undefined *)((int)&this->unlabelled12 + (uint)*(byte *)&this->unlabelled28) =*(undefined *)(psVar2 + 2);
		*(char *)&this->unlabelled28 = *(char *)&this->unlabelled28 + '\x01';
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0C7::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C7::ExecuteFromCallContext(Action0x0C7 *this,undefined4 time_clock,InstanceContext *ctx){
		byte bVar1;
		uint uVar2;
		InstanceNodeObjectLink *pIVar3;
		uint uVar3;
		byte bVar4;
		byte bVar5;
		int *piVar6;
		pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (pIVar3 != (InstanceNodeObjectLink *)0x0) {
		uVar2 = pIVar3->field7_0x18;
		bVar1 = *(byte *)&this->unlabelled28;
		bVar5 = 0xff;
		bVar4 = 0;
		if (bVar1 != 0) {
		piVar6 = &this->unlabelled12;
		do {
		if (*(char *)piVar6 == (byte)(((byte)(uVar2 >> 7) & 0x1f) + 1)) {
		bVar5 = bVar4;
		}
		bVar4 = bVar4 + 1;
		piVar6 = (int *)((int)piVar6 + 1);
		}
		 while (bVar4 < bVar1);
		if (bVar5 != 0xff) {
		bVar5 = bVar5 + 1;
		if (bVar5 == bVar1) {
		bVar5 = 0;
		}
		uVar3 = (uint)(byte)(*(char *)((int)&this->unlabelled12 + (uint)bVar5) - 1);
		if (uVar3 < (uVar2 & 0x1f)) {
		pIVar3->field7_0x18 = (uVar3 << 7 ^ uVar2) & 0xf80 ^ uVar2;
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

