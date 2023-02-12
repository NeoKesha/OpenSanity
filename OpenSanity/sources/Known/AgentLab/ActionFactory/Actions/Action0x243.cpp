#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x243.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x243::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x243::ExecuteFromCallContext(Action0x243 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *pIVar3;
		NodeRelated2C *pNVar4;
		InstanceTransform *pIVar5;
		uint playerIndex;
		InstanceNodeCharacter *pIVar6;
		uint uVar6;
		InstanceContext *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float local_28;
		Vector4 local_20;
		playerIndex = this->unlabelled12;
		if ((playerIndex & 0x10000) == 0) {
		playerIndex = UnkFamily16A::FUN_001b1ee0(PTR_DefaultRM,playerIndex & 0xffff);
		}
		else {
		playerIndex = (uint)*(byte *)((int)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42 + 0x28+ (playerIndex & 0xffff));
		}
		local_28 = (float)playerIndex;
		playerIndex = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		fVar8 = 0.0;
		if (playerIndex == 6) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (GameController1->chunkDescriptor).playerInstanceContexts[playerIndex];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = pIVar2->ctx;
		}
		}
		pIVar3 = (((ctx->parent).ctx)->parent).ctx;
		if (pIVar7 != (InstanceContext *)0x0) {
		pIVar6 = (InstanceNodeCharacter *)InstanceDataList::GetNode(&pIVar7->nodes,Character);
		pNVar4 = pIVar6->field1_0x18;
		if ((int *)pNVar4->field22_0xb8 == (int *)0x0) {
		local_20.x = (pNVar4->parent).field1_0x60.x;
		local_20.y = (pNVar4->parent).field1_0x60.y;
		local_20.z = (pNVar4->parent).field1_0x60.z;
		local_20.w = (pNVar4->parent).field1_0x60.w;
		}
		else {
		(**(code **)(*(int *)pNVar4->field22_0xb8 + 0x20))(&local_20);
		}
		pIVar5 = (pIVar7->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar5->matrix).m44;
		fVar14 = (pIVar5->matrix).m43;
		fVar1 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar1;
		(pIVar5->position).z = fVar14;
		(pIVar5->position).w = fVar8;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar8 = (pIVar5->position).x;
		fVar14 = (pIVar5->position).y;
		fVar1 = (pIVar5->position).z;
		pIVar5 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar5->matrix).m44;
		fVar11 = (pIVar5->matrix).m43;
		fVar12 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar12;
		(pIVar5->position).z = fVar11;
		(pIVar5->position).w = fVar10;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar10 = (pIVar5->position).x;
		fVar9 = fVar8 - fVar10;
		fVar11 = (pIVar5->position).y;
		fVar13 = fVar14 - fVar11;
		fVar12 = (pIVar5->position).z;
		fVar11 = (fVar14 + local_20.y) - fVar11;
		fVar14 = fVar1 - fVar12;
		fVar12 = (fVar1 + local_20.z) - fVar12;
		fVar10 = (fVar8 + local_20.x) - fVar10;
		fVar8 = (fVar14 * fVar14 + fVar13 * fVar13 + fVar9 * fVar9) -(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
		}
		if (FLOAT_0038abd8 < local_28) {
		if (FLOAT_0038abcc < local_28) {
		if (fVar8 <= FLOAT_0038abd4) {
		if (0.0 <= fVar8) {
		local_28 = local_28 - (FLOAT_0038abd4 - fVar8) * FLOAT_0038abc8;
		goto LAB_00046a42;
		}
		goto LAB_00046a30;
		}
		fVar8 = fVar8 * FLOAT_0038abc4;
		}
		else {
		if (fVar8 <= FLOAT_0038abd4) goto LAB_000469c3;
		fVar8 = fVar8 * FLOAT_0038abc8;
		}
		}
		else {
		if (fVar8 <= FLOAT_0038abd4) {
		LAB_000469c3:if (0.0 <= fVar8) {
		local_28 = local_28 - (FLOAT_0038abd4 - fVar8) * FLOAT_0038abd0;
		goto LAB_00046a42;
		}
		}
		LAB_00046a30:fVar8 = fVar8 * FLOAT_0038abd0;
		}
		local_28 = fVar8 + local_28;
		LAB_00046a42:fVar8 = Math::ClampFloat(local_28,0.0,255.0);
		playerIndex = this->unlabelled12;
		uVar6 = __ftol2(fVar8);
		if ((playerIndex & 0x10000) != 0) {
		*(char *)((int)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42 + 0x28 +(playerIndex & 0xffff)) = (char)uVar6;
		return;
		}
		UnkFamily16A::FUN_001b1e80(PTR_DefaultRM,playerIndex & 0xffff,uVar6 & 0xff);
		return;
		}
		
	*/
	return;
}

void Action0x243::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x243::Dispose(Action0x243 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x243::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x243 * __fastcall Action0x243::Construct(Action0x243 *this){
		uint uVar1;
		*(undefined2 *)&this->unlabelled12 = 0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		uVar1 = this->unlabelled12;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x243;
		this->unlabelled12 = uVar1 | 0x30000;
		return this;
		}
		
	*/
	return;
}

int Action0x243::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x243::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

