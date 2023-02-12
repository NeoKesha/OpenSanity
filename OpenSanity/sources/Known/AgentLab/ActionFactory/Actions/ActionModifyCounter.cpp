#include "headers/Known/AgentLab/ActionFactory/Actions/ActionModifyCounter.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionModifyCounter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionModifyCounter::Dispose(ActionModifyCounter *this,byte param_1){
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

void ActionModifyCounter::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionModifyCounter * __fastcall ActionModifyCounter::Construct(ActionModifyCounter *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ModifyCounter;
		this->unlabelled12 = uVar1 & 0xfcffffff | 0xffffff;
		this->unlabelled16 = 0;
		*(undefined2 *)&this->unlabelled20 = 0xffff;
		return this;
		}
		
	*/
	return;
}

int ActionModifyCounter::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionModifyCounter::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionModifyCounter::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionModifyCounter::UnkMethod(ActionModifyCounter *this,int *param_1){
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
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 2));
		*(char *)((int)&this->unlabelled12 + 2) = (char)uVar3;
		uVar1 = *this_00;
		if (uVar1 < 0xc4) {
		if (uVar1 == 0xc3) {
		LAB_0019163c:this->unlabelled16 = this->unlabelled16 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (uVar1 == 0x10) {
		*(ushort *)&this->unlabelled20 = this_00[2];
		}
		else {
		if (uVar1 == 0x6e) goto LAB_00191661;
		if (uVar1 == 0xb2) goto LAB_00191607;
		}
		}
		else if (uVar1 == 0xf5) {
		LAB_00191661:*(ushort *)&this->unlabelled12 = this_00[2];
		}
		else if (uVar1 == 0xf6) {
		LAB_00191607:*(ushort *)&this->unlabelled12 = this_00[2];
		this->unlabelled12 = this->unlabelled12 | 0x1000000;
		}
		else if (uVar1 == 0xffff) {
		if (*(char *)(this_00 + 1) == '\x01') goto LAB_0019163c;
		if (*(int *)(this_00 + 2) == 0xe6) {
		this->unlabelled12 = this->unlabelled12 | 0x2000000;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionModifyCounter::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionModifyCounter::ExecuteFromCallContext(ActionModifyCounter *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContext_VTable *pIVar2;
		uint uVar3;
		float fVar4;
		void *pvVar5;
		int iVar6;
		InstanceNodeObjectLink *pIVar7;
		InstanceNodeInstance *pIVar8;
		InstanceContext *iVar9;
		InstanceNodeInstance *pIVar9;
		ushort *this_00;
		uint uVar7;
		pIVar9 = (InstanceNodeInstance *)(ctx->parent).ctx;
		iVar6 = (((InstanceContext *)pIVar9)->parent).field14_0x20.field27_0x78;
		if (iVar6 == 0) {
		pvVar5 = (void *)(((InstanceContext *)pIVar9)->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar5 = (void *)FUN_00017ba8(iVar6);
		}
		iVar6 = FUN_001804d0(&this->unlabelled16,pvVar5);
		uVar7 = this->unlabelled12;
		if ((uVar7 & 0x1000000) == 0) {
		UnkFamily16A::FUN_001b1ea0(PTR_DefaultRM,uVar7 & 0xffff,iVar6);
		return;
		}
		if ((uVar7 & 0x2000000) == 0) {
		bVar1 = *(byte *)((int)&this->unlabelled12 + 2);
		if ((bVar1 != 0xff) &&(iVar9 = (InstanceContext *)(*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar9)->parent).vtable)->InstanceMethod25)(pIVar9,(uint)bVar1), iVar9 != (InstanceContext *)0x0)) {
		pIVar9 = (InstanceNodeInstance *)InstanceDataList::GetNode(&iVar9->nodes,Instance);
		}
		fVar4 = (((InstanceContext *)pIVar9)->parent).field14_0x20.matrix2.m42;
		uVar7 = this->unlabelled12 & 0xffff;
		iVar6 = (uint)*(byte *)(uVar7 + 0x28 + (int)fVar4) + iVar6;
		if (iVar6 < 0x100) {
		*(byte *)(uVar7 + 0x28 + (int)fVar4) = (iVar6 < 0) - 1U & (byte)iVar6;
		return;
		}
		*(undefined *)(uVar7 + 0x28 + (int)fVar4) = 0xff;
		return;
		}
		pIVar7 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((((InstanceNodeInstanceBody *)&(((InstanceContext *)pIVar9)->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if ((pIVar7 != (InstanceNodeObjectLink *)0x0) && (uVar7 = 0, (pIVar7->field7_0x18 & 0x1f) != 0)) {
		ctx = (InstanceContext *)&pIVar7->field9_0x20;
		do {
		pIVar2 = (ctx->parent).vtable;
		if (pIVar2 != (InstanceContext_VTable *)0x0) {
		pIVar8 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)&pIVar2[0xb].Method2,Instance);
		if (*(ushort *)&this->unlabelled20 == 0xffff) {
		if (pIVar8 != (InstanceNodeInstance *)0x0) {
		uVar3 = this->unlabelled12;
		this_00 = (pIVar8->body).field49_0x80;
		LAB_00191771:thunk_FUN_00029c50((int)this_00,uVar3 & 0xffff,iVar6);
		}
		}
		else if ((pIVar8 != (InstanceNodeInstance *)0x0) &&(this_00 = (pIVar8->body).field49_0x80,(this_00[0xb] & 0x7fff) == *(ushort *)&this->unlabelled20)) {
		uVar3 = this->unlabelled12;
		goto LAB_00191771;
		}
		}
		ctx = (InstanceContext *)&(ctx->parent).ctx;
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < (pIVar7->field7_0x18 & 0x1f));
		}
		return;
		}
		
	*/
	return;
}

