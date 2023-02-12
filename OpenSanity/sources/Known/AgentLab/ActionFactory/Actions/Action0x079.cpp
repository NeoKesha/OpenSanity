#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x079.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x079::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x079::Dispose(Action0x079 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x079::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x079::ExecuteFromCallContext(Action0x079 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		InstanceTransform *transform;
		InstanceContext *pIVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = PTR_00496350->ctx;
		}
		pIVar4 = (ctx->parent).ctx;
		pIVar5 = (((pIVar4->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar1 = (pIVar5->position).x;
		fVar2 = (pIVar5->position).y;
		fVar3 = (pIVar5->position).z;
		pIVar5 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar5->matrix).m44;
		fVar8 = (pIVar5->matrix).m43;
		fVar9 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar9;
		(pIVar5->position).z = fVar8;
		(pIVar5->position).w = fVar7;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		transform = (pIVar6->parent).transform;
		fVar7 = fVar1 - (pIVar5->position).x;
		fVar8 = fVar3 - (pIVar5->position).z;
		InstanceTransform::FillMatrix(transform);
		fVar9 = fVar8 * fVar8 + fVar7 * fVar7;
		if (fVar9 <= _DAT_004962e0) {
		fVar9 = 0.0;
		}
		else {
		fVar9 = FLOAT_0038639c / SQRT(fVar9);
		}
		fVar8 = fVar8 * fVar9;
		fVar7 = fVar9 * fVar7;
		fVar10 = fVar9 * 0.0 * 0.0;
		fVar11 = 0.0 - this->unlabelled12;
		if (0.0 <= (transform->matrix).m13 * fVar8 + (transform->matrix).m12 * fVar9 * 0.0 +(transform->matrix).m11 * fVar7) {
		fVar11 = this->unlabelled12;
		}
		(pIVar4->parent).field14_0x20.field5_0x14 = (fVar7 * 0.0 - fVar8 * 0.0) * fVar11 + fVar2;
		fVar2 = FLOAT_0038639c;
		(pIVar4->parent).field14_0x20.field4_0x10 = (InstanceContext *)(fVar11 * (fVar8 - fVar10) + fVar1);
		(pIVar4->parent).field14_0x20.field6_0x18 = (fVar10 - fVar7) * fVar11 + fVar3;
		(pIVar4->parent).field14_0x20.matrix1 = (Matrix4 *)fVar2;
		(pIVar4->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar4->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		return;
		}
		
	*/
	return;
}

void Action0x079::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x079 * __fastcall Action0x079::Construct(Action0x079 *this){
		this->unlabelled12 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x079;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

void Action0x079::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x079::UnkMethod(Action0x079 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

int Action0x079::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x079::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

