#include "headers/Known/AgentLab/ActionFactory/Actions/ActionThrowAttachedObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionThrowAttachedObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionThrowAttachedObject::Dispose(ActionThrowAttachedObject *this,byte param_1){
		::EmptyFunction();
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

void ActionThrowAttachedObject::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionThrowAttachedObject::UnkMethod(int this,int *param_2){
		ushort uVar1;
		bool bVar2;
		ushort *this_00;
		uint uVar3;
		int iVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		FUN_00181a50(param_2,(uint *)(this + 0x24));
		IteratorE2::Rewind(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		if (bVar2 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,*(uint *)(this + 0xc) >> 0x14 & 0xff);
		uVar3 = *(uint *)(this + 0xc) ^ (uVar3 << 0x14 ^ *(uint *)(this + 0xc)) & 0xff00000;
		*(uint *)(this + 0xc) = uVar3;
		iVar4 = FUN_00180820(this_00,uVar3 >> 8 & 0xf);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) ^ (iVar4 << 8 ^ *(uint *)(this + 0xc)) & 0xf00;
		FUN_0017f260(this_00,(uint *)(this + 0x10));
		uVar1 = *this_00;
		if (uVar1 < 0x59) {
		if (uVar1 == 0x58) {
		uVar3 = *(uint *)(this + 0xc);
		uVar5 = uVar3 | 0x10000000;
		*(uint *)(this + 0xc) = uVar5;
		if ((uVar3 & 0xff00000) != 0xff00000) {
		*(uint *)(this + 0xc) = ((uVar3 & 0xfff00000) + 0x100000 ^ uVar5) & 0xff00000 ^ uVar5;
		}
		}
		else if (uVar1 == 6) {
		*(uint *)(this + 0xc) =(uint)*(byte *)(this_00 + 2) << 0xc | *(uint *)(this + 0xc) & 0xfff00fff;
		}
		else if (uVar1 == 0x12) {
		*(undefined *)(this + 0xc) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x3c) {
		*(undefined4 *)(this + 0x28) = *(undefined4 *)(this_00 + 2);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x40000000;
		}
		}
		else if (uVar1 == 0x6a) {
		FUN_00180840(this_00,(US002 *)(this + 0x20));
		}
		else if (((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) &&(*(int *)(this_00 + 2) == 0x4e)) {
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x80000000;
		}
		IteratorE2::Iterate(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar2 == false);
		}
		fVar7 = *(float *)(this + 0x10);
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= FLOAT_003a35c8) {
		fVar7 = *(float *)(this + 0x14);
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= FLOAT_003a35c8) {
		fVar7 = *(float *)(this + 0x18);
		fVar6 = 0.0 - fVar7;
		if (0.0 <= fVar7) {
		fVar6 = fVar7;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		return;
		}
		}
		}
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x20000000;
		return;
		}
		
	*/
	return;
}

void ActionThrowAttachedObject::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionThrowAttachedObject::ExecuteFromCallContext(ActionThrowAttachedObject *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		uint *puVar1;
		InstanceContext *pIVar2;
		InstanceContext *pIVar3;
		int iVar4;
		uint uVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceNodeCharacter *this_00;
		void *pvVar7;
		int *piVar8;
		undefined extraout_DL;
		float fVar9;
		float fVar10;
		float fVar11;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
		pIVar2 = (ctx->parent).ctx;
		pIVar3 = (pIVar2->parent).ctx;
		if (*(char *)&(pIVar3->parent).flags < '\0') {
		pIVar6 = InstanceDataList::GetNode(&pIVar3->nodes,ObjectLink);
		if (*(char *)&this->unlabelled12 == -1) {
		this_00 = (InstanceNodeCharacter *)FUN_000fc190((int)pIVar6,extraout_DL,0);
		}
		else {
		this_00 = (InstanceNodeCharacter *)FUN_000fc140((int)pIVar6,*(char *)&this->unlabelled12,0,'\0');
		}
		if (this_00 != (InstanceNodeCharacter *)0x0) {
		piVar8 = &(pIVar3->parent).flags;
		*piVar8 = *piVar8 & 0xffffff7f;
		if (this->unlabelled12 < 0) {
		puVar1 = &(this_00->parent).field6_0x14;
		*puVar1 = *puVar1 & 0xfffffeff;
		}
		puVar1 = &(this_00->parent).field6_0x14;
		*puVar1 = *puVar1 & 0xffffffbf;
		this_00[8].parent.vtable = (InstanceNodeAbstract_VTable *)0x0;
		pIVar6 = InstanceDataList::GetNode((InstanceDataList *)&this_00[8].parent.ctx,Instance);
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		iVar4 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar4 == 0) {
		pvVar7 = (void *)(pIVar2->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar7 = (void *)FUN_00017ba8(iVar4);
		}
		fVar10 = FUN_00180490(&this->unlabelled32,pvVar7);
		local_40 = 0.0;
		local_3c = 0.0;
		local_38 = 0.0;
		local_34 = FLOAT_0038639c;
		if ((this->unlabelled12 & 0x20000000U) == 0) {
		piVar8 = (int *)0x0;
		}
		else {
		piVar8 = &this->unlabelled16;
		}
		uVar5 = this->unlabelled12;
		FUN_00176960(&local_40,uVar5 >> 8 & 0xf,(int)ctx,(float *)piVar8,(byte)(uVar5 >> 0x14),(byte)(uVar5 >> 0xc));
		if ((this->unlabelled12 & 0x40000000U) != 0) {
		FUN_0016d590(&local_40,(float)this->unlabelled40,1.0,1.0,1.0);
		}
		InstanceNodeCharacter::GetPosition(this_00,&local_20);
		local_28 = local_38 - local_20.z;
		local_2c = 0.0;
		local_24 = local_34;
		local_30 = local_40 - local_20.x;
		fVar9 = SQRT(local_28 * local_28 + local_30 * local_30);
		iVar4 = (pIVar2->parent).field14_0x20.field27_0x78;
		local_20.y = local_3c - local_20.y;
		if (iVar4 == 0) {
		pvVar7 = (void *)(pIVar2->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar7 = (void *)FUN_00017ba8(iVar4);
		}
		fVar11 = FUN_00180490(&this->unlabelled36,pvVar7);
		local_2c = fVar9 / fVar11;
		if (fVar10 < 0.0) {
		fVar10 = FLOAT_00393c7c;
		}
		fVar11 = fVar11 / fVar9;
		local_30 = fVar11 * local_30;
		local_28 = local_28 * fVar11;
		local_2c = (fVar10 * local_2c * local_2c * FLOAT_00386ab4 + local_20.y) / local_2c;
		(*pIVar6->vtable[2].Method5)(pIVar6);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionThrowAttachedObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionThrowAttachedObject * __fastcall ActionThrowAttachedObject::Construct(ActionThrowAttachedObject *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ThrowAttachedObject;
		this->unlabelled12 = 0xffff0ff;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		FUN_00180380(&this->unlabelled32,0xbf800000);
		FUN_00180380(&this->unlabelled36,0x3f800000);
		this->unlabelled40 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionThrowAttachedObject::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionThrowAttachedObject::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

