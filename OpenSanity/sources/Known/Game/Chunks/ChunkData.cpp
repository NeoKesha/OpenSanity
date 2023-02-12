#include "headers/Known/Game/Chunks/ChunkData.h"

#include "headers/SortLater/LightController.h"
#include "headers/Unknown/Families/Families1X/Family14/UnkFamily14Base.h"
#include "headers/Known/Time/Clock.h"
#include "headers/SortLater/CollisionData.h"
#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/SortLater/AutoClass5.h"
#include "headers/Known/Game/Chunks/ChunkList.h"
#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Unknown/AutoClasses/AutoClass4.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/SortLater/AutoClass14.h"
#include "headers/Known/Game/InstanceSystem/InstanceTransform.h"
#include "headers/Known/Time/UnkTimePack.h"
ChunkDataRefCounter* ChunkData::CreateRefCounter(ChunkData* other, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ChunkDataRefCounter * __thiscall ChunkData::CreateRefCounter(ChunkData *this,ChunkData *other,byte param_2){
		uint uVar1;
		ChunkDataRefCounter *pAVar2;
		if (this->chunkRef == (ChunkDataRefCounter *)0x0) {
		pAVar2 = (ChunkDataRefCounter *)VirtualPool::AllocateMemory(8);
		if (pAVar2 == (ChunkDataRefCounter *)0x0) {
		pAVar2 = (ChunkDataRefCounter *)0x0;
		}
		else {
		pAVar2->chunk = other;
		pAVar2->refCount = (param_2 & 1) << 0x18 | pAVar2->refCount & 0xfe000000U;
		}
		this->chunkRef = pAVar2;
		}
		uVar1 = this->chunkRef->refCount;
		this->chunkRef->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		return this->chunkRef;
		}
		
	*/
	return null;
}

uint ChunkData::FUN_00023d20(ChunkData* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall ChunkData::FUN_00023d20(ChunkData *param_1){
		ChunkData *this;
		uint uVar1;
		uVar1 = param_1->field1_0x4;
		uVar1 = (uVar1 - 1 ^ uVar1) & 0xffffff ^ uVar1;
		param_1->field1_0x4 = uVar1;
		if (((uVar1 & 0xffffff) == 0) && ((uVar1 & 0x1000000) != 0)) {
		this = (ChunkData *)param_1->chunkRef;
		if (this != (ChunkData *)0x0) {
		FreeMemory(this);
		VirtualPool::FreeMemory(this);
		}
		param_1->chunkRef = (ChunkDataRefCounter *)0x0;
		}
		return param_1->field1_0x4 & 0xffffff;
		}
		
	*/
	return 0;
}

