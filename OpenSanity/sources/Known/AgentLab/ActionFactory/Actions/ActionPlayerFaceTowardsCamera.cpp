#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPlayerFaceTowardsCamera.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPlayerFaceTowardsCamera::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall ActionPlayerFaceTowardsCamera::ExecuteFromCallContext(ActionPlayerFaceTowardsCamera *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceTransform *pIVar1;
		bool bVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		InstanceNodeAbstract *pIVar5;
		undefined4 *puVar6;
		float fVar7;
		Matrix4 local_50;
		uVar3 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar3 == 6) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar3];
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = *(InstanceContext **)&pIVar4->parent;
		}
		}
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar4->field27_0xe0 + 1),Camera);
		puVar6 = *(undefined4 **)&pIVar5[1].field2_0x8;
		if (puVar6 != (undefined4 *)0x0) {
		puVar6 = (undefined4 *)*puVar6;
		}
		pIVar1 = (InstanceTransform *)puVar6[6];
		pIVar4 = (((ctx->parent).ctx)->parent).ctx;
		InstanceTransform::FillMatrix(pIVar1);
		local_50.m31 = (pIVar1->matrix).m41;
		local_50.m33 = (pIVar1->matrix).m43;
		pIVar1 = (pIVar4->parent).transform;
		InstanceTransform::FillMatrix(pIVar1);
		local_50.m42 = (pIVar1->matrix).m42;
		local_50.m41 = (pIVar1->matrix).m41;
		local_50.m43 = (pIVar1->matrix).m43;
		local_50.m33 = local_50.m33 - local_50.m43;
		local_50.m31 = local_50.m31 - local_50.m41;
		fVar7 = local_50.m31;
		if (local_50.m31 < 0.0) {
		fVar7 = 0.0 - local_50.m31;
		}
		if ((fVar7 <= EPSILON) && (0.0 <= EPSILON)) {
		fVar7 = local_50.m33;
		if (local_50.m33 < 0.0) {
		fVar7 = 0.0 - local_50.m33;
		}
		if (fVar7 <= EPSILON) {
		return;
		}
		}
		fVar7 = local_50.m33 * local_50.m33 + local_50.m31 * local_50.m31;
		if (fVar7 <= _DAT_0039d860) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		local_50.m31 = local_50.m31 * fVar7;
		local_50.m32 = fVar7 * 0.0;
		local_50.m33 = local_50.m33 * fVar7;
		local_50.m12 = local_50.m33 * 0.0 - local_50.m31 * 0.0;
		local_50.m13 = local_50.m31 - local_50.m32 * 0.0;
		local_50.m11 = local_50.m32 * 0.0 - local_50.m33;
		local_50.m14 = 0.0;
		local_50.m21 = 0.0;
		local_50.m22 = FLOAT_0038639c;
		local_50.m23 = 0.0;
		local_50.m24 = 0.0;
		local_50.m34 = 0.0;
		local_50.m44 = FLOAT_0038639c;
		pIVar4 = (((ctx->parent).ctx)->parent).ctx;
		bVar2 = InstanceTransform::FUN_000e16f0((pIVar4->parent).transform,&local_50);
		if (bVar2 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar4);
		}
		return;
		}
		
	*/
	return;
}

void ActionPlayerFaceTowardsCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPlayerFaceTowardsCamera::Dispose(ActionPlayerFaceTowardsCamera *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPlayerFaceTowardsCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionPlayerFaceTowardsCamera::Construct(ActionPlayerFaceTowardsCamera *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_PlayerFaceTowardsCamera;
		return;
		}
		
	*/
	return;
}

int ActionPlayerFaceTowardsCamera::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPlayerFaceTowardsCamera::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

