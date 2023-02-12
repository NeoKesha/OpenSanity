#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x23F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x23F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23F::ExecuteFromCallContext(Action0x23F *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceTransform *pIVar1;
		int this_00;
		InstanceContext **ppIVar2;
		InstanceContext *pIVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		ushort local_2c [6];
		InstanceContext *local_20;
		float local_1c;
		InstanceContext *local_18;
		Matrix4 *local_14;
		if (*(byte *)&this->unlabelled12 == 0xff) {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = PTR_00496350->ctx;
		}
		}
		else {
		pIVar3 = *(InstanceContext **)((ctx->parent).flags + 4 + (uint)*(byte *)&this->unlabelled12 * 4);
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		this_00 = UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,pIVar3);
		pIVar1 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar1->field3_0x60 & 4) != 0) {
		fVar4 = (pIVar1->matrix).m44;
		fVar5 = (pIVar1->matrix).m43;
		fVar6 = (pIVar1->matrix).m42;
		(pIVar1->position).x = (pIVar1->matrix).m41;
		(pIVar1->position).y = fVar6;
		(pIVar1->position).z = fVar5;
		(pIVar1->position).w = fVar4;
		pIVar1->field3_0x60 = (float)((uint)pIVar1->field3_0x60 & 0xfffffffa);
		}
		local_20 = (InstanceContext *)(pIVar1->position).x;
		local_1c = (pIVar1->position).y;
		local_18 = (InstanceContext *)(pIVar1->position).z;
		local_14 = (Matrix4 *)(pIVar1->position).w;
		ppIVar2 = (InstanceContext **)FUN_001b1cf0(this_00,(float *)&local_20,local_2c,0,0x10);
		if (ppIVar2 == (InstanceContext **)0x0) {
		local_18 = (InstanceContext *)((float)local_18 + FLOAT_00386608);
		}
		else if (((*(byte *)(ppIVar2 + 7) >> 2 & 1) != 0) ||(fVar6 = (float)ppIVar2[2] - (float)local_18, fVar5 = (float)ppIVar2[1] - local_1c,fVar4 = (float)*ppIVar2 - (float)local_20,SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < FLOAT_0038abf8)) {
		local_1c = (float)ppIVar2[1] + FLOAT_00386ab4;
		local_14 = (Matrix4 *)FLOAT_0038639c;
		local_20 = *ppIVar2;
		local_18 = ppIVar2[2];
		}
		pIVar3 = (ctx->parent).ctx;
		(pIVar3->parent).field14_0x20.field4_0x10 = local_20;
		(pIVar3->parent).field14_0x20.field5_0x14 = local_1c;
		(pIVar3->parent).field14_0x20.field6_0x18 = local_18;
		(pIVar3->parent).field14_0x20.matrix1 = local_14;
		(pIVar3->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar3->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		return;
		}
		return;
		}
		
	*/
	return;
}

void Action0x23F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x23F::Dispose(Action0x23F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x23F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x23F * __fastcall Action0x23F::Construct(Action0x23F *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x23F;
		this->unlabelled12 = uVar1 & 0xfffffeff | 0xff;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x23F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x23F::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x23F::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23F::UnkMethod(Action0x23F *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		else if (*psVar2 == 0xc6) {
		this->unlabelled16 = *(int *)(psVar2 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x100;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

