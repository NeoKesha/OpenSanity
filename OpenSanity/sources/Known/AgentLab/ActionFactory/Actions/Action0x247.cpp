#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x247.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x247::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x247::ExecuteFromCallContext(Action0x247 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContextRefCounter *pIVar1;
		InstanceNodeAbstract_VTable *pIVar2;
		InstanceTransform *pIVar3;
		bool bVar4;
		uint uVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceContext *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		undefined4 *local_a8;
		long lStack164;
		Vector4 VStack160;
		float fStack136;
		int iStack132;
		float fStack128;
		float fStack124;
		float fStack120;
		float fStack116;
		GetIndex *local_70;
		Method5 *local_6c;
		UpdateTime *local_68;
		Step *local_64;
		float fStack96;
		float fStack92;
		float fStack88;
		Matrix4 MStack80;
		uVar5 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar5 == 6) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar5];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = pIVar1->ctx;
		}
		}
		pIVar6 = InstanceDataList::GetNode(&pIVar7->nodes,Camera);
		local_a8 = *(undefined4 **)&pIVar6[1].field2_0x8;
		if (local_a8 != (undefined4 *)0x0) {
		local_a8 = (undefined4 *)*local_a8;
		}
		pIVar6 = InstanceDataList::GetNode(&pIVar7->nodes,Character);
		pIVar2 = pIVar6[1].vtable;
		if ((int *)pIVar2[4].UpdateTime == (int *)0x0) {
		local_70 = pIVar2[2].GetIndex;
		local_6c = pIVar2[2].Method5;
		local_68 = pIVar2[2].UpdateTime;
		local_64 = pIVar2[2].Step;
		}
		else {
		(**(code **)(*(int *)pIVar2[4].UpdateTime + 0x20))(&local_70);
		}
		pIVar3 = (pIVar7->parent).transform;
		InstanceTransform::FillMatrix(pIVar3);
		fStack96 = (pIVar3->matrix).m41;
		fStack92 = (pIVar3->matrix).m42;
		fStack88 = (pIVar3->matrix).m43;
		pIVar3 = (InstanceTransform *)local_a8[6];
		InstanceTransform::FillMatrix(pIVar3);
		fVar8 = fStack96 - (pIVar3->matrix).m41;
		fVar9 = fStack92 - (pIVar3->matrix).m42;
		fVar10 = fStack88 - (pIVar3->matrix).m43;
		fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
		if ((_DAT_003d0edc & 1) == 0) {
		DAT_003d0ed8 = (float)this->unlabelled72;
		_DAT_003d0edc = _DAT_003d0edc | 1;
		}
		if ((float)this->unlabelled32 <= fVar8) {
		if (fVar8 < (float)this->unlabelled36 || fVar8 == (float)this->unlabelled36) goto LAB_0004731a;
		fVar10 = (float)this->unlabelled36 - (float)this->unlabelled32;
		fVar9 = (float)this->unlabelled36;
		}
		else {
		fVar10 = (float)this->unlabelled36 - (float)this->unlabelled32;
		fVar9 = (float)this->unlabelled32;
		}
		DAT_003d0ed8 = (FLOAT_0038639c / fVar10) * (fVar9 - fVar8) * (float)this->unlabelled24 +DAT_003d0ed8;
		LAB_0004731a:DAT_003d0ed8 = Math::ClampFloat(DAT_003d0ed8,0.0 - (float)this->unlabelled28,(float)this->unlabelled28);
		fVar8 = (float)this->unlabelled68;
		this->unlabelled72 = (int)DAT_003d0ed8;
		iStack132 = (int)((FLOAT_003863a8 / FLOAT_0039d7e8) *((float)this->unlabelled40 + fVar8) * (float)this->unlabelled56);
		fVar9 = TwinSin(&iStack132);
		lStack164 = __ftol2((FLOAT_003863a8 / FLOAT_0039d7e8) * (fVar9 * _DAT_0039d7dc - FLOAT_0038abe0));
		fVar9 = FUN_000e2310(&lStack164);
		this->unlabelled12 = (int)(fVar9 * (float)this->unlabelled64);
		fStack136 = TwinSin(&lStack164);
		fStack136 = fStack136 * (float)this->unlabelled64;
		this->unlabelled68 = (int)(fVar8 + FLOAT_0038abdc);
		fStack128 = (float)this->unlabelled12;
		this->unlabelled16 = (int)fStack136;
		fStack120 = (float)this->unlabelled20 + DAT_003d0ed8;
		fStack116 = FLOAT_0038639c;
		pIVar3 = (InstanceTransform *)local_a8[6];
		fStack124 = fStack136;
		InstanceTransform::FillMatrix(pIVar3);
		MStack80.m11 = (pIVar3->matrix).m11;
		MStack80.m12 = (pIVar3->matrix).m12;
		MStack80.m13 = (pIVar3->matrix).m13;
		MStack80.m14 = (pIVar3->matrix).m14;
		MStack80.m21 = (pIVar3->matrix).m21;
		MStack80.m22 = (pIVar3->matrix).m22;
		MStack80.m23 = (pIVar3->matrix).m23;
		MStack80.m24 = (pIVar3->matrix).m24;
		MStack80.m31 = (pIVar3->matrix).m31;
		MStack80.m32 = (pIVar3->matrix).m32;
		MStack80.m33 = (pIVar3->matrix).m33;
		MStack80.m34 = (pIVar3->matrix).m34;
		MStack80.m41 = (pIVar3->matrix).m41;
		MStack80.m42 = (pIVar3->matrix).m42;
		MStack80.m43 = (pIVar3->matrix).m43;
		MStack80.m44 = (pIVar3->matrix).m44;
		FUN_000e3350(&MStack80,&fStack128);
		VStack160.z = 0.0;
		VStack160.w = fStack116;
		VStack160.x = 0.0 - fStack128;
		VStack160.y = 0.0 - fStack124;
		fVar8 = VStack160.y * VStack160.y + VStack160.x * VStack160.x;
		if (_DAT_0039d860 < fVar8) {
		VStack160.z = FLOAT_0038639c / SQRT(fVar8);
		fStack136 = fVar8;
		}
		VStack160.x = VStack160.x * VStack160.z;
		VStack160.y = VStack160.y * VStack160.z;
		VStack160.z = VStack160.z * 0.0;
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)&MStack80,&VStack160);
		VStack160.y = 0.0 - VStack160.y;
		VStack160.z = 0.0 - VStack160.z;
		MStack80.m11 = MStack80.m33 * VStack160.y - MStack80.m32 * VStack160.z;
		VStack160.x = 0.0 - VStack160.x;
		MStack80.m12 = MStack80.m31 * VStack160.z - MStack80.m33 * VStack160.x;
		fStack88 = MStack80.m32 * VStack160.x - MStack80.m31 * VStack160.y;
		fVar8 = fStack88 * fStack88 + MStack80.m12 * MStack80.m12 + MStack80.m11 * MStack80.m11;
		if (fVar8 <= _DAT_0039d860) {
		MStack80.m13 = 0.0;
		}
		else {
		MStack80.m13 = FLOAT_0038639c / SQRT(fVar8);
		fStack136 = fVar8;
		}
		MStack80.m11 = MStack80.m11 * MStack80.m13;
		MStack80.m12 = MStack80.m12 * MStack80.m13;
		MStack80.m13 = fStack88 * MStack80.m13;
		MStack80.m14 = 0.0;
		VStack160.w = 0.0;
		MStack80.m24 = 0.0;
		pIVar7 = (((ctx->parent).ctx)->parent).ctx;
		MStack80.m21 = VStack160.x;
		MStack80.m22 = VStack160.y;
		MStack80.m23 = VStack160.z;
		bVar4 = InstanceTransform::FUN_000e16f0((pIVar7->parent).transform,&MStack80);
		if (bVar4 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		return;
		}
		
	*/
	return;
}

void Action0x247::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x247::Dispose(Action0x247 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x247::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x247 * __fastcall Action0x247::Construct(Action0x247 *this){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_0038807c;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x247;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = (int)fVar1;
		this->unlabelled28 = (int)fVar2;
		this->unlabelled32 = 0;
		this->unlabelled36 = (int)fVar1;
		this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		this->unlabelled48 = (int)fVar1;
		this->unlabelled52 = (int)fVar1;
		this->unlabelled56 = (int)fVar1;
		this->unlabelled60 = (int)fVar1;
		this->unlabelled64 = (int)fVar1;
		this->unlabelled68 = 0;
		this->unlabelled72 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x247::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x247::GetSize(void){
		return 0x54;
		}
		
	*/
	return 0;
}

