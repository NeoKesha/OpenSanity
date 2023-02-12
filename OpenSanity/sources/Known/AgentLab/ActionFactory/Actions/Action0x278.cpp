#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x278.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x278::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x278::Dispose(Action0x278 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x278::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x278::ExecuteFromCallContext(Action0x278 *this,undefined4 time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContext *pIVar2;
		InstanceContext *pIVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		InstanceNodeAbstract *pIVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		InstanceNodeAbstract *pIVar10;
		InstanceContext *pIVar11;
		uint uVar12;
		uint uVar13;
		int iVar14;
		InstanceNodeAbstract **ppIVar15;
		InstanceNodeAbstract **ppIVar16;
		int iVar17;
		uint uVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		uint local_30;
		pIVar2 = (ctx->parent).ctx;
		pIVar3 = (pIVar2->parent).ctx;
		pIVar6 = InstanceDataList::GetNode(&pIVar3->nodes,ObjectLink);
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar11 = (InstanceContext *)0x0;
		}
		else {
		pIVar11 = PTR_00496350->ctx;
		}
		pIVar4 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar22 = (pIVar4->matrix).m44;
		fVar19 = (pIVar4->matrix).m43;
		fVar20 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar20;
		(pIVar4->position).z = fVar19;
		(pIVar4->position).w = fVar22;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		pIVar4 = (pIVar11->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar22 = (pIVar4->matrix).m44;
		fVar19 = (pIVar4->matrix).m43;
		fVar20 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar20;
		(pIVar4->position).z = fVar19;
		(pIVar4->position).w = fVar22;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		uVar7 = this->unlabelled12 & 0xff;
		uVar18 = 0xffffffff;
		if (uVar7 == 0xff) {
		uVar7 = 0;
		}
		else {
		uVar7 = uVar7 - 1;
		}
		bVar1 = *(byte *)((int)&this->unlabelled12 + 1);
		if (bVar1 == 0xff) {
		uVar13 = (uint)pIVar6[1].vtable & 0x1f;
		}
		else {
		uVar13 = (uint)bVar1;
		}
		if (uVar7 < uVar13) {
		ppIVar15 = (InstanceNodeAbstract **)(&pIVar6[1].field2_0x8 + uVar7 * 2);
		uVar12 = uVar7;
		fVar22 = FLOAT_0038ad18;
		do {
		uVar8 = (uint)*ppIVar15;
		fVar21 = (pIVar4->position).y -(*(float *)(uVar8 + 0x54) +(*(float *)(uVar8 + 100) - *(float *)(uVar8 + 0x54)) * FLOAT_00386ab4);
		fVar20 = (pIVar4->position).x -(*(float *)(uVar8 + 0x50) +(*(float *)(uVar8 + 0x60) - *(float *)(uVar8 + 0x50)) * FLOAT_00386ab4);
		fVar19 = (pIVar4->position).z -(*(float *)(uVar8 + 0x58) +(*(float *)(uVar8 + 0x68) - *(float *)(uVar8 + 0x58)) * FLOAT_00386ab4);
		fVar19 = fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20;
		if (fVar19 < fVar22) {
		uVar18 = uVar12;
		fVar22 = fVar19;
		}
		uVar12 = uVar12 + 1;
		ppIVar15 = ppIVar15 + 1;
		}
		 while (uVar12 < uVar13);
		}
		uVar12 = (uint)pIVar6[1].vtable & 0x1f;
		ppIVar15 = (InstanceNodeAbstract **)(&pIVar6[1].field2_0x8 + uVar18 * 2);
		bVar5 = true;
		iVar14 = 0;
		local_30 = uVar18;
		ppIVar16 = ppIVar15;
		do {
		if ((*(byte *)((int)*ppIVar16 + 0x15) & 1) != 0) goto LAB_0005ea5d;
		if ((iVar14 == 10) || (local_30 == uVar12 - 1)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + 1;
		local_30 = local_30 + 1;
		ppIVar16 = ppIVar16 + 1;
		}
		 while (bVar5);
		local_30 = 0xffffffff;
		LAB_0005ea5d:bVar5 = true;
		iVar14 = 0;
		uVar8 = uVar18;
		do {
		if ((*(byte *)(*(int *)(&pIVar6[1].field2_0x8 + uVar8 * 2) + 0x15) & 1) != 0) goto LAB_0005ea92;
		if ((iVar14 == -10) || (uVar8 == 0)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + -1;
		uVar8 = uVar8 - 1;
		}
		 while (bVar5);
		uVar8 = 0xffffffff;
		LAB_0005ea92:iVar14 = 1;
		uVar9 = thunk_FUN_0005e0f0((int)this,(int)pIVar6);
		if (1 < uVar9) {
		if (local_30 == 0xffffffff) {
		if (uVar8 != 0xffffffff) {
		uVar18 = (uVar13 - 1) + uVar18 >> 1;
		bVar5 = true;
		iVar14 = 0;
		do {
		if ((~(byte)((uint)*(undefined4 *)(*(int *)(&pIVar6[1].field2_0x8 + uVar18 * 2) + 0x14) >>8) & 1) != 0) goto LAB_0005eaf6;
		if ((iVar14 == -10) || (uVar18 == 0)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + -1;
		uVar18 = uVar18 - 1;
		}
		 while (bVar5);
		uVar18 = 0xffffffff;
		LAB_0005eaf6:iVar14 = 1;
		}
		}
		else if (uVar8 == 0xffffffff) {
		uVar7 = uVar7 + uVar18;
		uVar18 = uVar7 >> 1;
		ppIVar16 = (InstanceNodeAbstract **)(&pIVar6[1].field2_0x8 + (uVar7 & 0xfffffffe));
		bVar5 = true;
		iVar14 = 0;
		do {
		if ((~(byte)((uint)*(undefined4 *)((int)*ppIVar16 + 0x14) >> 8) & 1) != 0)goto LAB_0005eb59;
		if ((iVar14 == 10) || (uVar18 == uVar12 - 1)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + 1;
		uVar18 = uVar18 + 1;
		ppIVar16 = ppIVar16 + 1;
		}
		 while (bVar5);
		uVar18 = 0xffffffff;
		LAB_0005eb59:iVar14 = -1;
		}
		else {
		iVar14 = 0;
		if (uVar18 - uVar8 < local_30 - uVar18) {
		bVar5 = true;
		ppIVar16 = ppIVar15;
		do {
		if ((~(byte)((*ppIVar16)->field6_0x14 >> 8) & 1) != 0) {
		iVar14 = 1;
		goto LAB_0005ebf1;
		}
		if ((iVar14 == 10) || (uVar18 == uVar12 - 1)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + 1;
		uVar18 = uVar18 + 1;
		ppIVar16 = ppIVar16 + 1;
		}
		 while (bVar5);
		uVar18 = 0xffffffff;
		iVar14 = 1;
		}
		else {
		bVar5 = true;
		do {
		if ((~(byte)((uint)*(undefined4 *)(*(int *)(&pIVar6[1].field2_0x8 + uVar18 * 2) + 0x14) >>8) & 1) != 0) goto LAB_0005ebe6;
		if ((iVar14 == -10) || (uVar18 == 0)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + -1;
		uVar18 = uVar18 - 1;
		}
		 while (bVar5);
		uVar18 = 0xffffffff;
		LAB_0005ebe6:iVar14 = -1;
		}
		}
		}
		LAB_0005ebf1:if (uVar18 == 0xffffffff) {
		(pIVar2->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		return;
		}
		pIVar10 = *(InstanceNodeAbstract **)(&pIVar6[1].field2_0x8 + uVar18 * 2);
		if ((pIVar10->field6_0x14 & 0x100) != 0) {
		if (iVar14 < 1) {
		bVar5 = true;
		iVar14 = 0;
		do {
		if ((~(byte)((uint)((&pIVar6[1].ctx)[uVar13]->parent).flags >> 8) & 1) != 0) break;
		if ((iVar14 == -100) || (uVar13 - 1 == 0)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + -1;
		uVar13 = uVar13 - 1;
		}
		 while (bVar5);
		}
		else {
		iVar17 = 0;
		iVar14 = 0;
		bVar5 = true;
		ppIVar16 = (InstanceNodeAbstract **)&pIVar6[1].field2_0x8;
		do {
		if ((~(byte)((uint)*(undefined4 *)((int)*ppIVar16 + 0x14) >> 8) & 1) != 0) break;
		if ((iVar14 == 100) || (iVar17 == uVar12 - 1)) {
		bVar5 = false;
		}
		iVar14 = iVar14 + 1;
		iVar17 = iVar17 + 1;
		ppIVar16 = ppIVar16 + 1;
		}
		 while (bVar5);
		}
		pIVar10 = *ppIVar15;
		}
		(pIVar2->nodes).array[0xc] = pIVar10;
		pIVar10->field6_0x14 = pIVar10->field6_0x14 | 0x100;
		return;
		}
		
	*/
	return;
}

void Action0x278::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x278 * __fastcall Action0x278::Construct(Action0x278 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x278;
		this->unlabelled12 = uVar1 | 0xffff;
		return this;
		}
		
	*/
	return;
}

int Action0x278::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x278::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

