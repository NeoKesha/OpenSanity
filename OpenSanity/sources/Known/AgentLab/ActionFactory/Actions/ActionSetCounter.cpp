#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetCounter.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetCounter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetCounter::Dispose(ActionSetCounter *this,byte param_1){
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

void ActionSetCounter::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetCounter * __fastcall ActionSetCounter::Construct(ActionSetCounter *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetCounter;
		this->unlabelled12 = uVar1 & 0xf8ffffff | 0xffffff;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetCounter::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCounter::UnkMethod(ActionSetCounter *this,int *param_1){
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
		if (uVar1 < 0xf6) {
		if ((uVar1 == 0xf5) || (uVar1 == 0x6e)) {
		*(ushort *)&this->unlabelled12 = this_00[2];
		}
		else {
		if (uVar1 == 0xb2) goto LAB_0019155d;
		if (uVar1 == 0xc3) goto LAB_0019152c;
		}
		}
		else if (uVar1 == 0xf6) {
		LAB_0019155d:*(ushort *)&this->unlabelled12 = this_00[2];
		uVar3 = this->unlabelled12 | 0x1000000;
		LAB_0019156d:this->unlabelled12 = uVar3;
		}
		else if (uVar1 == 0x10f) {
		this->unlabelled12 = this->unlabelled12 | 0x2000000;
		LAB_0019152c:this->unlabelled16 = this->unlabelled16 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (uVar1 == 0xffff) {
		if (*(char *)(this_00 + 1) == '\x01') goto LAB_0019152c;
		if (*(int *)(this_00 + 2) == 0xe6) {
		uVar3 = this->unlabelled12 | 0x4000000;
		goto LAB_0019156d;
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

void ActionSetCounter::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCounter::ExecuteFromCallContext(ActionSetCounter *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContext *pIVar2;
		void *pvVar3;
		int iVar4;
		InstanceNodeObjectLink *pIVar5;
		InstanceNodeInstance *pIVar6;
		InstanceNodeInstance *pIVar7;
		InstanceContextRefCounter *pIVar8;
		uint uVar9;
		pIVar7 = (InstanceNodeInstance *)(ctx->parent).ctx;
		iVar4 = (((InstanceContext *)pIVar7)->parent).field14_0x20.field27_0x78;
		pIVar2 = (((InstanceNodeInstanceBody *)&(((InstanceContext *)pIVar7)->parent).ctx)->parent).ctx;
		if (iVar4 == 0) {
		pvVar3 = (void *)(((InstanceContext *)pIVar7)->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar4);
		}
		iVar4 = FUN_001804d0(&this->unlabelled16,pvVar3);
		if ((this->unlabelled12 & 0x2000000U) != 0) {
		iVar4 = FUN_000d4360(iVar4);
		}
		uVar9 = this->unlabelled12;
		if ((uVar9 & 0x1000000) == 0) {
		UnkFamily16A::FUN_001b1e80(PTR_DefaultRM,uVar9 & 0xffff,iVar4);
		}
		else {
		ctx._0_1_ = (undefined)iVar4;
		if ((uVar9 & 0x4000000) == 0) {
		bVar1 = *(byte *)((int)&this->unlabelled12 + 2);
		if (bVar1 != 0xff) {
		iVar4 = (*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar7)->parent).vtable)->InstanceMethod25)(pIVar7,(uint)bVar1);
		if (iVar4 != 0) {
		pIVar7 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)(iVar4 + 0xe4),Instance);
		}
		}
		*(undefined *)((this->unlabelled12 & 0xffffU) + 0x28 +(int)(((InstanceContext *)pIVar7)->parent).field14_0x20.matrix2.m42) = ctx._0_1_;
		return;
		}
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar2->nodes,ObjectLink);
		if ((pIVar5 != (InstanceNodeObjectLink *)0x0) && (uVar9 = 0, (pIVar5->field7_0x18 & 0x1f) != 0)){
		pIVar8 = &pIVar5->field9_0x20;
		do {
		if (pIVar8->ctx != (InstanceContext *)0x0) {
		pIVar6 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar8->ctx->nodes,Instance);
		*(undefined *)((this->unlabelled12 & 0xffffU) + 0x28 + (int)(pIVar6->body).field49_0x80) =ctx._0_1_;
		}
		uVar9 = uVar9 + 1;
		pIVar8 = (InstanceContextRefCounter *)&pIVar8->refCount;
		}
		 while (uVar9 < (pIVar5->field7_0x18 & 0x1f));
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

