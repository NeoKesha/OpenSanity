#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x096.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x096::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x096::Dispose(Action0x096 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x096::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x096::ExecuteFromCallContext(Action0x096 *this,int time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *this_00;
		InstanceContext *this_01;
		InstanceTransform *pIVar2;
		Vector4 *vec;
		InstanceNodeAbstract *pIVar3;
		bool bVar4;
		int iVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		InstanceNodeCharacter *pIVar11;
		InstanceNodeCharacter *local_b8;
		Action0x096 *local_b4;
		Vector4 local_b0;
		Vector4 local_a0;
		float local_90;
		float local_8c;
		float local_88;
		float local_80;
		float local_7c;
		float local_78;
		float local_70;
		float local_6c;
		InstanceNodeAbstract *local_68;
		float local_60;
		float local_5c;
		float local_58;
		Matrix4 local_50;
		this_00 = (ctx->parent).ctx;
		local_b8 = (InstanceNodeCharacter *)0x0;
		local_b0.x = 0.0;
		local_b0.y = 0.0;
		local_b0.z = 0.0;
		local_b0.w = FLOAT_0038639c;
		local_b4 = this;
		switch(*(undefined *)&this->unlabelled12) {
		case 0xf6:InstanceNodeInstance::FUN_0016be20((InstanceNodeInstance *)this_00,&local_b0.x);
		break;
		case 0xf8:pIVar3 = (this_00->nodes).array[0xc];
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar3->field6_0x14 & 1) != 0)) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar11 = (InstanceNodeCharacter *)(this_00->nodes).array[0xc];
		if (pIVar11 == (InstanceNodeCharacter *)0x0) break;
		goto LAB_00194769;
		case 0xfb:uVar6 = InstanceContext::thunk_FUN_00054ce0(this_00,(int *)&local_b8);
		pIVar11 = local_b8;
		if ((char)uVar6 == '\0') {
		thunk_FUN_0005a580((int)this_00,&local_b0.x);
		break;
		}
		LAB_00194769:InstanceNodeCharacter::GetPosition(pIVar11,&local_b0);
		break;
		case 0xfc:thunk_FUN_0005a580((int)this_00,&local_b0.x);
		}
		iVar5 = *(int *)&(this_00->parent).field_0xc;
		if (iVar5 == 0) {
		iVar5 = 0;
		}
		else {
		iVar5 = *(int *)(time_clock + 4) - iVar5;
		}
		this_01 = (this_00->parent).ctx;
		pIVar2 = (this_01->parent).transform;
		pIVar11 = (InstanceNodeCharacter *)((float)iVar5 * TimePerTick1);
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar2->matrix).m44;
		fVar8 = (pIVar2->matrix).m43;
		fVar10 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar10;
		(pIVar2->position).z = fVar8;
		(pIVar2->position).w = fVar7;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_60 = (pIVar2->position).x;
		local_5c = (pIVar2->position).y;
		local_58 = (pIVar2->position).z;
		local_a0.x = local_b0.x - local_60;
		local_a0.y = local_b0.y - local_5c;
		uVar6 = (*(ushort *)&this->unlabelled12 & 0xf00) >> 8;
		local_a0.z = local_b0.z - local_58;
		local_b8 = pIVar11;
		if (uVar6 == 1) {
		vec = (Vector4 *)(this_00->parent).field14_0x20.matrix2.m32;
		Matrix4::FUN_000d9f80(&local_50,vec);
		local_50.m41 = vec[1].x;
		local_50.m42 = vec[1].y;
		local_50.m43 = vec[1].z;
		local_50.m44 = vec[1].w;
		local_90 = local_50.m11;
		local_8c = local_50.m12;
		local_80 = vec[1].x;
		local_7c = vec[1].y;
		local_78 = vec[1].z;
		this = local_b4;
		pIVar11 = local_b8;
		}
		else {
		local_50.m13 = local_88;
		if (uVar6 == 2) {
		pIVar2 = (this_01->parent).transform;
		InstanceTransform::FillMatrix(pIVar2);
		local_90 = (pIVar2->matrix).m11;
		local_50.m13 = (pIVar2->matrix).m13;
		local_8c = (pIVar2->matrix).m12;
		this = local_b4;
		pIVar11 = local_b8;
		}
		}
		fVar7 = local_50.m13 * local_a0.z + local_8c * local_a0.y + local_90 * local_a0.x;
		fVar10 = fVar7 * local_90;
		fVar8 = local_8c * fVar7;
		fVar7 = local_50.m13 * fVar7;
		local_b4 = (Action0x096 *)(fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10);
		if (FLOAT_00386608 < SQRT((float)local_b4)) {
		if ((float)local_b4 <= _DAT_004962e0) {
		fVar9 = 0.0;
		}
		else {
		fVar9 = FLOAT_0038639c / SQRT((float)local_b4);
		}
		local_b8 = (InstanceNodeCharacter *)SQRT((float)local_b4);
		fVar1 = (float)this->unlabelled16;
		local_a0.x = fVar9 * fVar10 * fVar1 * (float)pIVar11 + local_60;
		local_a0.z = fVar7 * fVar9 * fVar1 * (float)pIVar11 + local_58;
		local_a0.w = FLOAT_0038639c;
		local_a0.y = fVar8 * fVar9 * fVar1 * (float)pIVar11 + local_5c;
		if (0.0 < (float)this->unlabelled20) {
		fVar7 = (local_a0.z - local_78) * local_50.m13 + (local_a0.y - local_7c) * local_8c +(local_a0.x - local_80) * local_90;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if ((float)this->unlabelled20 <= fVar7 && fVar7 != (float)this->unlabelled20) {
		return;
		}
		}
		local_70 = local_a0.x;
		local_6c = local_a0.y;
		local_68 = (InstanceNodeAbstract *)local_a0.z;
		bVar4 = InstanceTransform::SetupPosition((this_01->parent).transform,&local_a0);
		if (bVar4 != false) {
		InstanceContext::RegisterCtxPtrToList(this_01);
		}
		if ((*(byte *)((int)&this->unlabelled12 + 1) & 0x10) != 0) {
		FUN_00171f20((int)this_01,&local_b0.x,1.0,0.0,90.0);
		}
		pIVar3 = (this_00->nodes).array[8];
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		*(float *)&pIVar3[3].field2_0x8 = local_70;
		pIVar3[3].time = (uint)local_6c;
		pIVar3[3].field5_0x10 = local_68;
		pIVar3[3].field6_0x14 = (uint)FLOAT_0038639c;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x096::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x096 * __fastcall Action0x096::Construct(Action0x096 *this){
		ushort uVar1;
		uVar1 = *(ushort *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x096;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		*(ushort *)&this->unlabelled12 = uVar1 & 0xe2ff | 0x2ff;
		return this;
		}
		
	*/
	return;
}

int Action0x096::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x096::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x096::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x096::UnkMethod(Action0x096 *this,int *param_1){
		byte *pbVar1;
		short sVar2;
		char cVar3;
		short *psVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		psVar4 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar2 = *psVar4;
		if (sVar2 == 0x20) {
		this->unlabelled20 = *(int *)(psVar4 + 2);
		}
		else if (sVar2 == 0x39) {
		this->unlabelled16 = *(int *)(psVar4 + 2);
		}
		else if ((sVar2 == -1) && (*(char *)(psVar4 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar4 + 2)) {
		case 3:*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 & 0xf1ff | 0x100;
		break;
		case 4:*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 & 0xf2ff | 0x200;
		break;
		case 0x17:pbVar1 = (byte *)((int)&this->unlabelled12 + 1);
		*pbVar1 = *pbVar1 | 0x10;
		break;
		case 0x1c:*(undefined *)&this->unlabelled12 = 0xfb;
		break;
		case 0x1d:*(undefined *)&this->unlabelled12 = 0xfc;
		break;
		case 0x74:*(undefined *)&this->unlabelled12 = 0xf8;
		break;
		case 0x75:*(undefined *)&this->unlabelled12 = 0xf7;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

