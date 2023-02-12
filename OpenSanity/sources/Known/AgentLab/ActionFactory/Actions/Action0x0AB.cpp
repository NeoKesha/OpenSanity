#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AB.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AB::Dispose(Action0x0AB *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0AB::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AB::ExecuteFromCallContext(Action0x0AB *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		int iVar1;
		ScriptAbstract *pSVar2;
		InstanceContext_VTable *pIVar3;
		float this_01;
		InstanceContext *pIVar4;
		InstanceNodeInstance *pIVar11;
		InstanceNodeObjectLink *pIVar10;
		InstanceNodeInstance *pIVar9;
		InstanceNodeObjectLink *pIVar7;
		InstanceNodeInstance *pIVar8;
		uint uVar5;
		uint local_4;
		this_00 = (ctx->parent).ctx;
		iVar1 = (this_00->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		this_01 = (this_00->parent).field14_0x20.matrix2.m33;
		}
		else {
		this_01 = (float)FUN_00015286(iVar1);
		}
		FUN_001a80c0((int)this_01,(undefined2 *)&local_4,this->unlabelled16 & 0xffff);
		if (((short)local_4 != -1) &&(pSVar2 = ((GameResources->parent).scripts)->elements[local_4 & 0x7fff],pSVar2 != (ScriptAbstract *)0x0)) {
		if (*(byte *)&this->unlabelled12 == 0xff) {
		if ((this->unlabelled16 & 0x20000U) == 0) {
		if (((*(short *)((int)&this->unlabelled12 + 2) != 0xff) &&(pIVar7 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((this_00->parent).ctx)->nodes,ObjectLink),pIVar7 != (InstanceNodeObjectLink *)0x0)) &&(uVar5 = 0, (pIVar7->field7_0x18 & 0x1f) != 0)) {
		ctx = (InstanceContext *)&pIVar7->field9_0x20;
		do {
		pIVar3 = (ctx->parent).vtable;
		if ((pIVar3 != (InstanceContext_VTable *)0x0) &&(pIVar8 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)&pIVar3[0xb].Method2,Instance),*(ushort *)((int)&this->unlabelled12 + 2) ==((pIVar8->body).field49_0x80[0xb] & 0x7fff))) {
		if ((this->unlabelled16 & 0x40000U) != 0) {
		(pIVar8->body).field56_0x94 = this_00;
		}
		(*pIVar8->vtable->InstanceMethod7)(pIVar8,(uint)pSVar2,(uint)pIVar3,'\x01',*(byte *)((int)&this->unlabelled16 + 2) & 1);
		}
		ctx = (InstanceContext *)&(ctx->parent).ctx;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < (pIVar7->field7_0x18 & 0x1f));
		}
		}
		else {
		pIVar10 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((this_00->parent).ctx)->nodes,ObjectLink);
		if ((pIVar10 != (InstanceNodeObjectLink *)0x0) &&(uVar5 = 0, (pIVar10->field7_0x18 & 0x1f) != 0)) {
		ctx = (InstanceContext *)&pIVar10->field9_0x20;
		do {
		pIVar3 = (ctx->parent).vtable;
		if (pIVar3 != (InstanceContext_VTable *)0x0) {
		pIVar9 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)&pIVar3[0xb].Method2,Instance);
		if ((this->unlabelled16 & 0x40000U) != 0) {
		(pIVar9->body).field56_0x94 = this_00;
		}
		(*pIVar9->vtable->InstanceMethod7)(pIVar9,(uint)pSVar2,(uint)pIVar3,'\x01',*(byte *)((int)&this->unlabelled16 + 2) & 1);
		}
		ctx = (InstanceContext *)&(ctx->parent).ctx;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < (pIVar10->field7_0x18 & 0x1f));
		return;
		}
		}
		}
		else {
		pIVar4 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)&this->unlabelled12);
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar11 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar4->nodes,Instance);
		if ((this->unlabelled16 & 0x40000U) != 0) {
		(pIVar11->body).field56_0x94 = this_00;
		}
		(*pIVar11->vtable->InstanceMethod7)(pIVar11,(uint)pSVar2,(uint)pIVar4,'\x01',*(byte *)((int)&this->unlabelled16 + 2) & 1);
		return;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x0AB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0AB * __fastcall Action0x0AB::Construct(Action0x0AB *this){
		uint uVar1;
		*(undefined *)&this->unlabelled12 = 0xff;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0xff;
		*(undefined2 *)&this->unlabelled16 = 0;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AB;
		this->unlabelled16 = uVar1 & 0xfffcffff | 0x40000;
		return this;
		}
		
	*/
	return;
}

void Action0x0AB::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AB::UnkMethod(Action0x0AB *this,int *param_1){
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
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar3;
		uVar1 = *this_00;
		if (uVar1 < 0xcc) {
		if (uVar1 == 0xcb) {
		this->unlabelled16 =this->unlabelled16 ^ (*(int *)(this_00 + 2) << 0x10 ^ this->unlabelled16) & 0x10000U;
		}
		else if (uVar1 == 0x10) {
		*(ushort *)((int)&this->unlabelled12 + 2) = this_00[2];
		}
		else if (uVar1 == 0x70) {
		*(ushort *)&this->unlabelled16 = this_00[2];
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		if (*(int *)(this_00 + 2) == 0xe6) {
		uVar3 = this->unlabelled16 | 0x20000;
		}
		else {
		if (*(int *)(this_00 + 2) != 0xfb) goto LAB_00190871;
		uVar3 = this->unlabelled16 & 0xfffbffff;
		}
		this->unlabelled16 = uVar3;
		}
		LAB_00190871:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

int Action0x0AB::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AB::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

