#include "headers/Known/AgentLab/ActionFactory/Actions/ActionApplyVelocity.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionApplyVelocity::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionApplyVelocity * __fastcall ActionApplyVelocity::Construct(ActionApplyVelocity *this){
		ActionApplyVelocityToSelf::Construct((ActionApplyVelocityToSelf *)this);
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ApplyVelocity;
		FUN_00180380(&this->unlabelled44,0);
		FUN_00180380(&this->unlabelled48,0);
		FUN_00180380(&this->unlabelled52,0);
		this->unlabelled56 = 0xff;
		return this;
		}
		
	*/
	return;
}

void ActionApplyVelocity::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionApplyVelocity::ExecuteFromCallContext(ActionApplyVelocity *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		int iVar2;
		InstanceContext *ctx1;
		ChunkData *this_00;
		InstanceTransform *pIVar3;
		void *pvVar4;
		InstanceContext *pIVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		InstanceContext **local_e4;
		ushort local_e0;
		undefined2 local_de;
		float local_dc;
		uint local_d8;
		undefined4 local_d4;
		undefined4 local_d0;
		undefined4 local_cc;
		undefined4 local_c8;
		undefined4 local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		float local_b4;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		float local_a0;
		InstanceContext *local_90 [35];
		pIVar5 = (ctx->parent).ctx;
		iVar2 = (pIVar5->parent).field14_0x20.field27_0x78;
		ctx1 = (pIVar5->parent).ctx;
		if (iVar2 == 0) {
		pvVar4 = (void *)(pIVar5->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar2);
		}
		if ((*(byte *)&this->unlabelled40 & 0xc) == 0) {
		pIVar5 = (InstanceContext *)FUN_00187030((int)ctx,this->unlabelled56);
		if (pIVar5 != (InstanceContext *)0x0) {
		thunk_FUN_00037610((int)this,ctx1,pIVar5);
		return;
		}
		}
		else {
		this_00 = (ctx1->parent).chunkData;
		local_d8 = local_d8 & 0xfffffffe | 2;
		local_e4 = local_90;
		pIVar3 = (ctx1->parent).transform;
		local_e0 = 0;
		local_de = 0x20;
		local_dc = FLOAT_00386648;
		local_d4 = 0;
		local_d0 = 1;
		local_cc = 0;
		local_c4 = 0;
		local_c8 = 0;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar3->matrix).m44;
		fVar8 = (pIVar3->matrix).m43;
		fVar1 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar1;
		(pIVar3->position).z = fVar8;
		(pIVar3->position).w = fVar7;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_b0 = (pIVar3->position).x;
		local_ac = (pIVar3->position).y;
		local_a8 = (pIVar3->position).z;
		local_a4 = (pIVar3->position).w;
		local_c0 = local_b0;
		local_bc = local_ac;
		local_b8 = local_a8;
		local_b4 = local_a4;
		fVar7 = FUN_00180490(&this->unlabelled36,pvVar4);
		fVar8 = FUN_00180490(&this->unlabelled32,pvVar4);
		local_a0 = FUN_00180490(&this->unlabelled28,pvVar4);
		local_b0 = local_a0 + local_b0;
		local_ac = local_ac + fVar8;
		local_a8 = local_a8 + fVar7;
		FUN_00137280((int)&local_e4,(int)ctx1);
		fVar7 = FUN_0013f1c0((int)this_00,&local_c0,0x10b000,&local_e4,(undefined4 *)0x0);
		if ((FLOAT_00386394 != fVar7) && (uVar6 = 0, local_e0 != 0)) {
		do {
		thunk_FUN_00037610((int)this,ctx1,local_90[uVar6]);
		uVar6 = uVar6 + 1;
		}
		 while (uVar6 < local_e0);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionApplyVelocity::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionApplyVelocity::Dispose(ActionApplyVelocity *this,byte param_1){
		thunk_FUN_000565d0(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionApplyVelocity::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionApplyVelocity::GetSize(void){
		return 0x3c;
		}
		
	*/
	return 0;
}

void ActionApplyVelocity::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionApplyVelocity::UnkMethod(ActionApplyVelocity *this,int *param_1){
		char cVar1;
		undefined *puVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		puVar2 = (*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		(*(this->parent).vtable[1].Dispose)(&this->parent,(byte)puVar2);
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

