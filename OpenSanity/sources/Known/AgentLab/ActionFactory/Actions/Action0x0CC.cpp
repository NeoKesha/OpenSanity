#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0CC.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0CC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0CC::Dispose(Action0x0CC *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0CC::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x0CC::ExecuteFromCallContext(Action0x0CC *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *pIVar2;
		uint uVar3;
		InstanceTransform *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		InstanceContext *pIVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		Matrix4 *local_14;
		fVar7 = FLOAT_0038639c;
		pIVar2 = (ctx->parent).ctx;
		pIVar8 = (InstanceContext *)0x0;
		fVar10 = 0.0;
		fVar5 = 0.0;
		local_14 = (Matrix4 *)FLOAT_0038639c;
		if ((*(byte *)&(pIVar2->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		local_14 = (pIVar2->parent).field14_0x20.matrix1;
		pIVar8 = (pIVar2->parent).field14_0x20.field4_0x10;
		fVar10 = (float)(pIVar2->parent).field14_0x20.field5_0x14;
		fVar5 = (float)(pIVar2->parent).field14_0x20.field6_0x18;
		}
		uVar3 = this->unlabelled40;
		if ((uVar3 & 1) != 0) {
		pIVar8 = (InstanceContext *)this->unlabelled12;
		}
		if ((uVar3 & 2) != 0) {
		fVar10 = (float)this->unlabelled16;
		}
		if ((uVar3 & 4) != 0) {
		fVar5 = (float)this->unlabelled20;
		}
		if ((float)this->unlabelled36 <= 0.0) {
		if ((uVar3 & 8) != 0) {
		pIVar8 = (InstanceContext *)((float)this->unlabelled24 + (float)pIVar8);
		}
		if ((uVar3 & 0x10) != 0) {
		fVar10 = (float)this->unlabelled28 + fVar10;
		}
		if ((uVar3 & 0x20) != 0) {
		fVar5 = (float)this->unlabelled32 + fVar5;
		}
		}
		else {
		pIVar4 = (((pIVar2->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar11 = (pIVar4->matrix).m44;
		fVar1 = (pIVar4->matrix).m43;
		fVar6 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar6;
		(pIVar4->position).z = fVar1;
		(pIVar4->position).w = fVar11;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		fVar11 = (pIVar4->position).x;
		fVar1 = (pIVar4->position).z;
		fVar9 = (float)pIVar8 - fVar11;
		fVar5 = fVar5 - fVar1;
		fVar6 = fVar5 * fVar5 + 0.0 + fVar9 * fVar9;
		if (fVar6 <= _DAT_004962e0) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = fVar7 / SQRT(fVar6);
		}
		uVar3 = this->unlabelled40;
		fVar9 = fVar9 * fVar7;
		fVar6 = (float)this->unlabelled36;
		fVar12 = fVar7 * 0.0;
		fVar7 = fVar5 * fVar7;
		pIVar8 = (InstanceContext *)(fVar6 * fVar9 + fVar11);
		fVar10 = fVar12 * fVar6 + fVar10;
		fVar5 = fVar7 * fVar6 + fVar1;
		local_14 = (Matrix4 *)FLOAT_0038639c;
		if ((uVar3 & 8) != 0) {
		fVar11 = 0.0 - (float)this->unlabelled24;
		fVar10 = (fVar9 * 0.0 - fVar7 * 0.0) * fVar11 + fVar10;
		pIVar8 = (InstanceContext *)((fVar7 - fVar12 * 0.0) * fVar11 + (float)pIVar8);
		fVar5 = (fVar12 * 0.0 - fVar9) * fVar11 + fVar5;
		}
		if ((uVar3 & 0x10) != 0) {
		fVar10 = (float)this->unlabelled28 + fVar10;
		}
		if ((uVar3 & 0x20) != 0) {
		fVar11 = 0.0 - (float)this->unlabelled32;
		pIVar8 = (InstanceContext *)(fVar11 * fVar9 + (float)pIVar8);
		fVar10 = fVar12 * fVar11 + fVar10;
		fVar5 = fVar7 * fVar11 + fVar5;
		}
		}
		pIVar2 = (ctx->parent).ctx;
		(pIVar2->parent).field14_0x20.field6_0x18 = fVar5;
		(pIVar2->parent).field14_0x20.field4_0x10 = pIVar8;
		(pIVar2->parent).field14_0x20.field5_0x14 = fVar10;
		(pIVar2->parent).field14_0x20.matrix1 = local_14;
		(pIVar2->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar2->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		return;
		}
		
	*/
	return;
}

void Action0x0CC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0CC * __fastcall Action0x0CC::Construct(Action0x0CC *this){
		uint uVar1;
		uVar1 = this->unlabelled40;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CC;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = uVar1 & 0xffffffc0;
		return this;
		}
		
	*/
	return;
}

int Action0x0CC::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0CC::GetSize(void){
		return 0x2c;
		}
		
	*/
	return 0;
}

void Action0x0CC::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CC::UnkMethod(Action0x0CC *this,int *param_1){
		char cVar1;
		undefined2 *puVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		puVar2 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*puVar2) {
		case 0:this->unlabelled12 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 1;
		break;
		case 1:this->unlabelled16 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 2;
		break;
		case 2:this->unlabelled20 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 4;
		break;
		case 0x82:this->unlabelled24 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 8;
		break;
		case 0x83:this->unlabelled28 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 0x10;
		break;
		case 0x84:this->unlabelled32 = *(int *)(puVar2 + 2);
		this->unlabelled40 = this->unlabelled40 | 0x20;
		break;
		case 0xcd:this->unlabelled36 = *(int *)(puVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

