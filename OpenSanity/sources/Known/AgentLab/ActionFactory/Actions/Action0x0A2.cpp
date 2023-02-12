#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A2.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A2::Dispose(Action0x0A2 *this,byte param_1){
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

void Action0x0A2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A2 * __fastcall Action0x0A2::Construct(Action0x0A2 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A2;
		this->unlabelled12 = uVar1 | 0xff;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x0A2::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A2::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0A2::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A2::UnkMethod(Action0x0A2 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
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
		if (sVar1 == 0xc3) {
		LAB_00191869:this->unlabelled16 = this->unlabelled16 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (sVar1 == 0xf4) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		else if ((sVar1 == -1) && (*(char *)(this_00 + 1) == '\x01')) goto LAB_00191869;
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x0A2::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A2::ExecuteFromCallContext(Action0x0A2 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		InstanceContext *pIVar3;
		ushort *puVar4;
		void *pvVar5;
		int iVar6;
		InstanceNodeInstance *pIVar7;
		uint uVar7;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar2 & 1) != 0) &&(pIVar3 = (pIVar1->parent).field14_0x20.field4_0x10, pIVar3 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar3->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		return;
		}
		iVar6 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar6 == 0) {
		pvVar5 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar5 = (void *)FUN_00017ba8(iVar6);
		}
		iVar6 = FUN_001804d0(&this->unlabelled16,pvVar5);
		pIVar7 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar3->nodes,Instance);
		puVar4 = (pIVar7->body).field49_0x80;
		uVar7 = this->unlabelled12 & 0xff;
		iVar6 = (uint)*(byte *)(uVar7 + 0x28 + (int)puVar4) + iVar6;
		if (0xff < iVar6) {
		*(undefined *)(uVar7 + 0x28 + (int)puVar4) = 0xff;
		return;
		}
		*(byte *)(uVar7 + 0x28 + (int)puVar4) = (iVar6 < 0) - 1U & (byte)iVar6;
		}
		return;
		}
		
	*/
	return;
}

