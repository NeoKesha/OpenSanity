#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AA::Dispose(Action0x0AA *this,byte param_1){
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

void Action0x0AA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0AA * __fastcall Action0x0AA::Construct(Action0x0AA *this){
		this->unlabelled12 = this->unlabelled12 | 0xff;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AA;
		this->unlabelled16 = 0xff;
		this->unlabelled20 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x0AA::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AA::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x0AA::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AA::UnkMethod(Action0x0AA *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		bool bVar3;
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
		if (uVar1 < 0xf5) {
		if (uVar1 == 0xf4) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		else {
		if (uVar1 == 0xb2) {
		this->unlabelled16 = *(int *)(this_00 + 2);
		goto LAB_001919bc;
		}
		bVar3 = uVar1 == 0xc3;
		LAB_001919c0:if (bVar3) {
		this->unlabelled20 = this->unlabelled20 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		}
		}
		}
		else if (uVar1 == 0xffff) {
		LAB_001919bc:bVar3 = *(char *)(this_00 + 1) == '\x01';
		goto LAB_001919c0;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x0AA::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AA::ExecuteFromCallContext(Action0x0AA *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		InstanceContext *pIVar3;
		undefined uVar4;
		void *pvVar5;
		InstanceNodeInstance *pIVar7;
		int iVar6;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar2 & 1) != 0) &&(pIVar3 = (pIVar1->parent).field14_0x20.field4_0x10, pIVar3 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar3->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		return;
		}
		if (this->unlabelled16 == 0xff) {
		iVar6 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar6 == 0) {
		iVar6 = FUN_001804d0(&this->unlabelled20,(void *)(pIVar1->parent).field14_0x20.matrix2.m41);
		uVar4 = (undefined)iVar6;
		}
		else {
		pvVar5 = (void *)FUN_00017ba8(iVar6);
		iVar6 = FUN_001804d0(&this->unlabelled20,pvVar5);
		uVar4 = (undefined)iVar6;
		}
		}
		else {
		uVar4 = *(undefined *)((int)(pIVar1->parent).field14_0x20.matrix2.m42 + 0x28 + this->unlabelled16);
		}
		pIVar7 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar3->nodes,Instance);
		*(undefined *)((this->unlabelled12 & 0xffU) + 0x28 + (int)(pIVar7->body).field49_0x80) = uVar4;
		}
		return;
		}
		
	*/
	return;
}