void ChunkData::FUN_00111d50(AutoClass25* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_00111d50(ChunkData *this,AutoClass25 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		InstanceContext *pIVar5;
		uint uVar6;
		Matrix4 local_50;
		Matrix4::Construct1(&local_50);
		pIVar5 = (InstanceContext *)param_1->ctxPtr;
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar5 = *(InstanceContext **)&pIVar5->parent;
		}
		pIVar4 = (pIVar5->parent).transform;
		if ((*(byte *)((Vector4 *)(&pIVar4->matrix + 1) + 2) & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		((Vector4 *)(&pIVar4->matrix + 1))->x = (pIVar4->matrix).m41;
		((Vector4 *)(&pIVar4->matrix + 1))->y = fVar3;
		((Vector4 *)(&pIVar4->matrix + 1))->z = fVar2;
		((Vector4 *)(&pIVar4->matrix + 1))->w = fVar1;
		*(uint *)((Vector4 *)(&pIVar4->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar4->matrix + 1))[2].x & 0xfffffffa;
		}
		local_50.m41 = ((Vector4 *)(&pIVar4->matrix + 1))->x;
		local_50.m42 = ((Vector4 *)(&pIVar4->matrix + 1))->y;
		local_50.m43 = ((Vector4 *)(&pIVar4->matrix + 1))->z;
		local_50.m44 = ((Vector4 *)(&pIVar4->matrix + 1))->w;
		uVar6 = 0;
		if (this->field2_0x8 != 0) {
		do {
		RenderSkybox(this->field3_0xc[uVar6],param_1);
		uVar6 = uVar6 + 1;
		}
		 while (uVar6 < (uint)this->field2_0x8);
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_00123380(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_00123380(ChunkData *this,char param_1){
		undefined *puVar1;
		int iVar2;
		undefined **ppuVar3;
		short *psVar4;
		ChunkData *pCVar5;
		ChunkData *local_4;
		if (param_1 != -1) {
		ppuVar3 = &PARTICLE_INSTANCES[0].field1_0x4;
		local_4 = this;
		do {
		if ((*(char *)((int)ppuVar3 + 0x3e) == param_1) && (*ppuVar3 != (undefined *)0xffffffff)) {
		if (*ppuVar3 != (undefined *)0x1869f) {
		FUN_0012adf0((int *)ppuVar3);
		}
		PARTICLE_INSTANCE_COUNT = PARTICLE_INSTANCE_COUNT + -1;
		*ppuVar3 = (undefined *)0xffffffff;
		}
		ppuVar3 = ppuVar3 + 0x14;
		}
		 while ((int)ppuVar3 < 0x411d40);
		iVar2 = 1;
		do {
		if (((&PTR_ENV_CLASS_224_003a2a00)[iVar2] != (undefined *)0x0) &&((&PTR_ENV_CLASS_224_003a2a00)[iVar2][0x11] == param_1)) {
		pCVar5 = (ChunkData *)0x0;
		psVar4 = &DAT_004121c2;
		do {
		if (*psVar4 == iVar2) {
		local_4 = pCVar5;
		FUN_0012adf0((int *)&local_4);
		}
		psVar4 = psVar4 + 0x130;
		pCVar5 = (ChunkData *)((int)&pCVar5->chunkRef + 1);
		}
		 while ((int)psVar4 < 0x44b1c2);
		FUN_00127560((int)(&PTR_ENV_CLASS_224_003a2a00)[iVar2]);
		puVar1 = (&PTR_ENV_CLASS_224_003a2a00)[iVar2];
		if (*(int *)(puVar1 + 0x2d0) != 0) {
		DAT_0044b17c = DAT_0044b17c + -1;
		(&DAT_0044b188)[DAT_0044b17c] = *(undefined4 *)(puVar1 + 0x2d0);
		*(undefined4 *)(puVar1 + 0x2d0) = 0;
		}
		LOADED_PARTICLES_COUNT = LOADED_PARTICLES_COUNT + -1;
		(&PTR_ENV_CLASS_224_003a2a00)[iVar2] = (undefined *)0x0;
		}
		iVar2 = iVar2 + 1;
		}
		 while (iVar2 < 300);
		iVar2 = (int)param_1;
		(&DAT_00402cf0)[iVar2] = 0;
		(&DAT_00402cb0)[iVar2] = 0;
		*(undefined4 *)(PARTICLE_INSTANCES[0x2ff].field10_0x18 + iVar2 * 4 + 0x2c) = 0;
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_00137f90(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_00137f90(ChunkData *this,void *param_1){
		uint *puVar1;
		uint uVar2;
		int iVar3;
		float *pfVar4;
		UnkFamily29A local_60;
		for (puVar1 = (uint *)this->chunkLinksMatrices;
		 puVar1 != (uint *)0x0;
		 puVar1 = (uint *)puVar1[2]){
		pfVar4 = (float *)puVar1[0x24];
		if ((pfVar4 == (float *)0x0) || (((byte)*puVar1 & 0x7f) == 1)) {
		uVar2 = *puVar1 & 0xffff7fff | 0x4000;
		}
		else {
		local_60.parent.vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		FUN_00144cd0((int)&local_60);
		iVar3 = 4;
		do {
		FUN_00144d40((int)&local_60,pfVar4);
		pfVar4 = pfVar4 + 4;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		FUN_0014bfb0((int)&local_60,(undefined4 *)0x0,(undefined4 *)0x0);
		FUN_00154150(param_1,(int)&local_60);
		uVar2 = *puVar1 ^ (*(int *)((int)param_1 + 0x10c) << 0xe ^ *puVar1) & 0xc000;
		}
		*puVar1 = uVar2;
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::DisposeLight() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::DisposeLight(ChunkData *this){
		LightController *ptr;
		if ((this->sceneryFlags & 0x20000) != 0) {
		ptr = this->chunkLightController;
		if (ptr != (LightController *)0x0) {
		FUN_00101090((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this->chunkLightController = (LightController *)0x0;
		this->sceneryFlags = this->sceneryFlags & 0xfffdffff;
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FreeMemory() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ChunkData::FreeMemory(ChunkData *this){
		UnkTimePack *ptr;
		AutoClass4 *ptr_00;
		ushort *ptr_01;
		CollisionData *ptr_02;
		LightController *ptr_03;
		void *pvVar1;
		AutoClass5 *ptr_04;
		uint uVar2;
		void **ppvVar3;
		if ((*(byte *)((int)&this->sceneryFlags + 2) & 1) != 0) {
		FUN_001153e0((uint *)this->skydome);
		}
		uVar2 = 0;
		if (*(int *)&this->field_0x1b8 != 0) {
		ppvVar3 = (void **)&this->field_0x198;
		do {
		if (*ppvVar3 != (void *)0x0) {
		VirtualPool::FreeMemory(*ppvVar3);
		}
		uVar2 = uVar2 + 1;
		ppvVar3 = ppvVar3 + 1;
		}
		 while (uVar2 < *(uint *)&this->field_0x1b8);
		}
		if ((undefined4 *)this->sceneryRoot != (undefined4 *)0x0) {
		 WARNING: Load size is inaccurate (***this->sceneryRoot)(1);
		}
		ptr = this->timers;
		if (ptr != (UnkTimePack *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = this->nodes;
		if (ptr_00 != (AutoClass4 *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr_00);
		}
		if (this->array769 != (undefined *(*) [769])0x0) {
		VirtualPool::FreeMemory(this->array769);
		}
		ptr_01 = this->field31_0x164;
		if (ptr_01 != (ushort *)0x0) {
		FUN_0015d560(ptr_01);
		VirtualPool::FreeMemory(ptr_01);
		}
		ptr_02 = this->collisionData;
		if (ptr_02 != (CollisionData *)0x0) {
		FUN_001e6ed0((int)ptr_02);
		VirtualPool::FreeMemory(ptr_02);
		}
		ptr_03 = this->chunkLightController;
		if (ptr_03 != (LightController *)0x0) {
		FUN_00101090((int)ptr_03);
		VirtualPool::FreeMemory(ptr_03);
		}
		pvVar1 = this->field121_0x1d8;
		if (pvVar1 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar1);
		}
		ptr_04 = this->field122_0x1dc;
		if (ptr_04 != (AutoClass5 *)0x0) {
		FUN_000ffee0(&ptr_04->field0_0x0);
		VirtualPool::FreeMemory(ptr_04);
		}
		FUN_00123380((ChunkData *)(uint)*(byte *)&this->field123_0x1e0,*(byte *)&this->field123_0x1e0);
		pvVar1 = this->dynamicScenery;
		if (pvVar1 != (void *)0x0) {
		FUN_0014bb20((int)pvVar1);
		VirtualPool::FreeMemory(pvVar1);
		}
		TwinString::Dispose(&this->str1);
		TwinString::Dispose(&this->chunkName2);
		TwinString::Dispose(&this->chunkName);
		if (this->chunkRef != (ChunkDataRefCounter *)0x0) {
		this->chunkRef->chunk = (ChunkData *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_0013b700(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_0013b700(ChunkData *this,uint *param_1){
		if ((*param_1 >> 0x10 & 1) == 0) {
		*param_1 = *param_1 | 0x10000;
		param_1[1] = (uint)this;
		if (this->chunkLinksMatrices == (void *)0x0) {
		this->chunkLinksMatrices = param_1;
		param_1[3] = 0;
		param_1[2] = 0;
		return;
		}
		*(uint **)((int)this->chunkLinksMatrices + 0xc) = param_1;
		param_1[2] = (uint)this->chunkLinksMatrices;
		this->chunkLinksMatrices = param_1;
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_0013b790(UnkFamily14Base* param_1, Matrix4* param_2, int param_3, float param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_0013b790(ChunkData *this,UnkFamily14Base *param_1,Matrix4 *param_2,int param_3,float param_4){
		uint uVar1;
		uint *this_00;
		uint uVar2;
		int unaff_retaddr;
		int frameNumber;
		uVar1 = this->sceneryFlags;
		uVar2 = uVar1 ^ ((uint)(this->sceneryRoot != (void *)0x0) << 0x16 ^ uVar1) & 0x400000;
		this->sceneryFlags = uVar2;
		frameNumber = FRAME_NUMBER;
		if (((uVar2 & 0x400000) != 0) && ((short)uVar1 != (short)FRAME_NUMBER)) {
		*(short *)&this->sceneryFlags = (short)FRAME_NUMBER;
		if (param_4 == 0.0) {
		Matrix4::FUN_00136680(&this->field4_0x10,param_1,param_2);
		}
		else {
		Matrix4::FUN_001367f0(&this->field4_0x10,param_1,param_2);
		}
		this->field12_0x114 = frameNumber;
		 WARNING: Load size is inaccurate frameNumber = (**(code **)(*this->sceneryRoot + 8))(2,param_1,this);
		UnkFamily14Base::FUN_0014ba20(param_1,this);
		this->sceneryFlags =this->sceneryFlags ^ ((uint)(0 < frameNumber) << 0x17 ^ this->sceneryFlags) & 0x800000;
		if ((DAT_003a32a0 != '\0') && (0 < unaff_retaddr)) {
		FUN_00137f90(this,param_1);
		for (this_00 = (uint *)this->chunkLinksMatrices;
		 this_00 != (uint *)0x0;
		this_00 = (uint *)this_00[2]) {
		if ((*this_00 & 0xc000) != 0) {
		FUN_00139930(this_00,param_1,param_2,unaff_retaddr + -1);
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::RenderWorld(Matrix4* matrix, AutoClass25* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall ChunkData::RenderWorld(ChunkData *this,Matrix4 *matrix,AutoClass25 *param_2){
		UnkFamily14Base local_130;
		UnkFamily14Base::Construct(&local_130,param_2);
		DAT_00493758 = 0;
		DAT_0049375c = 0;
		_DAT_00492cc0 = 0;
		local_130.field144_0xf0.x = matrix->m41;
		local_130.field144_0xf0.y = matrix->m42;
		local_130.field144_0xf0.z = matrix->m43;
		local_130.field144_0xf0.w = matrix->m44;
		FUN_0013b790(this,&local_130,matrix,1,0.0);
		UnkFamily14A::Unroll((UnkFamily14A *)&local_130);
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_0013b930(int param_1, Matrix4* param_2, Matrix4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_0013b930(ChunkData *this,int param_1,Matrix4 *param_2,Matrix4 *param_3){
		AutoClass5 *pAVar1;
		uint *puVar2;
		Matrix4 local_b0;
		undefined local_70 [108];
		if ((((this->sceneryFlags & 0x3c0000) == 0x40000) &&(pAVar1 = this->field122_0x1dc, pAVar1 != (AutoClass5 *)0x0)) && (*pAVar1->field5_0x14 != 0)){
		if ((this->sceneryFlags & 0x800000) == 0) {
		FUN_000fff60((int *)pAVar1);
		}
		else {
		FUN_00138ed0(&this->field4_0x10,local_70);
		Matrix4::Multiply4443(param_3,param_2,&local_b0);
		FUN_00112dd0(this->field122_0x1dc,(int)local_70,&local_b0,param_3);
		}
		}
		if (0 < param_1) {
		for (puVar2 = (uint *)this->chunkLinksMatrices;
		 puVar2 != (uint *)0x0;
		puVar2 = (uint *)puVar2[2]) {
		if ((((ChunkData *)puVar2[1] != (ChunkData *)0x0) && ((*puVar2 & 0x20000) != 0)) &&((*puVar2 & 0x7f) != 0)) {
		FUN_0013b930((ChunkData *)puVar2[1],param_1 + -1,param_2,(Matrix4 *)(puVar2 + 0x14));
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_0013ba00(Matrix4* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_0013ba00(ChunkData *this,Matrix4 *param_1,Matrix4 *param_2){
		if (this->field122_0x1dc != (AutoClass5 *)0x0) {
		::EmptyFunction();
		FUN_0013b930(this,1,param_1,param_2);
		::EmptyFunction();
		}
		return;
		}
		
	*/
	return;
}

void ChunkData::DisconnectChunkLinks(ChunkData* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::DisconnectChunkLinks(ChunkData *this,ChunkData *other){
		uint *puVar1;
		uint *this_00;
		puVar1 = (uint *)this->chunkLinksMatrices;
		while (this_00 = puVar1, this_00 != (uint *)0x0) {
		puVar1 = (uint *)this_00[2];
		if (((ChunkData *)this_00[1] == other) && ((*this_00 >> 0x10 & 1) != 0)) {
		this_00[1] = 0;
		*this_00 = *this_00 & 0xfffeffff;
		FUN_00141810(this_00,&this->chunkLinksMatrices,12,8);
		}
		}
		return;
		}
		
	*/
	return;
}

int ChunkData::FUN_0013bba0(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ChunkData::FUN_0013bba0(ChunkData *this,InstanceContext *ctx){
		void *this_00;
		uint uVar1;
		int iVar2;
		uint uVar3;
		uint *puVar4;
		uint uVar5;
		uint *this_01;
		this_01 = (uint *)this->chunkLinksMatrices;
		puVar4 = (uint *)0x0;
		uVar3 = 1;
		if (this_01 != (uint *)0x0) {
		do {
		uVar5 = *this_01 >> 7 & 0x7f;
		if ((uVar3 < uVar5) && (uVar1 = FUN_00139810(this_01,(int)ctx), (char)uVar1 != '\0')) {
		uVar3 = uVar5;
		puVar4 = this_01;
		}
		this_01 = (uint *)this_01[2];
		}
		 while (this_01 != (uint *)0x0);
		if (puVar4 != (uint *)0x0) {
		iVar2 = FUN_000f8b00(ctx,(int)puVar4);
		return iVar2;
		}
		}
		 WARNING: Load size is inaccurate iVar2 = (**(code **)(*this->sceneryRoot + 0x20))(ctx,0);
		if (iVar2 != 0) {
		return (int)this;
		}
		this_00 = this->chunkLinksMatrices;
		while( true ) {
		if (this_00 == (void *)0x0) {
		return 0;
		}
		uVar3 = FUN_00139810(this_00,(int)ctx);
		if ((char)uVar3 != '\0') break;
		this_00 = *(void **)((int)this_00 + 8);
		}
		iVar2 = FUN_000f8b00(ctx,(int)this_00);
		return iVar2;
		}
		
	*/
	return 0;
}

uint ChunkData::FillCtxList(uint param_1, AutoClass14* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ChunkData::FillCtxList(ChunkData *this,uint param_1,AutoClass14 *param_2){
		ushort uVar1;
		uint in_EAX;
		uint unaff_EDI;
		if (this->array769 == (undefined *(*) [769])0x0) {
		return in_EAX & 0xffff0000;
		}
		uVar1 = param_2->field1_0x4;
		FUN_0013c180((int)this->array769,param_1,param_2);
		return (uint)(ushort)param_2->field1_0x4 - (unaff_EDI & 0xffff0000 | (uint)uVar1);
		}
		
	*/
	return 0;
}

uint ChunkData::FUN_0013d510(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall ChunkData::FUN_0013d510(ChunkData *this,InstanceContext *ctx){
		undefined4 uVar1;
		if ((ctx->parent).chunkData != (ChunkData *)0x0) {
		if ((~*(byte *)&(ctx->parent).flags & 1) != 0) {
		AutoClass2::FUN_0013ce90(&(ctx->parent).field14_0x20,ctx);
		}
		uVar1 = FUN_000f90c0(this->nodes,ctx);
		return uVar1;
		}
		return 0;
		}
		
	*/
	return 0;
}

bool ChunkData::FUN_0013d550(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkData::FUN_0013d550(ChunkData *this,InstanceContext *ctx){
		bool uVar1;
		if ((ctx->parent).chunkData == (ChunkData *)0x0) {
		uVar1 = false;
		}
		else {
		if ((~*(byte *)&(ctx->parent).flags & 1) != 0) {
		AutoClass2::FUN_0013ce90(&(ctx->parent).field14_0x20,ctx);
		}
		(ctx->parent).chunkData = (ChunkData *)0x0;
		uVar1 = (bool)FUN_000f9160(this->nodes,ctx);
		}
		if (this->nodes == (AutoClass4 *)0x0) {
		InstanceContext::AddCtxToList(ctx);
		return uVar1;
		}
		FUN_000f91a0((int)this->nodes,ctx);
		return uVar1;
		}
		
	*/
	return false;
}

void ChunkData::FUN_0013e240(char param_1, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_0013e240(ChunkData *this,char param_1,InstanceContext *ctx){
		undefined **ppuVar1;
		int iVar2;
		undefined **ppuVar3;
		(ctx->parent).chunkData = this;
		if (param_1 != '\0') {
		if (this->array769 == (undefined *(*) [769])0x0) {
		ppuVar1 = (undefined **)VirtualPool::AllocateMemory(0xc04);
		if ((undefined *(*) [769])ppuVar1 == (undefined *(*) [769])0x0) {
		ppuVar1 = (undefined **)0x0;
		}
		else {
		ppuVar3 = ppuVar1;
		for (iVar2 = 0x301;
		 iVar2 != 0;
		 iVar2 = iVar2 + -1) {
		*ppuVar3 = (undefined *)0x0;
		ppuVar3 = ppuVar3 + 1;
		}
		}
		this->array769 = (undefined *(*) [769])ppuVar1;
		}
		AutoClass2::FUN_0013e050(&(ctx->parent).field14_0x20,(int *)this->sceneryRoot,this->array769,ctx);
		}
		FUN_000f9110(this->nodes,ctx);
		return;
		}
		
	*/
	return;
}

uint ChunkData::FUN_0013e2c0(uint* param_1, uint param_2, void* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ChunkData::FUN_0013e2c0(ChunkData *this,undefined4 *param_1,uint param_2,void *param_3){
		ushort uVar1;
		uint in_EAX;
		uint unaff_EDI;
		if (this->array769 == (undefined *(*) [769])0x0) {
		return in_EAX & 0xffff0000;
		}
		uVar1 = *(ushort *)((int)param_3 + 4);
		FUN_0013dad0((int)this->array769,param_1,param_2,param_3);
		return (uint)*(ushort *)((int)param_3 + 4) - (unaff_EDI & 0xffff0000 | (uint)uVar1);
		}
		
	*/
	return 0;
}

uint ChunkData::FUN_0013e3d0(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ChunkData::FUN_0013e3d0(ChunkData *this,InstanceContext *ctx){
		uint uVar1;
		InstanceContext *ctx_00;
		ctx_00 = ctx;
		if ((ctx->parent).chunkData != (ChunkData *)0x0) {
		return (uint)ctx & 0xffffff00;
		}
		uVar1 = (byte)~*(byte *)&(ctx->parent).flags & 0xffffff01;
		ctx = (InstanceContext *)((uint)ctx & 0xffffff00 | uVar1);
		FUN_0013e240(this,(char)uVar1,ctx_00);
		return (uint)ctx;
		}
		
	*/
	return 0;
}

bool ChunkData::FUN_0013e400(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkData::FUN_0013e400(ChunkData *this,InstanceContext *ctx){
		ChunkData *pCVar1;
		byte bVar6;
		bool bVar5;
		bool bVar4;
		char cVar7;
		bool bVar3;
		bool bVar2;
		DAT_00491bc1 = 0;
		pCVar1 = (ctx->parent).chunkData;
		bVar6 = ~*(byte *)&(ctx->parent).flags;
		bVar5 = (bool)(bVar6 & 1);
		bVar2 = (bool)(bVar6 & 1);
		if (pCVar1 == (ChunkData *)0x0) {
		if (this->nodes == (AutoClass4 *)0x0) {
		bVar4 = (*((ctx->parent).vtable)->Method3)(ctx);
		return bVar4;
		}
		FUN_0013e240(this,bVar2,ctx);
		return bVar5;
		}
		DAT_00491bc1 = 1;
		if (bVar5 != false) {
		AutoClass2::FUN_0013ce90(&(ctx->parent).field14_0x20,ctx);
		}
		(ctx->parent).chunkData = (ChunkData *)0x0;
		cVar7 = FUN_000f9160(pCVar1->nodes,ctx);
		if (cVar7 != '\0') {
		DAT_00491bc1 = 0;
		if (this->nodes == (AutoClass4 *)0x0) {
		bVar3 = (*((ctx->parent).vtable)->Method3)(ctx);
		return bVar3;
		}
		FUN_0013e240(this,bVar2,ctx);
		return bVar2;
		}
		return false;
		}
		
	*/
	return false;
}

bool ChunkData::FUN_0013e4c0(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkData::FUN_0013e4c0(ChunkData *this,InstanceContext *ctx){
		undefined uVar1;
		undefined *(*puVar3) [769];
		int i;
		undefined **ppuVar2;
		if ((ctx->parent).chunkData == (ChunkData *)0x0) {
		return false;
		}
		uVar1 = FUN_000f9080(this->nodes,ctx);
		if ((*(byte *)&(ctx->parent).flags & 1) != 0) {
		if (this->array769 == (undefined *(*) [769])0x0) {
		puVar3 = (undefined *(*) [769])VirtualPool::AllocateMemory(0xc04);
		if (puVar3 == (undefined *(*) [769])0x0) {
		puVar3 = (undefined *(*) [769])0x0;
		}
		else {
		ppuVar2 = (undefined **)puVar3;
		for (i = 0x301;
		 i != 0;
		 i = i + -1) {
		*ppuVar2 = (undefined *)0x0;
		ppuVar2 = ppuVar2 + 1;
		}
		}
		this->array769 = puVar3;
		}
		AutoClass2::FUN_0013e050(&(ctx->parent).field14_0x20,(int *)this->sceneryRoot,this->array769,ctx);
		}
		return (bool)uVar1;
		}
		
	*/
	return false;
}

void ChunkData::FUN_00140380(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_00140380(ChunkData *this,uint param_1){
		SectionReaderChunk *chunkSection;
		ChunkDataRefCounter *pCVar1;
		FileResourceDescB *pFVar2;
		GameReaderStorage *gameReaderStorage;
		gameReaderStorage = GAME_READER_STORAGE[0];
		chunkSection = (SectionReaderChunk *)VirtualPool::AllocateMemory(0xc);
		if (chunkSection == (SectionReaderChunk *)0x0) {
		chunkSection = (SectionReaderChunk *)0x0;
		}
		else {
		(chunkSection->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Chunk;
		if (this == (ChunkData *)0x0) {
		chunkSection->chunkDataRef = (ChunkDataRefCounter *)0x0;
		chunkSection->someID = param_1;
		}
		else {
		pCVar1 = CreateRefCounter(this,this,0);
		chunkSection->chunkDataRef = pCVar1;
		chunkSection->someID = param_1;
		}
		}
		pFVar2 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar2 != (FileResourceDescB *)0x0) {
		pFVar2 = FileResourceDescB::Construct(pFVar2,&chunkSection->parent,0,0);
		GameReaderStorage::AddFileDesc(gameReaderStorage,&pFVar2->parent,1);
		return;
		}
		GameReaderStorage::AddFileDesc(gameReaderStorage,(FileResourceDescAbstract *)0x0,1);
		return;
		}
		
	*/
	return;
}

void ChunkData::FUN_00140540(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::FUN_00140540(ChunkData *this,byte param_1){
		AutoClass5 *ptr;
		void *ptr_00;
		UnkTimePack *ptr_01;
		CollisionData *ptr_02;
		ChunkData *this_00;
		ChunkData *extraout_ECX;
		if (param_1 != 0) {
		FUN_00140380(this,1);
		FUN_00140380(this,3);
		FUN_00140380(this,10);
		FUN_00140380(this,9);
		FUN_00140380(this,4);
		FUN_00140380(this,6);
		FUN_00140380(this,5);
		FUN_00140380(this,0);
		return;
		}
		ptr = this->field122_0x1dc;
		this_00 = (ChunkData *)(this->field16_0x124 + 1);
		this->field16_0x124 = (int)this_00;
		if (ptr != (AutoClass5 *)0x0) {
		FUN_000ffee0(&ptr->field0_0x0);
		VirtualPool::FreeMemory(ptr);
		this_00 = extraout_ECX;
		}
		this->field122_0x1dc = (AutoClass5 *)0x0;
		if (this->field123_0x1e0 != -1) {
		FUN_00123380(this_00,*(char *)&this->field123_0x1e0);
		this->field123_0x1e0 = -1;
		}
		DisposeLight(this);
		ptr_00 = this->dynamicScenery;
		if (ptr_00 != (void *)0x0) {
		FUN_0014bb20((int)ptr_00);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->dynamicScenery = (void *)0x0;
		if ((undefined4 *)this->sceneryRoot != (undefined4 *)0x0) {
		 WARNING: Load size is inaccurate (***this->sceneryRoot)(1);
		this->sceneryRoot = (void *)0x0;
		}
		ptr_01 = this->timers;
		if (ptr_01 != (UnkTimePack *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr_01);
		}
		ptr_02 = this->collisionData;
		this->timers = (UnkTimePack *)0x0;
		if (ptr_02 != (CollisionData *)0x0) {
		FUN_001e6ed0((int)ptr_02);
		VirtualPool::FreeMemory(ptr_02);
		}
		this->collisionData = (CollisionData *)0x0;
		this->field16_0x124 = this->field16_0x124 + -1;
		return;
		}
		
	*/
	return;
}

bool ChunkData::FUN_00140680(bool param_1, Clock* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkData::FUN_00140680(ChunkData *this,bool param_1,Clock *param_2){
		uint uVar1;
		switch(this->sceneryFlags >> 0x12 & 0xf) {
		case 1:if (this->timers != (UnkTimePack *)0x0) {
		Clock::FUN_000f6470(this->timers,param_2);
		}
		if ((this->nodes != (AutoClass4 *)0x0) && (this->field28_0x158 != 0)) {
		FUN_000f9810((int)this->nodes,param_2,this->timers,this->field28_0x158);
		}
		if ((param_1 == false) && (this->field31_0x164 != (ushort *)0x0)) {
		FUN_0016a950(this->field31_0x164);
		}
		if (((this->sceneryFlags & 0x400000) != 0) && (this->field121_0x1d8 != (void *)0x0)) {
		FUN_001086c0(this->field121_0x1d8,param_2);
		}
		return true;
		case 2:if (this->field16_0x124 == 0) {
		if ((this->sceneryFlags & 0x1000000) != 0) {
		FUN_00140540(this,1);
		}
		if (this->nodes != (AutoClass4 *)0x0) {
		AutoClass4::FUN_000f7710(this->nodes);
		}
		TwinString::Copy(&this->chunkName2,"Arse");
		this->sceneryFlags = this->sceneryFlags & 0xffcfffff | 0xc0000;
		return true;
		}
		break;
		case 3:if (((((this->collisionData == (CollisionData *)0x0) &&(this->chunkLightController == (LightController *)0x0)) &&(this->field122_0x1dc == (AutoClass5 *)0x0)) &&((this->field123_0x1e0 == -1 && (this->sceneryRoot == (void *)0x0)))) &&(this->timers == (UnkTimePack *)0x0)) {
		if (this->nodes == (AutoClass4 *)0x0) {
		return this->field16_0x124 != 0;
		}
		uVar1 = FUN_000f77c0((int *)this->nodes);
		if ((char)uVar1 != '\0') {
		FreePtr(this);
		FUN_00138500(this);
		}
		}
		}
		return true;
		}
		
	*/
	return false;
}

bool ChunkData::FUN_001407f0(bool param_1, bool param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ChunkData::FUN_001407f0(ChunkData *this,bool param_1,bool param_2,byte param_3){
		if (param_2 == false) {
		if (param_1 != false) {
		FUN_00140410(this,param_3);
		return true;
		}
		}
		else if ((param_3 == 0) || (this->field16_0x124 == 0)) {
		this->sceneryFlags = (param_3 & 1) << 0x18 | this->sceneryFlags & 0xfecbffff | 0x80000;
		if (param_3 == 0) {
		FUN_00140540(this,0);
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void ChunkData::RemoveFromChunkList(ChunkList* param_2, int index1, int index2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl ChunkData::RemoveFromChunkList(ChunkData *this,ChunkList *param_2,int index1,int index2){
		int iVar1;
		int iVar2;
		iVar1 = *(int *)((int)&this->chunkRef + index1);
		if (iVar1 != 0) {
		iVar2 = *(int *)((int)&this->chunkRef + index2);
		if (iVar2 == 0) {
		*(undefined4 *)(iVar1 + index2) = 0;
		*(undefined4 *)((int)&this->chunkRef + index2) = 0;
		*(undefined4 *)((int)&this->chunkRef + index1) = 0;
		return;
		}
		*(int *)(iVar1 + index2) = iVar2;
		*(undefined4 *)(index1 + *(int *)((int)&this->chunkRef + index2)) =*(undefined4 *)((int)&this->chunkRef + index1);
		*(undefined4 *)((int)&this->chunkRef + index2) = 0;
		*(undefined4 *)((int)&this->chunkRef + index1) = 0;
		return;
		}
		iVar1 = *(int *)((int)&this->chunkRef + index2);
		if (iVar1 == 0) {
		param_2->firstChunk = (ChunkData *)0x0;
		*(undefined4 *)((int)&this->chunkRef + index2) = 0;
		*(undefined4 *)((int)&this->chunkRef + index1) = 0;
		return;
		}
		*(undefined4 *)(iVar1 + index1) = 0;
		param_2->firstChunk = *(ChunkData **)((int)&this->chunkRef + index2);
		*(undefined4 *)((int)&this->chunkRef + index2) = 0;
		*(undefined4 *)((int)&this->chunkRef + index1) = 0;
		return;
		}
		
	*/
	return;
}

InstanceContext* ChunkData::FUN_001a22f0(InstanceTransform* transform) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __cdecl ChunkData::FUN_001a22f0(ChunkData *this,InstanceTransform *transform){
		bool bVar1;
		InstanceContext *ctx;
		AutoClass40 *this_00;
		InstanceNodeR *node;
		InstanceNodeR *_nodeR;
		Vector4 local_30;
		Vector4 local_20;
		float fov;
		ctx = (InstanceContext *)VirtualPool::AllocateMemory(0x170);
		if (ctx == (InstanceContext *)0x0) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		ctx = InstanceContext::Construct(ctx);
		}
		fov = ENV_FLOAT_113_SCREEN_FOV;
		if (transform != (InstanceTransform *)0x0) {
		bVar1 = InstanceTransform::thunk_FUN_000267c0((ctx->parent).transform,transform);
		if (bVar1 != false) {
		InstanceContext::RegisterCtxPtrToList(ctx);
		}
		bVar1 = InstanceTransform::thunk_FUN_00026aa0((ctx->parent).transform,transform);
		if (bVar1 != false) {
		InstanceContext::RegisterCtxPtrToList(ctx);
		}
		}
		local_30.x = FLOAT_0038a774;
		local_30.y = FLOAT_0038a774;
		local_30.z = FLOAT_0038a774;
		local_30.w = FLOAT_0038639c;
		local_20.x = FLOAT_00386608;
		local_20.y = FLOAT_00386608;
		local_20.z = FLOAT_00386608;
		local_20.w = FLOAT_0038639c;
		if (DAT_004964a0 == (AutoClass40 *)0x0) {
		this_00 = (AutoClass40 *)VirtualPool::AllocateMemory(0x20);
		if (this_00 == (AutoClass40 *)0x0) {
		DAT_004964a0 = (AutoClass40 *)0x0;
		}
		else {
		DAT_004964a0 = AutoClass40::Construct(this_00);
		}
		AutoClass40::Set(DAT_004964a0,&local_30,&local_20);
		}
		(ctx->parent).field14_0x20.field2_0x8 = DAT_004964a0;
		(ctx->parent).field14_0x20.matrix2.m31 = local_30.x;
		(ctx->parent).field14_0x20.matrix2.m32 = local_30.y;
		(ctx->parent).field14_0x20.matrix2.m33 = local_30.z;
		(ctx->parent).field14_0x20.matrix2.m34 = local_30.w;
		(ctx->parent).field14_0x20.matrix2.m41 = local_20.x;
		(ctx->parent).field14_0x20.matrix2.m42 = local_20.y;
		(ctx->parent).field14_0x20.matrix2.m43 = local_20.z;
		(ctx->parent).field14_0x20.matrix2.m44 = local_20.w;
		node = (InstanceNodeR *)VirtualPool::AllocateMemory(0x3c);
		if (node == (InstanceNodeR *)0x0) {
		_nodeR = (InstanceNodeR *)0x0;
		}
		else {
		_nodeR = InstanceNodeR::Construct(node);
		}
		_nodeR->field1_0x18 = _nodeR->field1_0x18 | 1;
		_nodeR->fov = fov;
		InstanceContext::SetNode(ctx,true,&_nodeR->parent);
		FUN_0013e3d0(this,ctx);
		return ctx;
		}
		
	*/
	return null;
}

uint ChunkData::CreateLightController() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LightController * __fastcall ChunkData::CreateLightController(ChunkData *this){
		LightController *lightController;
		if ((this->sceneryFlags & 0x20000) == 0) {
		lightController = (LightController *)VirtualPool::AllocateMemory(0x500);
		if (lightController == (LightController *)0x0) {
		lightController = (LightController *)0x0;
		}
		else {
		lightController = LightController::Construct(lightController,this);
		}
		this->chunkLightController = lightController;
		this->sceneryFlags = this->sceneryFlags | 0x20000;
		}
		return this->chunkLightController;
		}
		
	*/
	return 0;
}

void ChunkData::FreePtr(ChunkData* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ChunkData::FreePtr(ChunkData *param_1){
		AutoClass4 *ptr;
		ptr = param_1->nodes;
		if (ptr != (AutoClass4 *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr);
		}
		param_1->nodes = (AutoClass4 *)0x0;
		return;
		}
		
	*/
	return;
}

uint ChunkData::CreateSomething() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass4 * __fastcall ChunkData::CreateSomething(ChunkData *this){
		AutoClass4 *pAVar1;
		if (this->nodes == (AutoClass4 *)0x0) {
		pAVar1 = (AutoClass4 *)VirtualPool::AllocateMemory(0x68);
		if (pAVar1 != (AutoClass4 *)0x0) {
		pAVar1 = AutoClass4::Construct(pAVar1);
		this->nodes = pAVar1;
		return pAVar1;
		}
		this->nodes = (AutoClass4 *)0x0;
		}
		return this->nodes;
		}
		
	*/
	return 0;
}

AutoClass5* ChunkData::FUN_00138280(int num) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass5 * __thiscall ChunkData::FUN_00138280(ChunkData *this,int num){
		AutoClass5 *pAVar1;
		if (this->field122_0x1dc == (AutoClass5 *)0x0) {
		pAVar1 = (AutoClass5 *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar1 != (AutoClass5 *)0x0) {
		pAVar1 = AutoClass5::Construct(pAVar1,num);
		this->field122_0x1dc = pAVar1;
		return pAVar1;
		}
		this->field122_0x1dc = (AutoClass5 *)0x0;
		}
		return this->field122_0x1dc;
		}
		
	*/
	return null;
}

uint ChunkData::CreateCollisionData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CollisionData * __fastcall ChunkData::CreateCollisionData(ChunkData *this){
		CollisionData *pCVar1;
		if (this->collisionData == (CollisionData *)0x0) {
		pCVar1 = (CollisionData *)VirtualPool::AllocateMemory(0x28);
		if (pCVar1 != (CollisionData *)0x0) {
		pCVar1 = CollisionData::Construct(pCVar1);
		this->collisionData = pCVar1;
		return pCVar1;
		}
		this->collisionData = (CollisionData *)0x0;
		}
		return this->collisionData;
		}
		
	*/
	return 0;
}

void ChunkData::DisposeCollision() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkData::DisposeCollision(ChunkData *this){
		CollisionData *ptr;
		ptr = this->collisionData;
		if (ptr != (CollisionData *)0x0) {
		FUN_001e6ed0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this->collisionData = (CollisionData *)0x0;
		return;
		}
		
	*/
	return;
}

