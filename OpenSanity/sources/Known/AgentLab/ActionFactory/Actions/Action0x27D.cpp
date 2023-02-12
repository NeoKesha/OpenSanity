#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x27D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x27D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x27D::Dispose(Action0x27D *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x27D::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x27D::ExecuteFromCallContext(Action0x27D *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceTransform *pIVar2;
		int iVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *pIVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		InstanceNodeAbstract **ppIStack124;
		float fStack120;
		float local_74;
		int iStack104;
		InstanceContext *local_64;
		float fStack96;
		float fStack92;
		undefined4 uStack88;
		float fStack84;
		float local_50;
		float fStack76;
		float fStack68;
		float local_40;
		float local_3c;
		float local_38;
		Vector4 VStack52;
		Vector4 aVStack36 [2];
		local_64 = (ctx->parent).ctx;
		pIVar4 = InstanceDataList::GetNode(&((local_64->parent).ctx)->nodes,ObjectLink);
		uVar6 = 0;
		local_74 = FLOAT_0038ad18;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = PTR_00496350->ctx;
		}
		pIVar2 = (pIVar5->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar2->matrix).m44;
		fVar1 = (pIVar2->matrix).m43;
		fVar8 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar8;
		(pIVar2->position).z = fVar1;
		(pIVar2->position).w = fVar7;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_40 = (pIVar2->position).x;
		local_3c = (pIVar2->position).y;
		local_38 = (pIVar2->position).z;
		pIVar5 = (InstanceContext *)FUN_00182480();
		(*((GLOBAL_CHARACTER_R2->parent).parent.vtable)->IsC)(&local_50);
		fVar7 = SQRT(fStack76 * fStack76 + local_50 * local_50 + fStack84 * fStack84);
		if ((pIVar4 != (InstanceNodeAbstract *)0x0) && (pIVar5 != (InstanceContext *)0x0)) {
		InstanceContext::thunk_FUN_0005a4c0(pIVar5,&VStack52,aVStack36);
		if (((uint)pIVar4[1].vtable & 0x1f) != 0) {
		ppIStack124 = (InstanceNodeAbstract **)&pIVar4[1].field2_0x8;
		do {
		fVar1 = (float)*ppIStack124;
		if ((fVar1 != 0.0) && ((*(uint *)((int)fVar1 + 0x14) & 0x200) != 0)) {
		iVar3 = *(int *)((int)fVar1 + 0x18);
		if ((*(byte *)(iVar3 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x30);
		*(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x34);
		*(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x38);
		*(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x3c);
		*(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) & 0xfffffffa;
		}
		uStack88 = *(undefined4 *)(iVar3 + 0x4c);
		fVar9 = *(float *)(iVar3 + 0x44) - local_40;
		fVar8 = *(float *)(iVar3 + 0x40) - fStack68;
		fVar10 = *(float *)(iVar3 + 0x48) - local_3c;
		fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
		if ((fVar7 * fVar7 < fVar8) && (fVar8 < fStack120)) {
		local_64 = (InstanceContext *)(*(float *)(iVar3 + 0x40) - VStack52.x);
		fStack96 = *(float *)(iVar3 + 0x44) - VStack52.y;
		fStack92 = *(float *)(iVar3 + 0x48) - VStack52.z;
		thunk_FUN_000543a0((float *)&local_64);
		if (FLOAT_0038adb8 <aVStack36[0].z * fStack92 + aVStack36[0].y * fStack96 +aVStack36[0].x * (float)local_64) {
		fStack120 = fVar8;
		local_74 = fVar1;
		}
		}
		}
		uVar6 = uVar6 + 1;
		ppIStack124 = ppIStack124 + 1;
		}
		 while (uVar6 < ((uint)pIVar4[1].vtable & 0x1f));
		if (local_74 != 0.0) {
		*(float *)(iStack104 + 0x30) = local_74;
		*(uint *)(iStack104 + 0x88) = *(uint *)(iStack104 + 0x88) & 0xfffffffd | 1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x27D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x27D::Construct(Action0x27D *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x27D;
		return;
		}
		
	*/
	return;
}

void Action0x27D::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x27D::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x27D::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x27D::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

