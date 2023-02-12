#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C8.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C8::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C8::Dispose(Action0x0C8 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C8::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x0C8::ExecuteFromCallContext(Action0x0C8 *this,undefined4 time_clock,InstanceContext *ctx){
		int *piVar1;
		InstanceContext *this_00;
		InstanceTransform *pIVar2;
		InstanceNodeObjectLink *pIVar4;
		uint uVar3;
		InstanceContext *pIVar5;
		uint uVar6;
		uint *puVar7;
		InstanceContext **ppIVar8;
		int iVar9;
		InstanceContext *pIVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float local_48;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float fStack28;
		float fStack24;
		this_00 = (ctx->parent).ctx;
		pIVar10 = (this_00->parent).ctx;
		pIVar4 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar10->nodes,ObjectLink);
		if (pIVar4 != (InstanceNodeObjectLink *)0x0) {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = PTR_00496350->ctx;
		}
		pIVar2 = (pIVar10->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar14 = (pIVar2->matrix).m44;
		fVar12 = (pIVar2->matrix).m43;
		fVar15 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar15;
		(pIVar2->position).z = fVar12;
		(pIVar2->position).w = fVar14;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar14 = (pIVar2->position).x;
		fVar12 = (pIVar2->position).y;
		fVar15 = (pIVar2->position).z;
		pIVar2 = (pIVar5->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar13 = (pIVar2->matrix).m44;
		fVar11 = (pIVar2->matrix).m43;
		fVar16 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar16;
		(pIVar2->position).z = fVar11;
		(pIVar2->position).w = fVar13;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_48 = (pIVar2->position).z;
		fVar13 = (pIVar2->position).x;
		fVar11 = (pIVar2->position).y;
		local_24 = (pIVar2->position).w;
		if ((this->unlabelled20 & 0x200000U) != 0) {
		(**(code **)(*(int *)(this_00->parent).field14_0x20.matrix2.m42 + 0x28))(&local_20);
		fVar16 = (float)this->unlabelled16;
		fVar11 = fStack28 * fVar16 + fVar11;
		local_48 = fStack24 * fVar16 + local_48;
		fVar13 = fVar13 + local_20 * fVar16;
		}
		local_30 = fVar13 - fVar14;
		local_2c = fVar11 - fVar12;
		local_28 = local_48 - fVar15;
		if ((this->unlabelled20 & 0x100000U) != 0) {
		FUN_000ebf10(&local_30,(float *)&DAT_0039efb0,(int)((float)this->unlabelled12 * FLOAT_003863a4),1);
		fVar13 = local_30 + fVar14;
		fVar11 = local_2c + fVar12;
		local_48 = local_28 + fVar15;
		}
		uVar6 = pIVar4->field7_0x18 & 0x1f;
		pIVar10 = (InstanceContext *)0x0;
		uVar3 = 0;
		fVar14 = FLOAT_00394244;
		if (3 < uVar6) {
		puVar7 = &(pIVar4->field9_0x20).refCount;
		iVar9 = (uVar6 - 4 >> 2) + 1;
		uVar3 = iVar9 * 4;
		do {
		pIVar5 = ((InstanceContextRefCounter *)(puVar7 + -1))->ctx;
		fVar16 = fVar11 - ((pIVar5->parent).field14_0x20.matrix2.m12 +((pIVar5->parent).field14_0x20.matrix2.m22 -(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4);
		fVar12 = local_48 -((pIVar5->parent).field14_0x20.matrix2.m13 +((pIVar5->parent).field14_0x20.matrix2.m23 -(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4);
		fVar15 = fVar13 - (((pIVar5->parent).field14_0x20.matrix2.m21 -(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar5->parent).field14_0x20.matrix2.m11);
		fVar12 = fVar12 * fVar12 + fVar16 * fVar16 + fVar15 * fVar15;
		if ((fVar12 < fVar14) &&(((*(byte *)((int)&this->unlabelled20 + 2) & 0x40) == 0 ||((*(byte *)((int)&(pIVar5->parent).flags + 1) & 1) == 0)))) {
		pIVar10 = pIVar5;
		fVar14 = fVar12;
		}
		pIVar5 = (InstanceContext *)*puVar7;
		fVar16 = fVar11 - ((pIVar5->parent).field14_0x20.matrix2.m12 +((pIVar5->parent).field14_0x20.matrix2.m22 -(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4);
		fVar12 = local_48 -((pIVar5->parent).field14_0x20.matrix2.m13 +((pIVar5->parent).field14_0x20.matrix2.m23 -(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4);
		fVar15 = fVar13 - (((pIVar5->parent).field14_0x20.matrix2.m21 -(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar5->parent).field14_0x20.matrix2.m11);
		fVar12 = fVar12 * fVar12 + fVar16 * fVar16 + fVar15 * fVar15;
		if ((fVar12 < fVar14) &&(((*(byte *)((int)&this->unlabelled20 + 2) & 0x40) == 0 ||((*(byte *)((int)&(pIVar5->parent).flags + 1) & 1) == 0)))) {
		pIVar10 = pIVar5;
		fVar14 = fVar12;
		}
		pIVar5 = (InstanceContext *)puVar7[1];
		fVar16 = fVar11 - ((pIVar5->parent).field14_0x20.matrix2.m12 +((pIVar5->parent).field14_0x20.matrix2.m22 -(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4);
		fVar12 = local_48 -((pIVar5->parent).field14_0x20.matrix2.m13 +((pIVar5->parent).field14_0x20.matrix2.m23 -(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4);
		fVar15 = fVar13 - (((pIVar5->parent).field14_0x20.matrix2.m21 -(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar5->parent).field14_0x20.matrix2.m11);
		fVar12 = fVar12 * fVar12 + fVar16 * fVar16 + fVar15 * fVar15;
		if ((fVar12 < fVar14) &&(((*(byte *)((int)&this->unlabelled20 + 2) & 0x40) == 0 ||((*(byte *)((int)&(pIVar5->parent).flags + 1) & 1) == 0)))) {
		pIVar10 = pIVar5;
		fVar14 = fVar12;
		}
		pIVar5 = (InstanceContext *)puVar7[2];
		fVar16 = fVar11 - ((pIVar5->parent).field14_0x20.matrix2.m12 +((pIVar5->parent).field14_0x20.matrix2.m22 -(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4);
		fVar12 = local_48 -((pIVar5->parent).field14_0x20.matrix2.m13 +((pIVar5->parent).field14_0x20.matrix2.m23 -(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4);
		fVar15 = fVar13 - (((pIVar5->parent).field14_0x20.matrix2.m21 -(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar5->parent).field14_0x20.matrix2.m11);
		fVar12 = fVar12 * fVar12 + fVar16 * fVar16 + fVar15 * fVar15;
		if ((fVar12 < fVar14) &&(((*(byte *)((int)&this->unlabelled20 + 2) & 0x40) == 0 ||((*(byte *)((int)&(pIVar5->parent).flags + 1) & 1) == 0)))) {
		pIVar10 = pIVar5;
		fVar14 = fVar12;
		}
		puVar7 = puVar7 + 4;
		iVar9 = iVar9 + -1;
		}
		 while (iVar9 != 0);
		}
		if (uVar3 < uVar6) {
		ppIVar8 = &(pIVar4->field9_0x20).ctx + uVar3;
		iVar9 = uVar6 - uVar3;
		do {
		pIVar5 = *ppIVar8;
		fVar16 = fVar11 - ((pIVar5->parent).field14_0x20.matrix2.m12 +((pIVar5->parent).field14_0x20.matrix2.m22 -(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4);
		fVar12 = local_48 -((pIVar5->parent).field14_0x20.matrix2.m13 +((pIVar5->parent).field14_0x20.matrix2.m23 -(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4);
		fVar15 = fVar13 - (((pIVar5->parent).field14_0x20.matrix2.m21 -(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar5->parent).field14_0x20.matrix2.m11);
		fVar12 = fVar12 * fVar12 + fVar16 * fVar16 + fVar15 * fVar15;
		if ((fVar12 < fVar14) &&(((this->unlabelled20 & 0x400000U) == 0 || (((pIVar5->parent).flags & 0x100U) == 0)))) {
		pIVar10 = pIVar5;
		fVar14 = fVar12;
		}
		ppIVar8 = ppIVar8 + 1;
		iVar9 = iVar9 + -1;
		}
		 while (iVar9 != 0);
		}
		(*(this_00->parent).vtable[7].Method3)(this_00);
		if ((this->unlabelled20 & 0x800000U) != 0) {
		piVar1 = &(pIVar10->parent).flags;
		*piVar1 = *piVar1 | 0x100;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x0C8::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0C8 * __thiscall Action0x0C8::Construct(Action0x0C8 *this,uint param_1){
		uint uVar1;
		uVar1 = this->unlabelled20;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C8;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = uVar1 & 0xff0ffff0 | param_1 & 0xf | 0xffff0;
		return this;
		}
		
	*/
	return;
}

int Action0x0C8::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C8::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x0C8::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C8::UnkMethod(Action0x0C8 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x12f) {
		if (uVar1 == 0x12e) {
		this->unlabelled20 = (uint)*(byte *)(puVar3 + 2) << 0xc | this->unlabelled20 & 0xfff00fffU;
		}
		else if (uVar1 == 4) {
		this->unlabelled12 = *(int *)(puVar3 + 2);
		this->unlabelled20 = this->unlabelled20 | 0x100000;
		}
		else if (uVar1 == 0x11b) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		this->unlabelled20 = this->unlabelled20 | 0x200000;
		}
		}
		else if (uVar1 == 0x12f) {
		this->unlabelled20 = (uint)*(byte *)(puVar3 + 2) << 4 | this->unlabelled20 & 0xfffff00fU;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		if (*(int *)(puVar3 + 2) == 0x4b) {
		this->unlabelled20 = this->unlabelled20 | 0x400000;
		}
		else if (*(int *)(puVar3 + 2) == 0x4d) {
		this->unlabelled20 = this->unlabelled20 | 0x800000;
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

