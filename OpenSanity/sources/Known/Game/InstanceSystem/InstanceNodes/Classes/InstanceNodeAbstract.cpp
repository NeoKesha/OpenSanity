#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Time/UnkTimePack.h"
#include "headers/Unknown/Families/Families0X/Family2/UnkFamily2Base.h"
void InstanceNodeAbstract::UnkMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeAbstract::UnkMethod1(undefined *this){
		int *piVar1;
		uint ctx;
		piVar1 = *(int **)this;
		if (piVar1 != (int *)0x0) {
		ctx = piVar1[1];
		ctx = (ctx - 1 ^ ctx) & 0xffffff ^ ctx;
		piVar1[1] = ctx;
		if (((ctx & 0xffffff) == 0) && ((ctx & 0x1000000) != 0)) {
		if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)*piVar1)(1);
		}
		*piVar1 = 0;
		}
		if ((piVar1[1] & 0xffffffU) == 0) {
		::Dispose(this,**(void ***)this);
		}
		}
		return;
		}
		
	*/
	return;
}

InstanceNodeAbstract* InstanceNodeAbstract::Contruct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __fastcall InstanceNodeAbstract::Contruct(InstanceNodeAbstract *this){
		this->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Abstract;
		this->ctx = (InstanceContext *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xa = 0;
		this->time = 0;
		this->field5_0x10 = (InstanceNodeAbstract *)0x0;
		this->field6_0x14 = 0;
		return this;
		}
		
	*/
	return null;
}

void InstanceNodeAbstract::UnrollVtable() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeAbstract::UnrollVtable(InstanceNodeAbstract *this){
		this->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::SetCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::SetCtx(InstanceNodeAbstract *this,InstanceContext *ctx){
		if (this->ctx == (InstanceContext *)0x0) {
		this->ctx = ctx;
		}
		return;
		}
		
	*/
	return;
}

