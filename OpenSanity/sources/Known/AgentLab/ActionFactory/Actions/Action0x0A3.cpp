#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A3.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A3::Dispose(Action0x0A3 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0A3::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A3 * __fastcall Action0x0A3::Construct(Action0x0A3 *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A3;
		*(undefined *)&this->unlabelled12 = 0xff;
		this->unlabelled16 = uVar1 & 0xfffffff0;
		return this;
		}
		
	*/
	return;
}

void Action0x0A3::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A3::UnkMethod(Action0x0A3 *this,int *param_1){
		int iVar1;
		char cVar2;
		short *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar3;
		if (*this_00 == 0x72) {
		*(char *)&this->unlabelled12 = *(char *)(this_00 + 2) + -1;
		uVar3 = this->unlabelled16 | 2;
		LAB_0019078c:this->unlabelled16 = uVar3;
		}
		else if ((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) {
		iVar1 = *(int *)(this_00 + 2);
		if (iVar1 == 0x3e) {
		uVar3 = this->unlabelled16 | 1;
		}
		else if (iVar1 == 0x60) {
		uVar3 = this->unlabelled16 | 8;
		}
		else {
		if (iVar1 != 0xa5) goto LAB_0019078f;
		uVar3 = this->unlabelled16 | 4;
		}
		goto LAB_0019078c;
		}
		LAB_0019078f:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x0A3::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A3::ExecuteFromCallContext(Action0x0A3 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *pIVar2;
		InstanceNodeObjectLink *pIVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceNodeAbstract_VTable *pIVar5;
		uint uVar6;
		InstanceContext *iVar7;
		pIVar2 = (ctx->parent).ctx;
		pIVar1 = (pIVar2->parent).ctx;
		if ((*(byte *)&this->unlabelled12 == 0xff) || ((*(byte *)&this->unlabelled16 & 2) != 0)) {
		pIVar4 = InstanceDataList::GetNode(&pIVar1->nodes,ObjectLink);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		uVar6 = this->unlabelled16;
		if ((uVar6 & 1) == 0) {
		if ((uVar6 & 4) == 0) {
		if ((uVar6 & 2) == 0) {
		return;
		}
		iVar7 = *(InstanceContext **)(&pIVar4[1].field2_0x8 + (uint)*(byte *)&this->unlabelled12 * 2);
		}
		else {
		iVar7 = *(InstanceContext **)(&pIVar4[1].field2_0x8 + ((uint)pIVar4[1].vtable >> 7 & 0x1f) * 2);
		}
		if ((iVar7 != (InstanceContext *)0x0) &&(pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&iVar7->nodes,ObjectLink),pIVar3 != (InstanceNodeObjectLink *)0x0)) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar3,(undefined4 *)pIVar1,0,'\x01',(byte)((uint)this->unlabelled16 >> 3) & 1);
		}
		}
		else if (((uint)pIVar4[1].vtable & 0x1f) != 0) {
		pIVar5 = (InstanceNodeAbstract_VTable *)((uint)pIVar4[1].vtable & 0xfffff07f);
		while( true ) {
		pIVar4[1].vtable = pIVar5;
		if ((*(int *)(&pIVar4[1].field2_0x8 + ((uint)pIVar5 >> 7 & 0x1f) * 2) != 0) &&(pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(&pIVar4[1].field2_0x8 + ((uint)pIVar5 >> 7 & 0x1f) * 2)+ 0xe4),ObjectLink), pIVar3 != (InstanceNodeObjectLink *)0x0)) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar3,(undefined4 *)pIVar1,0,'\x01',(byte)((uint)this->unlabelled16 >> 3) & 1);
		}
		pIVar5 = pIVar4[1].vtable;
		uVar6 = (uint)pIVar5 >> 7 & 0x1f;
		if (uVar6 == ((uint)pIVar5 & 0x1f) - 1) break;
		pIVar5 = (InstanceNodeAbstract_VTable *)(((uVar6 + 1) * 0x80 ^ (uint)pIVar5) & 0xf80 ^ (uint)pIVar5);
		}
		}
		}
		}
		else {
		pIVar2 = (*(pIVar2->parent).vtable[7].Dispose)(pIVar2,*(byte *)&this->unlabelled12);
		if ((pIVar2 != (InstanceContext *)0x0) &&(pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar2->nodes,ObjectLink),pIVar3 != (InstanceNodeObjectLink *)0x0)) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar3,(undefined4 *)pIVar1,0,'\x01',(byte)((uint)this->unlabelled16 >> 3) & 1);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

int Action0x0A3::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A3::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

