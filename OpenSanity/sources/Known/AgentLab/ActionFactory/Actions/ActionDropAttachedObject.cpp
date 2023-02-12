#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDropAttachedObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDropAttachedObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDropAttachedObject::Dispose(ActionDropAttachedObject *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDropAttachedObject::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDropAttachedObject::ExecuteFromCallContext(ActionDropAttachedObject *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int *piVar1;
		InstanceContext *time;
		char cVar2;
		undefined uVar3;
		InstanceNodeAbstract *pIVar4;
		uint uVar5;
		InstanceContext *this_00;
		UnkFamily5AB *this_01;
		UnkFamily5AA *pUVar6;
		InstanceContextSmartPtr extraout_ECX;
		undefined extraout_DL;
		InstanceContext *unaff_EBX;
		InstanceContextSmartPtr IVar7;
		undefined4 uVar8;
		undefined *puVar9;
		undefined local_20 [28];
		time = (((ctx->parent).ctx)->parent).ctx;
		if (-1 < *(char *)&(time->parent).flags) {
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&time->nodes,ObjectLink);
		uVar5 = (uint)this->unlabelled16 >> 8 & 7;
		cVar2 = (char)this->unlabelled16;
		if (uVar5 == 0) {
		puVar9 = (undefined *)0x0;
		if (cVar2 != -1) {
		this_00 = (InstanceContext *)FUN_000fc140((int)pIVar4,*(char *)&this->unlabelled16,0,'\0');
		goto LAB_0016aafd;
		}
		}
		else {
		if (uVar5 == 0) {
		return;
		}
		if (3 < uVar5) {
		return;
		}
		if (cVar2 != -1) {
		this_00 = (InstanceContext *)FUN_000fc140((int)pIVar4,cVar2,local_20,'\0');
		goto LAB_0016aafd;
		}
		puVar9 = local_20;
		}
		this_00 = (InstanceContext *)FUN_000fc190((int)pIVar4,extraout_DL,puVar9);
		LAB_0016aafd:if (this_00 != (InstanceContext *)0x0) {
		if ((*(byte *)&pIVar4[1].vtable & 0x1f) == 0) {
		piVar1 = &(time->parent).flags;
		*piVar1 = *piVar1 & 0xffffff7f;
		}
		if ((this->unlabelled16 & 0x2000U) != 0) {
		piVar1 = &(this_00->parent).flags;
		*piVar1 = *piVar1 & 0xfffffeff;
		}
		piVar1 = &(this_00->parent).flags;
		*piVar1 = *piVar1 & 0xffffffbf;
		this_00->field27_0xe0 = 0;
		pIVar4 = InstanceDataList::GetNode(&this_00->nodes,Instance);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		if ((char)((uint)(this_00->parent).flags >> 8) < '\0') {
		(*pIVar4->vtable[2].Step)(pIVar4,(UnkTimePack *)time);
		}
		uVar5 = (uint)this->unlabelled16 >> 8 & 7;
		if (uVar5 == 1) {
		(*pIVar4->vtable[2].Method5)(pIVar4);
		}
		else if (uVar5 == 2) {
		(**(code **)(*(int *)pIVar4[5].time + 0xc))();
		}
		else if (uVar5 == 3) {
		cVar2 = (**(code **)(*(int *)pIVar4[5].time + 8))();
		if (cVar2 == '\0') {
		(*pIVar4->vtable[2].Method5)(pIVar4);
		}
		else {
		(**(code **)(*(int *)pIVar4[5].time + 0xc))();
		}
		}
		}
		if (*(short *)&this->unlabelled12 != -1) {
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		pUVar6 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar8 = 2;
		IVar7 = extraout_ECX;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffc4,unaff_EBX);
		pUVar6 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_01,*(undefined2 *)&this->unlabelled12,IVar7,uVar8);
		}
		if (pUVar6 == (UnkFamily5AA *)0x0) {
		InstanceContext::FUN_000fa200(this_00,0);
		return;
		}
		uVar3 = UnkFamily5SomeStruct::CreatePayload(&(pUVar6->parent).parent.someStruct,pUVar6,1);
		InstanceContext::FUN_000fa200(this_00,uVar3);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionDropAttachedObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDropAttachedObject * __fastcall ActionDropAttachedObject::Construct(ActionDropAttachedObject *this){
		uint uVar1;
		int iVar2;
		float fVar3;
		fVar3 = FLOAT_0038639c;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DropAttachedObject;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		this->unlabelled16 = uVar1 & 0xffffc0ff | 0xff;
		this->unlabelled44 = (int)fVar3;
		fVar3 = FLOAT_003863a8 / FLOAT_0039d7e8;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		iVar2 = (int)(fVar3 * 0.0);
		this->unlabelled48 = iVar2;
		this->unlabelled52 = iVar2;
		this->unlabelled56 = iVar2;
		return this;
		}
		
	*/
	return;
}

void ActionDropAttachedObject::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDropAttachedObject::UnkMethod(ActionDropAttachedObject *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0x12) {
		*(undefined *)&this->unlabelled16 = *(undefined *)(psVar3 + 2);
		}
		else if (sVar1 == 0x6d) {
		*(short *)&this->unlabelled12 = psVar3[2];
		}
		else if ((sVar1 == -1) && (*(char *)(psVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar3 + 2)) {
		case 0x35:this->unlabelled16 = this->unlabelled16 & 0xfffffaffU | 0x200;
		break;
		case 0x36:this->unlabelled16 = this->unlabelled16 & 0xfffff9ffU | 0x100;
		break;
		case 0x37:this->unlabelled16 = this->unlabelled16 & 0xfffffbffU | 0x300;
		break;
		case 0x4e:this->unlabelled16 = this->unlabelled16 | 0x2000;
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

int ActionDropAttachedObject::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDropAttachedObject::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