bool InstanceNodeAbstract::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeAbstract::Step(InstanceNodeAbstract *this,UnkTimePack *time){
		if ((*(byte *)&time->flags & 1) != 0) {
		if (((~*(byte *)&this->field2_0x8 & 1) == 0) && (this->time != 0)) {
		*(byte *)&this->field2_0x8 = *(byte *)&this->field2_0x8 & 0xfe;
		return true;
		}
		this->time = time->time1;
		}
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeAbstract::FUN_0015dab0(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0015dab0(InstanceNodeAbstract *this,InstanceContext *param_1){
		InstanceNodeAbstract_VTable *pIVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		this[5].field6_0x14 = this[5].field6_0x14 & 0x80230000;
		pIVar1 = this[6].vtable;
		this[8].field5_0x10 = (InstanceNodeAbstract *)0x0;
		this[8].field6_0x14 = 0;
		this[6].ctx = param_1;
		this[7].vtable = (InstanceNodeAbstract_VTable *)fVar2;
		*(float *)&this[7].field2_0x8 = fVar2;
		this[7].time = 0;
		this[7].field6_0x14 = (uint)fVar2;
		this[8].ctx = (InstanceContext *)0x0;
		*(undefined4 *)&this[8].field2_0x8 = 0;
		this[6].field5_0x10 = (InstanceNodeAbstract *)fVar2;
		this[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar1 & 0xfc7ffbc7 | 1);
		this[2].field5_0x10 = (InstanceNodeAbstract *)0x0;
		this[2].field6_0x14 = (uint)fVar2;
		this[3].vtable = (InstanceNodeAbstract_VTable *)0x0;
		this[3].ctx = (InstanceContext *)fVar2;
		this[8].time = (param_1->nodes).array[0x10][1].time;
		this[5].field5_0x10 = (InstanceNodeAbstract *)0xffffffff;
		this[9].vtable = (InstanceNodeAbstract_VTable *)0x0;
		*(undefined4 *)&this[5].field2_0x8 = 0;
		this[5].time = 0;
		pIVar1 = this[6].vtable;
		*(undefined2 *)&this[9].ctx = 0xffff;
		*(undefined *)((int)&this[9].ctx + 2) = 0xff;
		this[6].time = 0;
		*(undefined4 *)&this[6].field2_0x8 = 0;
		this[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar1 & 0xff887c3f | 0x87800);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0015dc10(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0015dc10(InstanceNodeAbstract *this,float param_1){
		float *pfVar1;
		bool bVar2;
		bVar2 = param_1 != FLOAT_00386394;
		this[6].field6_0x14 = (uint)param_1;
		if (bVar2) {
		this[5].field6_0x14 = this[5].field6_0x14 | 0x20000;
		pfVar1 = &((this[6].ctx)->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 4);
		return;
		}
		this[5].field6_0x14 = this[5].field6_0x14 & 0xfffdffff;
		pfVar1 = &((this[6].ctx)->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffffffb);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0015eb60(float* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0015eb60(InstanceNodeAbstract *this,float *param_1,float *param_2){
		int iVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceTransform *transform;
		uint *puVar3;
		float fVar4;
		float local_60;
		float local_5c;
		float local_58;
		float local_54;
		Matrix4 local_50;
		switch(this[5].field6_0x14 & 0xf) {
		case 1:case 2:case 3:case 4:case 5:case 8:local_60 = *param_1;
		local_5c = param_1[1];
		local_58 = param_1[2];
		puVar3 = InstanceContext::FUN_000f7220(((this[6].ctx)->parent).ctx);
		iVar1 = *(int *)&((this[6].ctx)->parent).field_0xc;
		if (iVar1 == 0) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = (float)(puVar3[1] - iVar1) * TimePerTick1;
		}
		pIVar2 = ((this[6].ctx)->nodes).array[0x10];
		*(float *)&pIVar2[1].field2_0x8 = *(float *)&pIVar2[1].field2_0x8 + local_60 * fVar4;
		pIVar2[1].time = (uint)((float)pIVar2[1].time + local_5c * fVar4);
		pIVar2[1].field5_0x10 =(InstanceNodeAbstract *)((float)pIVar2[1].field5_0x10 + local_58 * fVar4);
		return;
		case 9:case 10:case 0xb:local_60 = *param_2;
		local_5c = param_2[1];
		local_58 = param_2[2];
		local_54 = param_2[3];
		transform = ((((this[6].ctx)->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_50.m11 = (transform->matrix).m11;
		local_50.m12 = (transform->matrix).m12;
		local_50.m13 = (transform->matrix).m13;
		local_50.m14 = (transform->matrix).m14;
		local_50.m21 = (transform->matrix).m21;
		local_50.m22 = (transform->matrix).m22;
		local_50.m23 = (transform->matrix).m23;
		local_50.m24 = (transform->matrix).m24;
		local_50.m31 = (transform->matrix).m31;
		local_50.m32 = (transform->matrix).m32;
		local_50.m33 = (transform->matrix).m33;
		local_50.m34 = (transform->matrix).m34;
		local_50.m41 = (transform->matrix).m41;
		local_50.m42 = (transform->matrix).m42;
		local_50.m43 = (transform->matrix).m43;
		local_50.m44 = (transform->matrix).m44;
		Matrix4::FUN_000d4180(&local_50);
		thunk_FUN_00025aa0(&local_50,(undefined (*) [16])&local_60);
		FUN_001e05a0(this[8].field6_0x14,param_1,&local_60);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_00172f90(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_00172f90(InstanceNodeAbstract *this,float param_1){
		InstanceContext *pIVar1;
		uint uVar2;
		InstanceNodeAbstract *this_00;
		int *piVar3;
		BoundingBox local_160;
		int *local_134;
		undefined2 local_130;
		undefined2 local_12e;
		float local_12c;
		uint local_128;
		undefined4 local_124;
		undefined4 local_120;
		undefined4 local_11c;
		undefined4 local_118;
		undefined4 local_114;
		int local_110 [67];
		pIVar1 = this->ctx;
		local_160.v1.x = (pIVar1->parent).field14_0x20.matrix2.m11;
		local_160.v1.y = (pIVar1->parent).field14_0x20.matrix2.m12;
		local_160.v1.z = (pIVar1->parent).field14_0x20.matrix2.m13;
		local_160.v1.w = (pIVar1->parent).field14_0x20.matrix2.m14;
		local_160.v2.x = (pIVar1->parent).field14_0x20.matrix2.m21;
		local_160.v2.y = (pIVar1->parent).field14_0x20.matrix2.m22;
		local_160.v2.z = (pIVar1->parent).field14_0x20.matrix2.m23;
		local_160.v2.w = (pIVar1->parent).field14_0x20.matrix2.m24;
		if (param_1 <= FLOAT_00386394) {
		BoundingBox::Expand(&local_160,0.5);
		}
		else {
		local_160.v2.x = (local_160.v2.x + local_160.v1.x) * FLOAT_00386ab4;
		local_160.v2.y = (local_160.v2.y + local_160.v1.y) * FLOAT_00386ab4;
		local_160.v2.z = (local_160.v2.z + local_160.v1.z) * FLOAT_00386ab4;
		local_160.v1.x = local_160.v2.x - param_1;
		local_160.v1.y = local_160.v2.y - param_1;
		local_160.v1.z = local_160.v2.z - param_1;
		local_160.v2.x = local_160.v2.x + param_1;
		local_160.v2.y = local_160.v2.y + param_1;
		local_160.v2.z = local_160.v2.z + param_1;
		local_160.v2.w = local_160.v1.w;
		}
		local_128 = local_128 & 0xfffffffe | 2;
		local_134 = local_110;
		local_130 = 0;
		local_12e = 0x40;
		local_12c = FLOAT_00393cf0;
		local_124 = 0x8010;
		local_120 = 1;
		local_11c = 0;
		local_114 = 0;
		local_118 = 0;
		FUN_00137280((int)&local_134,(int)this->ctx);
		uVar2 = ChunkData::FUN_0013e2c0((this->ctx->parent).chunkData,(undefined4 *)&local_160,DAT_003a3518,&local_134);
		if ((short)uVar2 != 0) {
		piVar3 = local_110;
		uVar2 = uVar2 & 0xffff;
		do {
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(*piVar3 + 0xe4),Instance);
		(*this_00->vtable[2].Step)(this_00,(UnkTimePack *)this->ctx);
		piVar3 = piVar3 + 1;
		uVar2 = uVar2 - 1;
		}
		 while (uVar2 != 0);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_00175d40(int param_1, int param_2, InstanceContext* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_00175d40(InstanceNodeAbstract *this,int param_1,int param_2,InstanceContext *param_3){
		int iVar1;
		int iVar2;
		int iVar3;
		uint uVar4;
		float fVar5;
		InstanceContext *pIVar6;
		this[7].field6_0x14 = param_1;
		pIVar6 = (InstanceContext *)FUN_000d4460(2.0,8.0);
		this[8].ctx = pIVar6;
		if ((*(uint *)(param_1 + 0x3c) & 0x3000000) == 0) {
		fVar5 = FLOAT_003a3614 * FLOAT_003863a0;
		*(char *)&this[6].field5_0x10 = (char)*(uint *)(param_1 + 0x3c);
		*(undefined *)((int)&this[6].field5_0x10 + 1) = *(undefined *)(param_1 + 0x3d);
		this[6].field6_0x14 = *(uint *)(param_1 + 8);
		iVar1 = *(int *)(param_1 + 0xc);
		iVar2 = *(int *)(param_1 + 0x10);
		iVar3 = *(int *)(param_1 + 0x14);
		this[6].field5_0x10 = (InstanceNodeAbstract *)((uint)this[6].field5_0x10 & 0xdfffffff);
		this[1].ctx = (InstanceContext *)(0.0 - (float)iVar1 * fVar5);
		this[1].vtable = (InstanceNodeAbstract_VTable *)((float)iVar2 * fVar5);
		*(float *)&this[1].field2_0x8 = (float)iVar3 * fVar5;
		this[7].vtable = *(InstanceNodeAbstract_VTable **)(param_1 + 0x40);
		*(undefined *)((int)&this[6].field5_0x10 + 2) = *(undefined *)(param_1 + 0x3e);
		}
		this[8].vtable = *(InstanceNodeAbstract_VTable **)(param_2 + 4);
		this[8].field5_0x10 = (InstanceNodeAbstract *)((uint)this[8].field5_0x10 & 0xfffffffb | 8);
		uVar4 = (**(code **)(*(int *)(param_3->parent).field14_0x20.matrix2.m42 + 0x2c))();
		this[8].field5_0x10 =(InstanceNodeAbstract *)((uint)this[8].field5_0x10 ^ ((uVar4 & 0xff) << 4 ^ (uint)this[8].field5_0x10) & 0x10);
		InstanceContext::FUN_001703a0((InstanceContext *)this,(InstanceNodeAbstract *)param_3);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0017ad40(int param_1, int param_2, InstanceContext* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0017ad40(InstanceNodeAbstract *this,int param_1,int param_2,InstanceContext *param_3){
		ushort *puVar1;
		byte *pbVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		int this_00;
		InstanceContext *pIVar6;
		InstanceTransform *pIVar7;
		InstanceNodeAbstract *pIVar8;
		Matrix4 *matrix;
		if (*(int *)&this[9].field2_0x8 != 0) {
		if ((*(uint *)(*(int *)&this[9].field2_0x8 + 0x6c) & 0x2000) != 0) {
		*(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x2000;
		}
		*(uint *)(param_1 + 0x70) =*(uint *)(param_1 + 0x70) | *(uint *)(*(int *)&this[9].field2_0x8 + 0x70);
		}
		*(int *)&this[9].field2_0x8 = param_1;
		this[0xb].ctx = *(InstanceContext **)(param_2 + 4);
		this_00 = *(int *)&this[9].field2_0x8;
		*(undefined2 *)&this[0xb].vtable = 0;
		switch(*(uint *)(this_00 + 0x68) >> 0x1c & 7) {
		case 0:FUN_00175700(this_00,&this[10].time,&this[10].field5_0x10,&this[10].field6_0x14,(int *)&this[9].time,(int *)&this[9].field5_0x10,(int *)&this[9].field6_0x14);
		this[10].vtable = (InstanceNodeAbstract_VTable *)this[9].time;
		fVar3 = FLOAT_0038639c;
		this[10].ctx = (InstanceContext *)this[9].field5_0x10;
		*(uint *)&this[10].field2_0x8 = this[9].field6_0x14;
		puVar1 = (ushort *)((int)&this[0xb].vtable + 2);
		*puVar1 = *puVar1 ^ (byte)(*(char *)(*(int *)&this[9].field2_0x8 + 0x6c) << 4 ^*(byte *)((int)&this[0xb].vtable + 2)) & 0x70;
		this[6].vtable = (InstanceNodeAbstract_VTable *)(fVar3 / (float)(param_3->nodes).array[3]);
		break;
		case 1:pbVar2 = (byte *)((int)&this[0xb].vtable + 2);
		*pbVar2 = *pbVar2 | 2;
		FUN_00178710(this,(int)param_3);
		break;
		case 2:FUN_00178a40(this,(int)param_3);
		break;
		case 3:FUN_00178980(this,(int)param_3);
		break;
		case 4:FUN_001761b0((int)this,(int)param_3);
		}
		if (*(char *)(*(int *)&this[9].field2_0x8 + 0x30) == -1) {
		pIVar6 = (param_3->parent).ctx;
		if (pIVar6->field27_0xe0 != 0) {
		pIVar8 = InstanceDataList::GetNode((InstanceDataList *)(pIVar6->field27_0xe0 + 0xe4),ObjectLink);
		if (pIVar8[4].field5_0x10 == (InstanceNodeAbstract *)0x0) {
		matrix = (Matrix4 *)0x0;
		}
		else {
		matrix = (Matrix4 *)FUN_000f8310((int)pIVar8[4].field5_0x10,(undefined4 *)pIVar6);
		}
		fVar3 = matrix->m44;
		pIVar8 = (InstanceNodeAbstract *)matrix->m43;
		fVar4 = matrix->m42;
		*(float *)&this[3].field2_0x8 = matrix->m41;
		this[3].time = (uint)fVar4;
		this[3].field5_0x10 = pIVar8;
		this[3].field6_0x14 = (uint)fVar3;
		Vector4::FUN_000db0d0((Vector4 *)(this + 4),matrix);
		InstanceNodeInstanceD::FUN_00179e00((InstanceNodeInstanceD *)this,param_2,(int *)param_3);
		return;
		}
		pIVar7 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar3 = (pIVar7->matrix).m44;
		fVar4 = (pIVar7->matrix).m43;
		fVar5 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar5;
		(pIVar7->position).z = fVar4;
		(pIVar7->position).w = fVar3;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		*(float *)&this[3].field2_0x8 = (pIVar7->position).x;
		this[3].time = (uint)(pIVar7->position).y;
		this[3].field5_0x10 = (InstanceNodeAbstract *)(pIVar7->position).z;
		this[3].field6_0x14 = (uint)(pIVar7->position).w;
		pIVar7 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&pIVar7->rotation,&pIVar7->matrix);
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffff5);
		}
		this[4].vtable = (InstanceNodeAbstract_VTable *)(pIVar7->rotation).x;
		this[4].ctx = (InstanceContext *)(pIVar7->rotation).y;
		*(float *)&this[4].field2_0x8 = (pIVar7->rotation).z;
		this[4].time = (uint)(pIVar7->rotation).w;
		}
		InstanceNodeInstanceD::FUN_00179e00((InstanceNodeInstanceD *)this,param_2,(int *)param_3);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0017ca40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0017ca40(InstanceNodeAbstract *this){
		InstanceContext *pIVar1;
		pIVar1 = this[0xb].ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		if (((uint)(pIVar1->parent).field14_0x20.field29_0x80 >> 0x1e & 1) != 0) {
		InstanceDataList::GetNode(&this->ctx->nodes,OGI);
		(*((pIVar1->parent).vtable)->Method2)(pIVar1);
		}
		pIVar1 = this[0xb].ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&pIVar1->field_0xb8);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&pIVar1->field_0xb4);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(pIVar1->parent).chunkData);
		(pIVar1->parent).vtable = (InstanceContext_VTable *)&UnkFamily3_VT_Abstract;
		VirtualPool::FreeMemory(pIVar1);
		}
		}
		this[0xb].ctx = (InstanceContext *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_00163080() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_00163080(InstanceNodeAbstract *this){
		char cVar1;
		uint uVar2;
		void *this_00;
		if (((uint)this[6].vtable & 0x400) == 0) {
		uVar2 = this[5].field6_0x14;
		this[6].vtable = (InstanceNodeAbstract_VTable *)((uint)this[6].vtable | 0x400);
		cVar1 = *(char *)((int)&this[9].ctx + 2);
		*(undefined2 *)&this[9].ctx = 0xffff;
		this[5].field6_0x14 = uVar2 & 0xffffefff;
		if (cVar1 != -1) {
		this_00 = (void *)FUN_001384c0((int)((((this[6].ctx)->parent).ctx)->parent).chunkData);
		FUN_001612f0(this_00,(int)this);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_00168860() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_00168860(InstanceNodeAbstract *this){
		void *this_00;
		uint uVar1;
		if (((uint)this[6].vtable & 0x400) != 0) {
		this_00 = (void *)FUN_001384c0((int)((((this[6].ctx)->parent).ctx)->parent).chunkData);
		this[6].vtable = (InstanceNodeAbstract_VTable *)((uint)this[6].vtable & 0xfffffbff);
		uVar1 = this[5].field6_0x14 & 0xf;
		if (uVar1 < 9) {
		FUN_0015d5d0((int)this_00,(int)this);
		this[5].field6_0x14 = this[5].field6_0x14 | 0x1000;
		}
		else if (this[8].field6_0x14 == 0) {
		FUN_00163220((int)this,uVar1);
		}
		if (*(char *)((int)&this[9].ctx + 2) != -1) {
		FUN_0015d610(this_00,(int)this);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0016eb3f(UnkFamily2Base* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0016eb3f(InstanceNodeAbstract *this,UnkFamily2Base *param_1){
		if ((int *)this[0xb].time != (int *)0x0) {
		(**(code **)(*(int *)this[0xb].time + 0x10))();
		if ((undefined4 *)this[0xb].time != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this[0xb].time)(1);
		}
		}
		this[0xb].time = (uint)param_1;
		(*(code *)param_1->vtable->field1_0x4)();
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0016ec40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0016ec40(InstanceNodeAbstract *this){
		int iVar1;
		if (*(int *)&this[0xc].field2_0x8 != 0) {
		FUN_00187f60(*(int *)&this[0xc].field2_0x8);
		}
		if (this[0xc].time != 0) {
		iVar1 = *(int *)(this[0xc].time + 0xd4);
		if (iVar1 != 0) {
		FUN_001e3220(iVar1);
		return;
		}
		return;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_001750f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_001750f0(InstanceNodeAbstract *this){
		if (*(void **)&this[0xb].field2_0x8 != (void *)0x0) {
		VirtualPool::FreeMemory(*(void **)&this[0xb].field2_0x8);
		*(undefined4 *)&this[0xb].field2_0x8 = 0;
		}
		return;
		}
		
	*/
	return;
}

uint InstanceNodeAbstract::FUN_00175fa0(uint param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceNodeAbstract::FUN_00175fa0(InstanceNodeAbstract *this,uint param_1,float param_2){
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		uVar3 = 0;
		uVar1 = *(uint *)&this[5].field2_0x8 & 0xf;
		if (uVar1 != 0) {
		do {
		if (((uint)(&this->vtable)[uVar3]->DisposeSomething & 7) == (param_1 & 0xff)) {
		fVar2 = param_2 + *(float *)(&this[1].field2_0x8 + uVar3 * 2);
		fVar4 = Math::ClampFloat(fVar2,0.0,1.0);
		*(float *)(&this[1].field2_0x8 + (uVar3 & 0xff) * 2) = fVar4;
		return CONCAT31((int3)((uint)fVar2 >> 8),1);
		}
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < uVar1);
		}
		return 0;
		}
		
	*/
	return 0;
}

uint InstanceNodeAbstract::FUN_00177d20(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeAbstract::FUN_00177d20(InstanceNodeAbstract *this,uint *param_1){
		void *pvVar1;
		undefined4 extraout_ECX;
		undefined4 uVar2;
		int extraout_ECX_00;
		uint uVar3;
		uint uVar4;
		pvVar1 = *(void **)&this[0xb].field2_0x8;
		if (pvVar1 == (void *)0x0) {
		pvVar1 = VirtualPool::AllocateMemory(0x90);
		if (pvVar1 == (void *)0x0) {
		uVar2 = 0;
		}
		else {
		pvVar1 = (void *)FUN_00175e90((int)pvVar1);
		uVar2 = extraout_ECX;
		}
		*(undefined4 *)&this[0xb].field2_0x8 = uVar2;
		}
		uVar4 = *(uint *)(*(int *)&this[0xb].field2_0x8 + 0x80) & 0xf;
		if (uVar4 != 8) {
		pvVar1 = (void *)FUN_00170450(*(int *)&this[0xb].field2_0x8,*param_1 & 7);
		if ((char)pvVar1 == '\0') {
		*(uint **)(extraout_ECX_00 + uVar4 * 4) = param_1;
		uVar4 = *(uint *)(extraout_ECX_00 + 0x80);
		uVar3 = (uVar4 + 1 ^ uVar4) & 0xf ^ uVar4;
		*(uint *)(extraout_ECX_00 + 0x80) = uVar3;
		return uVar4 & 0xffffff00 | uVar3 & 0xf;
		}
		}
		return CONCAT31((int3)((uint)pvVar1 >> 8),0xff);
		}
		
	*/
	return 0;
}

void InstanceNodeAbstract::FUN_0017c840(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0017c840(InstanceNodeAbstract *this,int param_1,int param_2){
		UnkFamily3FA *this_00;
		InstanceContext *pIVar1;
		int unaff_retaddr;
		pIVar1 = this[0xb].ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		if (((uint)(pIVar1->parent).field14_0x20.field29_0x80 >> 0x1e & 1) != 0) {
		InstanceDataList::GetNode(&this->ctx->nodes,OGI);
		(*((pIVar1->parent).vtable)->Method2)(pIVar1);
		}
		pIVar1 = this[0xb].ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&pIVar1->field_0xb8);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&pIVar1->field_0xb4);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(pIVar1->parent).chunkData);
		(pIVar1->parent).vtable = (InstanceContext_VTable *)&UnkFamily3_VT_Abstract;
		VirtualPool::FreeMemory(pIVar1);
		}
		}
		this_00 = (UnkFamily3FA *)VirtualPool::AllocateMemory(0xe0);
		if (this_00 == (UnkFamily3FA *)0x0) {
		pIVar1 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (InstanceContext *)UnkFamily3FA::Construct(this_00,this);
		}
		this[0xb].ctx = pIVar1;
		FUN_00175d40((InstanceNodeAbstract *)pIVar1,unaff_retaddr,param_1,(InstanceContext *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0016ebf0(byte param_1, byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0016ebf0(InstanceNodeAbstract *this,undefined param_1,undefined param_2,undefined4 param_3){
		*(undefined *)&this[0xf].ctx = param_1;
		*(undefined *)((int)&this[0xf].ctx + 1) = param_2;
		*(undefined4 *)&this[0xf].field2_0x8 = param_3;
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0016ffc0(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0016ffc0(InstanceNodeAbstract *this,char param_1){
		InstanceNodeObjectLink *this_00;
		if (param_1 == '\0') {
		this_00 = InstanceNodeObjectLink::Build(*(int *)(this[5].time + 4));
		InstanceNodeObjectLink::FUN_000fc600(this_00,2);
		}
		this[4].time = this[4].time & 0xffffdfff;
		this[4].field5_0x10 = (InstanceNodeAbstract *)0x0;
		this[4].field6_0x14 = 0;
		this[5].ctx = (InstanceContext *)0x0;
		this[5].field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::FUN_0016ec70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::FUN_0016ec70(InstanceNodeAbstract *this){
		this[5].field5_0x10 = (InstanceNodeAbstract *)((uint)this[5].field5_0x10 & 0xffffdfff);
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::DisposeSomething() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeAbstract::DisposeSomething(undefined *this){
		UnkMethod1((undefined *)&this);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeAbstract::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeAbstract::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::UpdateTime(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeAbstract::UpdateTime(InstanceNodeAbstract *this,UnkTimePack *time){
		this->time = time->time1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::EmptyFunction_27() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeAbstract::Dispose(InstanceNodeAbstract *this,byte param_1){
		this->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeAbstract::UnrollVtable_29(InstanceNodeAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeAbstract::UnrollVtable(InstanceNodeAbstract *param_1){
		param_1->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Abstract;
		return;
		}
		
	*/
	return;
}

