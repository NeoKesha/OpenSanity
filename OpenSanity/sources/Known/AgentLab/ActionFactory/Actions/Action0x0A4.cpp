#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A4.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A4::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A4::Dispose(Action0x0A4 *this,byte param_1){
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

void Action0x0A4::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A4 * __fastcall Action0x0A4::Construct(Action0x0A4 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A4;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		this->unlabelled16 = this->unlabelled16 & 0xf0ffffffU | 0xffffff;
		this->unlabelled20 = 0;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		return this;
		}
		
	*/
	return;
}

void Action0x0A4::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A4::UnkMethod(Action0x0A4 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0xc4) {
		if (uVar1 == 0xc3) {
		this->unlabelled20 = this->unlabelled20 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		}
		else if (uVar1 == 0x10) {
		*(ushort *)&this->unlabelled12 = this_00[2];
		}
		else if (uVar1 == 0x72) {
		*(char *)((int)&this->unlabelled16 + 2) = *(char *)(this_00 + 2) + -1;
		}
		}
		else if (uVar1 == 0xf6) {
		*(ushort *)&this->unlabelled16 = this_00[2];
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x3d:this->unlabelled16 = this->unlabelled16 | 0x4000000;
		break;
		case 0x3e:this->unlabelled16 = this->unlabelled16 | 0x1000000;
		break;
		case 0xa5:this->unlabelled16 = this->unlabelled16 | 0x2000000;
		break;
		case 0xc4:this->unlabelled16 = this->unlabelled16 | 0x8000000;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0A4::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A4::ExecuteFromCallContext(Action0x0A4 *this,undefined4 time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContext *pIVar2;
		InstanceNodeObjectLink *pIVar3;
		void *pvVar3;
		int iVar4;
		uint uVar5;
		InstanceContextRefCounter *pIVar6;
		pIVar2 = (ctx->parent).ctx;
		pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar2->parent).ctx)->nodes,ObjectLink);
		if (pIVar3 != (InstanceNodeObjectLink *)0x0) {
		iVar4 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar4 == 0) {
		pvVar3 = (void *)(pIVar2->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar4);
		}
		iVar4 = FUN_001804d0(&this->unlabelled20,pvVar3);
		uVar5 = this->unlabelled16;
		if ((uVar5 & 0x1000000) == 0) {
		if ((uVar5 & 0x4000000) == 0) {
		if ((uVar5 & 0x8000000) == 0) {
		if ((uVar5 & 0x2000000) != 0) {
		*(byte *)((int)&this->unlabelled16 + 2) = (byte)(pIVar3->field7_0x18 >> 7) & 0x1f;
		}
		}
		else {
		*(byte *)((int)&this->unlabelled16 + 2) = (*(byte *)&pIVar3->field7_0x18 & 0x1f) - 1;
		}
		}
		else {
		*(undefined *)((int)&this->unlabelled16 + 2) = 0;
		}
		bVar1 = *(byte *)((int)&this->unlabelled16 + 2);
		if ((bVar1 != 0xff) &&(pIVar2 = (&(pIVar3->field9_0x20).ctx)[bVar1], pIVar2 != (InstanceContext *)0x0)) {
		FUN_001951b0(pIVar2,*(ushort *)&this->unlabelled16,iVar4,(short *)&this->unlabelled12);
		}
		}
		else if ((pIVar3->field7_0x18 & 0x1f) != 0) {
		pIVar6 = &pIVar3->field9_0x20;
		uVar5 = 0;
		do {
		if (pIVar6->ctx != (InstanceContext *)0x0) {
		FUN_001951b0(pIVar6->ctx,*(ushort *)&this->unlabelled16,iVar4,(short *)&this->unlabelled12);
		}
		uVar5 = uVar5 + 1;
		pIVar6 = (InstanceContextRefCounter *)&pIVar6->refCount;
		}
		 while (uVar5 < (pIVar3->field7_0x18 & 0x1f));
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

int Action0x0A4::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A4::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

