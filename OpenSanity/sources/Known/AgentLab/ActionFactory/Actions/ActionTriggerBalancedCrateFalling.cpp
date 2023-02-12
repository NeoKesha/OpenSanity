#include "headers/Known/AgentLab/ActionFactory/Actions/ActionTriggerBalancedCrateFalling.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionTriggerBalancedCrateFalling::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionTriggerBalancedCrateFalling::Dispose(ActionTriggerBalancedCrateFalling *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionTriggerBalancedCrateFalling::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionTriggerBalancedCrateFalling::ExecuteFromCallContext(ActionTriggerBalancedCrateFalling *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *this_00;
		InstanceContext *pIVar2;
		ChunkData *this_01;
		InstanceTransform *pIVar3;
		int iVar4;
		InstanceNodeAbstract_VTable *pIVar5;
		int iVar6;
		InstanceNodeAbstract *pIVar7;
		uint uVar8;
		uint uVar9;
		float fVar10;
		float fVar11;
		int *local_e4;
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
		float local_9c;
		int local_90 [35];
		this_00 = (ctx->parent).ctx;
		pIVar2 = (this_00->parent).ctx;
		this_01 = (pIVar2->parent).chunkData;
		local_e4 = local_90;
		local_d8 = local_d8 & 0xfffffffe | 2;
		local_e0 = 0;
		local_de = 0x20;
		local_dc = FLOAT_0038ad18;
		local_d4 = 0x10;
		local_d0 = 0x41;
		local_cc = 0;
		local_c4 = 0;
		local_c8 = 0;
		pIVar3 = (pIVar2->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar11 = (pIVar3->matrix).m44;
		fVar10 = (pIVar3->matrix).m43;
		fVar1 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar1;
		(pIVar3->position).z = fVar10;
		(pIVar3->position).w = fVar11;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_c0 = (pIVar3->position).x;
		local_b8 = (pIVar3->position).z;
		local_b4 = (pIVar3->position).w;
		local_bc = (pIVar3->position).y + FLOAT_00386608;
		local_ac = local_bc + FLOAT_0038adb4;
		local_b0 = local_c0;
		local_a8 = local_b8;
		local_a4 = local_b4;
		local_9c = local_ac;
		FUN_00137280((int)&local_e4,(int)pIVar2);
		fVar11 = FUN_0013f1c0((int)this_01,&local_c0,0x2000,&local_e4,(undefined4 *)0x0);
		if ((FLOAT_00386394 <= fVar11) && (fVar11 <= FLOAT_0038639c)) {
		uVar9 = (uint)local_e0;
		uVar8 = 0;
		fVar11 = FLOAT_0038ad18;
		if (3 < uVar9) {
		do {
		iVar4 = *(int *)(local_90[uVar8] + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar10 = *(float *)(iVar4 + 0x44) - local_9c;
		if (fVar10 < fVar11) {
		fVar11 = fVar10;
		}
		iVar4 = *(int *)(local_90[uVar8 + 1] + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar10 = *(float *)(iVar4 + 0x44) - local_9c;
		if (fVar10 < fVar11) {
		fVar11 = fVar10;
		}
		iVar4 = *(int *)(local_90[uVar8 + 2] + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar10 = *(float *)(iVar4 + 0x44) - local_9c;
		if (fVar10 < fVar11) {
		fVar11 = fVar10;
		}
		iVar4 = *(int *)(local_90[uVar8 + 3] + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar10 = *(float *)(iVar4 + 0x44) - local_9c;
		if (fVar10 < fVar11) {
		fVar11 = fVar10;
		}
		uVar8 = uVar8 + 4;
		}
		 while (uVar8 < uVar9 - 3);
		}
		for (;
		 uVar8 < uVar9;
		 uVar8 = uVar8 + 1) {
		iVar4 = *(int *)(local_90[uVar8] + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar10 = *(float *)(iVar4 + 0x44) - local_9c;
		if (fVar10 < fVar11) {
		fVar11 = fVar10;
		}
		}
		fVar11 = fVar11 + FLOAT_00386ab4;
		uVar8 = 0;
		if (uVar9 != 0) {
		do {
		iVar4 = local_90[uVar8];
		pIVar7 = InstanceDataList::GetNode((InstanceDataList *)(iVar4 + 0xe4),Crate);
		pIVar5 = pIVar7[1].vtable;
		iVar6 = *(int *)(iVar4 + 0x18);
		if ((*(byte *)(iVar6 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x30);
		*(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x34);
		*(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar6 + 0x38);
		*(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(iVar6 + 0x3c);
		*(uint *)(iVar6 + 0x60) = *(uint *)(iVar6 + 0x60) & 0xfffffffa;
		}
		if (*(float *)(iVar6 + 0x44) - local_9c < fVar11) {
		thunk_FUN_00067110((int)pIVar5);
		*(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) | 0x200;
		}
		uVar8 = uVar8 + 1;
		}
		 while (uVar8 < uVar9);
		}
		}
		InstanceNodeAbstract::FUN_00172f90((InstanceNodeAbstract *)this_00,0.0);
		return;
		}
		
	*/
	return;
}

void ActionTriggerBalancedCrateFalling::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionTriggerBalancedCrateFalling::Construct(ActionTriggerBalancedCrateFalling *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_TriggerBalancedCrateFalling;
		return;
		}
		
	*/
	return;
}

int ActionTriggerBalancedCrateFalling::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionTriggerBalancedCrateFalling::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

