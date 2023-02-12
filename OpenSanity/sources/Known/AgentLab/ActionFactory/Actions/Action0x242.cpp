#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x242.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x242::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x242::ExecuteFromCallContext(Action0x242 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract_VTable *pIVar4;
		InstanceTransform *pIVar5;
		uint uVar6;
		InstanceNodeAbstract *pIVar7;
		int iVar8;
		InstanceContext *pIVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		GetIndex *local_20;
		Method5 *local_1c;
		UpdateTime *local_18;
		Step *local_14;
		uVar6 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar6 == 6) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar6];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar9 = pIVar2->ctx;
		}
		}
		pIVar3 = (((ctx->parent).ctx)->parent).ctx;
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar7 = InstanceDataList::GetNode(&pIVar9->nodes,Character);
		pIVar4 = pIVar7[1].vtable;
		if ((int *)pIVar4[4].UpdateTime == (int *)0x0) {
		local_20 = pIVar4[2].GetIndex;
		local_1c = pIVar4[2].Method5;
		local_18 = pIVar4[2].UpdateTime;
		local_14 = pIVar4[2].Step;
		}
		else {
		(**(code **)(*(int *)pIVar4[4].UpdateTime + 0x20))(&local_20);
		}
		pIVar5 = (pIVar9->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar12 = (pIVar5->matrix).m44;
		fVar13 = (pIVar5->matrix).m43;
		fVar10 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar10;
		(pIVar5->position).z = fVar13;
		(pIVar5->position).w = fVar12;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar12 = (pIVar5->position).x;
		fVar13 = (pIVar5->position).z;
		pIVar5 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar5->matrix).m44;
		fVar11 = (pIVar5->matrix).m43;
		fVar1 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar1;
		(pIVar5->position).z = fVar11;
		(pIVar5->position).w = fVar10;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar12 = (pIVar5->position).x - fVar12;
		fVar13 = (pIVar5->position).z - fVar13;
		fVar10 = fVar13 * fVar13 + fVar12 * fVar12;
		if (fVar10 <= _DAT_0039d860) {
		fVar10 = 0.0;
		}
		else {
		fVar10 = FLOAT_0038639c / SQRT(fVar10);
		}
		uVar6 = this->unlabelled12;
		fVar12 = fVar12 * fVar10;
		fVar11 = fVar10 * 0.0;
		fVar13 = fVar13 * fVar10;
		if ((uVar6 & 0x20000) == 0) {
		fVar10 = fVar13 * FLOAT_0039efb4 - fVar11 * DAT_0039efb8;
		fVar13 = fVar12 * DAT_0039efb8 - fVar13 * DAT_0039efb0;
		fVar12 = fVar11 * DAT_0039efb0 - fVar12 * FLOAT_0039efb4;
		}
		else {
		fVar10 = fVar11 * DAT_0039efb8 - fVar13 * FLOAT_0039efb4;
		fVar13 = fVar13 * DAT_0039efb0 - fVar12 * DAT_0039efb8;
		fVar12 = fVar12 * FLOAT_0039efb4 - fVar11 * DAT_0039efb0;
		}
		fVar12 = fVar12 * (float)local_18 + fVar13 * (float)local_1c + fVar10 * (float)local_20;
		iVar8 = 0;
		if (fVar12 <= FLOAT_0038807c) {
		if (fVar12 < FLOAT_0038639c) {
		iVar8 = -1;
		}
		}
		else {
		iVar8 = 1;
		}
		if ((uVar6 & 0x10000) != 0) {
		fVar12 = (((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42;
		uVar6 = uVar6 & 0xffff;
		iVar8 = (uint)*(byte *)(uVar6 + 0x28 + (int)fVar12) + iVar8;
		if (0xff < iVar8) {
		*(undefined *)(uVar6 + 0x28 + (int)fVar12) = 0xff;
		return;
		}
		*(byte *)(uVar6 + 0x28 + (int)fVar12) = (iVar8 < 0) - 1U & (byte)iVar8;
		return;
		}
		UnkFamily16A::FUN_001b1ea0(PTR_DefaultRM,uVar6 & 0xffff,iVar8);
		}
		return;
		}
		
	*/
	return;
}

void Action0x242::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x242::Dispose(Action0x242 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x242::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x242 * __fastcall Action0x242::Construct(Action0x242 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x242;
		this->unlabelled12 = uVar1 & 0xfffcffff | 0xffff;
		return this;
		}
		
	*/
	return;
}

int Action0x242::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x242::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x242::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x242::UnkMethod(Action0x242 *this,int *param_1){
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
		if (sVar1 == 0x6e) {
		*(short *)&this->unlabelled12 = psVar3[2];
		}
		else if (sVar1 == 0xb2) {
		*(short *)&this->unlabelled12 = psVar3[2];
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		}
		else if (sVar1 == -1) {
		if (*(int *)(psVar3 + 2) == 0xa3) {
		this->unlabelled12 = this->unlabelled12 | 0x20000;
		}
		else if (*(int *)(psVar3 + 2) == 0xa4) {
		this->unlabelled12 = this->unlabelled12 & 0xfffdffff;
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

