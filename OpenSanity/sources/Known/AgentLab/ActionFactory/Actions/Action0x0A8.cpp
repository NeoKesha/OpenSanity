#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A8.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A8::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A8::Dispose(Action0x0A8 *this,byte param_1){
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A8;
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0A8::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A8::ExecuteFromCallContext(Action0x0A8 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceTransform *pIVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		InstanceNodeAbstract *pIVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float local_190;
		float local_18c;
		float local_188;
		float local_184;
		ChunkData *local_17c;
		float local_178;
		float local_174;
		float local_170;
		float local_16c;
		float local_168;
		int local_164;
		float local_160;
		float local_15c;
		undefined4 local_158;
		float local_154;
		float local_148;
		int *local_144;
		undefined2 local_140;
		undefined2 local_13e;
		float local_13c;
		uint local_138;
		undefined4 local_134;
		undefined4 local_130;
		undefined4 local_12c;
		undefined4 local_128;
		undefined4 local_124;
		float local_120;
		int local_110 [67];
		local_144 = local_110;
		local_13c = FLOAT_00393c64;
		local_170 = (float)this->unlabelled16;
		local_140 = 0;
		local_138 = local_138 & 0xfffffffe | 2;
		local_134 = 0;
		local_12c = 0;
		local_124 = 0;
		local_128 = 0;
		local_13e = 0x40;
		local_130 = 1;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		local_17c = (pIVar1->parent).chunkData;
		local_16c = (float)this->unlabelled20;
		local_168 = (float)this->unlabelled24;
		local_164 = this->unlabelled28;
		FUN_00137280((int)&local_144,(int)pIVar1);
		pIVar2 = (pIVar1->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar2->matrix).m44;
		fVar9 = (pIVar2->matrix).m43;
		fVar10 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar10;
		(pIVar2->position).z = fVar9;
		(pIVar2->position).w = fVar7;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar7 = (pIVar2->position).x;
		fVar9 = (pIVar2->position).y;
		fVar10 = (pIVar2->position).z;
		fVar8 = local_170;
		if (local_170 < 0.0) {
		fVar8 = 0.0 - local_170;
		}
		if (fVar8 <= FLOAT_003a35c8) {
		fVar8 = local_16c;
		if (local_16c < 0.0) {
		fVar8 = 0.0 - local_16c;
		}
		if (fVar8 <= FLOAT_003a35c8) {
		fVar8 = 0.0 - local_168;
		if (0.0 <= local_168) {
		fVar8 = local_168;
		}
		if (fVar8 <= FLOAT_003a35c8) {
		pIVar2 = (pIVar1->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar2->matrix).m44;
		fVar9 = (pIVar2->matrix).m43;
		fVar10 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar10;
		(pIVar2->position).z = fVar9;
		(pIVar2->position).w = fVar7;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar7 = (pIVar2->position).x;
		fVar9 = (pIVar2->position).y;
		fVar10 = (pIVar2->position).z;
		goto LAB_00162d45;
		}
		}
		}
		pIVar2 = (pIVar1->parent).transform;
		local_190 = local_170;
		local_18c = local_16c;
		local_188 = local_168;
		InstanceTransform::FillMatrix(pIVar2);
		fVar7 = (pIVar2->matrix).m31 * local_188 + (pIVar2->matrix).m21 * local_18c +(pIVar2->matrix).m11 * local_190 + fVar7;
		fVar9 = (pIVar2->matrix).m32 * local_188 + (pIVar2->matrix).m22 * local_18c +(pIVar2->matrix).m12 * local_190 + fVar9;
		fVar10 = (pIVar2->matrix).m33 * local_188 + (pIVar2->matrix).m23 * local_18c +(pIVar2->matrix).m13 * local_190 + fVar10;
		LAB_00162d45:local_170 = fVar7;
		local_16c = fVar9;
		local_168 = fVar10;
		uVar4 = FUN_0013d440((int)local_17c,&local_170,0x20,&local_144,'\0');
		local_17c = (ChunkData *)(uVar4 & 0xffff);
		uVar4 = 0;
		if (*(char *)&this->unlabelled40 == '\0') {
		if (local_17c != (ChunkData *)0x0) {
		uVar5 = 0;
		do {
		iVar3 = local_110[uVar5];
		pIVar6 = InstanceDataList::GetNode((InstanceDataList *)(iVar3 + 0xe4),Physics);
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		iVar3 = *(int *)(iVar3 + 0x18);
		if ((*(byte *)(iVar3 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x30);
		*(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x34);
		*(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x38);
		*(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x3c);
		*(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) & 0xfffffffa;
		}
		fVar11 = *(float *)(iVar3 + 0x40) - fVar7;
		fVar13 = *(float *)(iVar3 + 0x48) - fVar10;
		fVar12 = *(float *)(iVar3 + 0x44) - fVar9;
		fVar8 = fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12;
		if (fVar8 <= FLOAT_003a35c0) {
		fVar14 = 0.0;
		}
		else {
		local_174 = SQRT(fVar8);
		fVar14 = FLOAT_0038639c / local_174;
		local_178 = fVar8;
		}
		local_188 = (float)this->unlabelled32;
		local_190 = fVar11 * fVar14 * local_188;
		local_18c = fVar12 * fVar14 * local_188;
		local_188 = fVar13 * fVar14 * local_188;
		local_184 = FLOAT_0038639c;
		local_160 = 0.0;
		local_15c = 0.0;
		local_158 = 0;
		local_154 = FLOAT_0038639c;
		FUN_001e0260((int)pIVar6,&local_190,&local_160);
		}
		uVar4 = uVar4 + 1;
		uVar5 = uVar4 & 0xffff;
		}
		 while (uVar5 < local_17c);
		}
		}
		else if (local_17c != (ChunkData *)0x0) {
		uVar5 = 0;
		do {
		iVar3 = local_110[uVar5];
		local_178 = ((float)this->unlabelled36 - (float)this->unlabelled32) /(float)this->unlabelled28;
		pIVar6 = InstanceDataList::GetNode((InstanceDataList *)(iVar3 + 0xe4),Physics);
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		iVar3 = *(int *)(iVar3 + 0x18);
		if ((*(byte *)(iVar3 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x30);
		*(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x34);
		*(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x38);
		*(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x3c);
		*(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) & 0xfffffffa;
		}
		fVar12 = *(float *)(iVar3 + 0x44) - fVar9;
		fVar13 = *(float *)(iVar3 + 0x48) - fVar10;
		fVar11 = *(float *)(iVar3 + 0x40) - fVar7;
		fVar8 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
		if (fVar8 <= FLOAT_003a35c0) {
		fVar14 = 0.0;
		}
		else {
		local_174 = SQRT(fVar8);
		fVar14 = FLOAT_0038639c / local_174;
		local_148 = fVar8;
		}
		local_120 = fVar11 * local_178;
		fVar8 = (float)this->unlabelled32;
		local_18c = fVar12 * fVar14 * fVar8 + fVar12 * local_178;
		local_188 = fVar13 * fVar14 * fVar8 + fVar13 * local_178;
		local_190 = fVar8 * fVar11 * fVar14 + local_120;
		local_184 = FLOAT_0038639c;
		local_160 = 0.0;
		local_15c = FLOAT_003865d0;
		local_158 = 0;
		local_154 = FLOAT_0038639c;
		FUN_001e0260((int)pIVar6,&local_190,&local_160);
		}
		uVar4 = uVar4 + 1;
		uVar5 = uVar4 & 0xffff;
		}
		 while (uVar5 < local_17c);
		return;
		}
		return;
		}
		
	*/
	return;
}

void Action0x0A8::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A8 * __fastcall Action0x0A8::Construct(Action0x0A8 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A8;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		this->unlabelled32 = (int)fVar1;
		this->unlabelled36 = 0;
		*(undefined *)&this->unlabelled40 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x0A8::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A8::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void Action0x0A8::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A8::UnkMethod(Action0x0A8 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x95) {
		if (uVar1 == 0x94) {
		this->unlabelled32 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x82) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x83) {
		this->unlabelled20 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x84) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		}
		}
		else if (uVar1 == 0xcd) {
		this->unlabelled28 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x103) {
		*(undefined *)&this->unlabelled40 = 1;
		this->unlabelled36 = *(int *)(puVar3 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

