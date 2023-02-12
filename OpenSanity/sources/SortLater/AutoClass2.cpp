#include "headers/SortLater/AutoClass2.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/GameData/OGI/OGI.h"
#include "headers/Known/Math/BoundingBox.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextBase.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void AutoClass2::FUN_001372d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass2::FUN_001372d0(AutoClass2 *this){
		AutoClass40 *unk;
		unk = this->field1_0x4;
		if (unk != (AutoClass40 *)0x0) {
		AutoClass40::Dispose(unk);
		VirtualPool::FreeMemory(unk);
		}
		this->field1_0x4 = (AutoClass40 *)0x0;
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_00137310(InstanceContextBase* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_00137310(AutoClass2 *this,InstanceContextBase *ctx){
		this->ctx = (InstanceContext *)ctx;
		this->field1_0x4 = (AutoClass40 *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = (InstanceContext *)0x0;
		this->field5_0x14 = 0xffffffff;
		this->field6_0x18 = 0;
		this->matrix1 = (Matrix4 *)0x0;
		this->field8_0x20 = this->field8_0x20 & 0xfa | 2;
		this->field25_0x70 = 0;
		this->matrixArray = (Matrix4 *)0x0;
		this->field27_0x78 = 0;
		this->field28_0x7c = 0;
		this->field29_0x80 = (void *)0x0;
		return;
		}
		
	*/
	return;
}

void AutoClass2::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass2::Dispose(AutoClass2 *this){
		AutoClass40 *ptr;
		ptr = this->field1_0x4;
		if (ptr != (AutoClass40 *)0x0) {
		AutoClass40::Dispose(ptr);
		VirtualPool::FreeMemory(ptr);
		}
		VirtualPool::FreeMemory(this->matrix1);
		VirtualPool::FreeMemory(this->matrixArray);
		this->field27_0x78 = 0xffffffff;
		VirtualPool::FreeMemory(this->field29_0x80);
		return;
		}
		
	*/
	return;
}

uint AutoClass2::FUN_001373f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall AutoClass2::FUN_001373f0(AutoClass2 *this){
		InstanceNodeAbstract *pIVar1;
		if ((this->field1_0x4 != (AutoClass40 *)0x0) || (this->field2_0x8 != 0)) {
		return 1;
		}
		if (this->field25_0x70 != 0) {
		return *(uint *)(this->field25_0x70 + 0x48) & 0xff;
		}
		pIVar1 = InstanceDataList::GetNode(&this->ctx->nodes,Undefined4);
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		pIVar1 = InstanceDataList::GetNode(&this->ctx->nodes,Undefined4);
		return (uint)(pIVar1[1].vtable)->Dispose;
		}
		return 0;
		}
		
	*/
	return 0;
}

void AutoClass2::FUN_0013a200() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass2::FUN_0013a200(AutoClass2 *this){
		undefined2 uVar1;
		uint uVar2;
		Matrix4 *pMVar3;
		void *pvVar4;
		int iVar5;
		int iVar6;
		VirtualPool::FreeMemory(this->matrixArray);
		this->field28_0x7c = this->field25_0x70;
		uVar2 = *(uint *)(this->field25_0x70 + 0x48) & 0xff;
		this->field27_0x78 = uVar2;
		pMVar3 = (Matrix4 *)VirtualPool::AllocateMemory(uVar2 << 6);
		this->matrixArray = pMVar3;
		iVar6 = 0;
		if (0 < (int)this->field27_0x78) {
		iVar5 = 0;
		do {
		Matrix4::Construct1((Matrix4 *)((int)&this->matrixArray->m11 + iVar5));
		iVar6 = iVar6 + 1;
		iVar5 = iVar5 + 0x40;
		}
		 while (iVar6 < (int)this->field27_0x78);
		}
		iVar6 = this->field27_0x78;
		if (this->field29_0x80 != (void *)0x0) {
		VirtualPool::FreeMemory(this->field29_0x80);
		}
		pvVar4 = VirtualPool::AllocateMemory(iVar6 * 2);
		this->field29_0x80 = pvVar4;
		iVar6 = 0;
		if (0 < (int)this->field27_0x78) {
		iVar5 = 0;
		do {
		if (this->field1_0x4 == (AutoClass40 *)0x0) {
		if (this->field2_0x8 == 0) {
		if (this->field25_0x70 == 0) {
		uVar1 = 0xffff;
		}
		else {
		uVar1 = *(undefined2 *)(*(int *)(this->field25_0x70 + 0x84) + 0x16 + iVar5);
		}
		}
		else {
		uVar1 = *(undefined2 *)(this->field2_0x8 + 0x16);
		}
		}
		else {
		uVar1 = this->field1_0x4->field11_0x16;
		}
		*(undefined2 *)((int)this->field29_0x80 + iVar6 * 2) = uVar1;
		iVar6 = iVar6 + 1;
		iVar5 = iVar5 + 0x20;
		}
		 while (iVar6 < (int)this->field27_0x78);
		}
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_0013a2e0(int param_1, int matrixIndex, Matrix4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_0013a2e0(AutoClass2 *this,int param_1,int matrixIndex,Matrix4 *param_3){
		Matrix4 *pMVar1;
		Matrix4 *pMVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		bool bVar6;
		InstanceNodeOGI *pIVar6;
		Matrix4 *pfVar7;
		pIVar6 = (InstanceNodeOGI *)InstanceDataList::GetNode(&this->ctx->nodes,OGI);
		if ((pIVar6->field4_0x24 != (InstanceNodeOGISub *)0x0) &&(bVar6 = InstanceNodeOGISub::FUN_001f8a10(pIVar6->field4_0x24,param_1,param_3), bVar6 != false)) {
		if ((this->field8_0x20 & 2) == 0) {
		return;
		}
		if ((this->matrixArray == (Matrix4 *)0x0) || (this->field28_0x7c != this->field25_0x70)) {
		FUN_0013a200(this);
		}
		fVar3 = param_3->m12;
		fVar4 = param_3->m13;
		fVar5 = param_3->m14;
		pfVar7 = this->matrixArray + matrixIndex;
		pfVar7->m11 = param_3->m11;
		pfVar7->m12 = fVar3;
		pfVar7->m13 = fVar4;
		pfVar7->m14 = fVar5;
		fVar3 = param_3->m22;
		fVar4 = param_3->m23;
		fVar5 = param_3->m24;
		pfVar7->m21 = param_3->m21;
		pfVar7->m22 = fVar3;
		pfVar7->m23 = fVar4;
		pfVar7->m24 = fVar5;
		fVar3 = param_3->m32;
		fVar4 = param_3->m33;
		fVar5 = param_3->m34;
		pfVar7->m31 = param_3->m31;
		pfVar7->m32 = fVar3;
		pfVar7->m33 = fVar4;
		pfVar7->m34 = fVar5;
		fVar3 = param_3->m42;
		fVar4 = param_3->m43;
		fVar5 = param_3->m44;
		pfVar7->m41 = param_3->m41;
		pfVar7->m42 = fVar3;
		pfVar7->m43 = fVar4;
		pfVar7->m44 = fVar5;
		return;
		}
		if ((this->field25_0x70 == this->field28_0x7c) &&(pMVar2 = this->matrixArray, pMVar2 != (Matrix4 *)0x0)) {
		pMVar1 = pMVar2 + matrixIndex;
		fVar3 = pMVar1->m12;
		fVar4 = pMVar1->m13;
		fVar5 = pMVar1->m14;
		param_3->m11 = pMVar1->m11;
		param_3->m12 = fVar3;
		param_3->m13 = fVar4;
		param_3->m14 = fVar5;
		fVar3 = pMVar2[matrixIndex].m22;
		fVar4 = pMVar2[matrixIndex].m23;
		fVar5 = pMVar2[matrixIndex].m24;
		param_3->m21 = pMVar2[matrixIndex].m21;
		param_3->m22 = fVar3;
		param_3->m23 = fVar4;
		param_3->m24 = fVar5;
		fVar3 = pMVar2[matrixIndex].m32;
		fVar4 = pMVar2[matrixIndex].m33;
		fVar5 = pMVar2[matrixIndex].m34;
		param_3->m31 = pMVar2[matrixIndex].m31;
		param_3->m32 = fVar3;
		param_3->m33 = fVar4;
		param_3->m34 = fVar5;
		fVar3 = pMVar2[matrixIndex].m42;
		fVar4 = pMVar2[matrixIndex].m43;
		fVar5 = pMVar2[matrixIndex].m44;
		param_3->m41 = pMVar2[matrixIndex].m41;
		param_3->m42 = fVar3;
		param_3->m43 = fVar4;
		param_3->m44 = fVar5;
		return;
		}
		Matrix4::Construct1(param_3);
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_0013a3b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass2::FUN_0013a3b0(AutoClass2 *this){
		undefined2 uVar1;
		uint uVar2;
		void *pvVar3;
		int iVar4;
		int iVar5;
		uVar2 = FUN_001373f0(this);
		if (0 < (int)uVar2) {
		if (this->field29_0x80 != (void *)0x0) {
		VirtualPool::FreeMemory(this->field29_0x80);
		}
		pvVar3 = VirtualPool::AllocateMemory(uVar2 * 2);
		this->field29_0x80 = pvVar3;
		if (0 < (int)uVar2) {
		iVar5 = 0;
		iVar4 = 0;
		do {
		if (this->field1_0x4 == (AutoClass40 *)0x0) {
		if (this->field2_0x8 == 0) {
		if (this->field25_0x70 == 0) {
		uVar1 = 0xffff;
		}
		else {
		uVar1 = *(undefined2 *)(*(int *)(this->field25_0x70 + 0x84) + 0x16 + iVar5);
		}
		}
		else {
		uVar1 = *(undefined2 *)(this->field2_0x8 + 0x16);
		}
		}
		else {
		uVar1 = this->field1_0x4->field11_0x16;
		}
		*(undefined2 *)((int)this->field29_0x80 + iVar4 * 2) = uVar1;
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x20;
		}
		 while (iVar4 < (int)uVar2);
		}
		}
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_0013a580() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass2::FUN_0013a580(AutoClass2 *this){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		fVar1 = (this->matrix2).m41 - (this->matrix2).m31;
		fVar3 = (this->matrix2).m42 - (this->matrix2).m32;
		fVar4 = (this->matrix2).m43 - (this->matrix2).m33;
		if (fVar1 < 0.0) {
		fVar1 = 0.0 - fVar1;
		}
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		fVar2 = 0.0 - fVar4;
		if (0.0 <= fVar4) {
		fVar2 = fVar4;
		}
		if (fVar1 <= fVar3) {
		fVar3 = fVar1;
		}
		if (fVar2 < fVar3) {
		fVar3 = fVar2;
		}
		if (fVar3 < FLOAT_00393088) {
		this->field8_0x20 = this->field8_0x20 | 4;
		}
		FUN_0013a3b0(this);
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_0013a600(Matrix4* param_1, int param_2, int* param_3, Matrix4* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_0013a600(AutoClass2 *this,Matrix4 *param_1,int param_2,int *param_3,Matrix4 *param_4){
		char cVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		InstanceNodeAbstract *pIVar6;
		if (this->field1_0x4 != (AutoClass40 *)0x0) {
		*param_3 = (int)this->field1_0x4;
		fVar3 = param_1->m12;
		fVar4 = param_1->m13;
		fVar5 = param_1->m14;
		param_4->m11 = param_1->m11;
		param_4->m12 = fVar3;
		param_4->m13 = fVar4;
		param_4->m14 = fVar5;
		fVar3 = param_1->m22;
		fVar4 = param_1->m23;
		fVar5 = param_1->m24;
		param_4->m21 = param_1->m21;
		param_4->m22 = fVar3;
		param_4->m23 = fVar4;
		param_4->m24 = fVar5;
		fVar3 = param_1->m32;
		fVar4 = param_1->m33;
		fVar5 = param_1->m34;
		param_4->m31 = param_1->m31;
		param_4->m32 = fVar3;
		param_4->m33 = fVar4;
		param_4->m34 = fVar5;
		fVar3 = param_1->m42;
		fVar4 = param_1->m43;
		fVar5 = param_1->m44;
		param_4->m41 = param_1->m41;
		param_4->m42 = fVar3;
		param_4->m43 = fVar4;
		param_4->m44 = fVar5;
		return;
		}
		if (this->field2_0x8 != 0) {
		*param_3 = this->field2_0x8;
		fVar3 = param_1->m12;
		fVar4 = param_1->m13;
		fVar5 = param_1->m14;
		param_4->m11 = param_1->m11;
		param_4->m12 = fVar3;
		param_4->m13 = fVar4;
		param_4->m14 = fVar5;
		fVar3 = param_1->m22;
		fVar4 = param_1->m23;
		fVar5 = param_1->m24;
		param_4->m21 = param_1->m21;
		param_4->m22 = fVar3;
		param_4->m23 = fVar4;
		param_4->m24 = fVar5;
		fVar3 = param_1->m32;
		fVar4 = param_1->m33;
		fVar5 = param_1->m34;
		param_4->m31 = param_1->m31;
		param_4->m32 = fVar3;
		param_4->m33 = fVar4;
		param_4->m34 = fVar5;
		fVar3 = param_1->m42;
		fVar4 = param_1->m43;
		fVar5 = param_1->m44;
		param_4->m41 = param_1->m41;
		param_4->m42 = fVar3;
		param_4->m43 = fVar4;
		param_4->m44 = fVar5;
		return;
		}
		iVar2 = this->field25_0x70;
		if (iVar2 == 0) {
		pIVar6 = InstanceDataList::GetNode(&this->ctx->nodes,Undefined4);
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		pIVar6 = InstanceDataList::GetNode(&this->ctx->nodes,Undefined4);
		*param_3 = (int)((pIVar6[1].vtable)->SetCtx + param_2 * 0x20);
		Matrix4::thunk_FUN_00027120(param_4,param_1);
		return;
		}
		*param_3 = 0;
		return;
		}
		cVar1 = *(char *)(param_2 + *(int *)(iVar2 + 0x88));
		*param_3 = param_2 * 0x20 + *(int *)(iVar2 + 0x84);
		if (cVar1 == -1) {
		Matrix4::thunk_FUN_00027120(param_4,param_1);
		return;
		}
		FUN_0013a2e0(this,(int)cVar1,param_2,param_4);
		Matrix4::FUN_000d8470(param_4,param_1);
		return;
		}
		
	*/
	return;
}

void AutoClass2::SetFromOGI(OGI* ogi) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::SetFromOGI(AutoClass2 *this,OGI *ogi){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		fVar4 = Vector4_0039ef70.w;
		fVar3 = Vector4_0039ef70.z;
		fVar2 = Vector4_0039ef70.y;
		fVar1 = Vector4_0039ef70.x;
		if (ogi == (OGI *)0x0) {
		(this->matrix2).m31 = Vector4_0039ef70.x;
		(this->matrix2).m32 = fVar2;
		(this->matrix2).m33 = fVar3;
		(this->matrix2).m34 = fVar4;
		(this->matrix2).m41 = fVar1;
		(this->matrix2).m42 = fVar2;
		(this->matrix2).m43 = fVar3;
		(this->matrix2).m44 = fVar4;
		}
		else {
		(this->matrix2).m31 = (ogi->field11_0x20).v1.x;
		(this->matrix2).m32 = (ogi->field11_0x20).v1.y;
		(this->matrix2).m33 = (ogi->field11_0x20).v1.z;
		(this->matrix2).m34 = (ogi->field11_0x20).v1.w;
		(this->matrix2).m41 = (ogi->field11_0x20).v2.x;
		(this->matrix2).m42 = (ogi->field11_0x20).v2.y;
		(this->matrix2).m43 = (ogi->field11_0x20).v2.z;
		(this->matrix2).m44 = (ogi->field11_0x20).v2.w;
		}
		this->field25_0x70 = ogi;
		FUN_0013a3b0(this);
		InstanceContext::RegisterCtxPtrToList(this->ctx);
		return;
		}
		
	*/
	return;
}

void AutoClass2::FUN_0013cda0(Matrix4* matrix1, BoundingBox* matrix2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_0013cda0(AutoClass2 *this,Matrix4 *matrix1,BoundingBox *matrix2){
		uint cnt;
		int i;
		void *local_94;
		Matrix4 local_90;
		Matrix4 local_50;
		cnt = FUN_001373f0(this);
		if (cnt == 1) {
		FUN_0013a600(this,matrix1,0,(int *)&local_94,&local_90);
		FUN_0014a090(local_94,&local_90,matrix2);
		return;
		}
		if ((int)cnt < 1) {
		(matrix2->v1).x = (this->matrix2).m31;
		(matrix2->v1).y = (this->matrix2).m32;
		(matrix2->v1).z = (this->matrix2).m33;
		(matrix2->v1).w = (this->matrix2).m34;
		(matrix2->v2).x = (this->matrix2).m41;
		(matrix2->v2).y = (this->matrix2).m42;
		(matrix2->v2).z = (this->matrix2).m43;
		(matrix2->v2).w = (this->matrix2).m44;
		BoundingBox::FUN_001481e0(matrix2,matrix1);
		}
		else {
		BoundingBox::SetInfiniteSizes(matrix2);
		i = 0;
		if (0 < (int)cnt) {
		do {
		FUN_0013a600(this,matrix1,i,(int *)&local_94,&local_50);
		FUN_0014a090(local_94,&local_50,(BoundingBox *)&local_90);
		BoundingBox::FUN_00147330(matrix2,&local_90);
		i = i + 1;
		}
		 while (i < (int)cnt);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

bool AutoClass2::FUN_0013ce90(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass2::FUN_0013ce90(AutoClass2 *this,InstanceContext *ctx){
		int iVar1;
		InstanceContextRefCounter *pIVar2;
		iVar1 = this->field3_0xc;
		if (iVar1 != 0) {
		if (((ctx->parent).flags & 0x40000U) == 0) {
		pIVar2 = (InstanceContextRefCounter *)(iVar1 + 0x30);
		}
		else {
		pIVar2 = (InstanceContextRefCounter *)(iVar1 + 0x34);
		}
		InstanceContext::SomeHackySet(ctx,pIVar2,0x150,0x154);
		this->field3_0xc = 0;
		}
		if ((this->field4_0x10 != (InstanceContext *)0x0) &&(iVar1 = (ctx->parent).field14_0x20.field5_0x14, iVar1 != -1)) {
		InstanceContext::SomeHackySet(ctx,(InstanceContextRefCounter *)(&(this->field4_0x10->parent).vtable + iVar1),0x158,0x15c);
		(ctx->parent).field14_0x20.field5_0x14 = 0xffffffff;
		}
		return true;
		}
		
	*/
	return false;
}

void AutoClass2::FUN_0013dff0(Matrix4* mtx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_0013dff0(AutoClass2 *this,Matrix4 *mtx){
		float fVar1;
		float fVar2;
		float fVar3;
		Matrix4 *matrix;
		if (this->matrix1 != (Matrix4 *)0x0) {
		VirtualPool::FreeMemory(this->matrix1);
		this->matrix1 = (Matrix4 *)0x0;
		}
		matrix = (Matrix4 *)VirtualPool::AllocateMemory(0x40);
		this->matrix1 = matrix;
		fVar1 = mtx->m12;
		fVar2 = mtx->m13;
		fVar3 = mtx->m14;
		matrix->m11 = mtx->m11;
		matrix->m12 = fVar1;
		matrix->m13 = fVar2;
		matrix->m14 = fVar3;
		fVar1 = mtx->m22;
		fVar2 = mtx->m23;
		fVar3 = mtx->m24;
		matrix->m21 = mtx->m21;
		matrix->m22 = fVar1;
		matrix->m23 = fVar2;
		matrix->m24 = fVar3;
		fVar1 = mtx->m32;
		fVar2 = mtx->m33;
		fVar3 = mtx->m34;
		matrix->m31 = mtx->m31;
		matrix->m32 = fVar1;
		matrix->m33 = fVar2;
		matrix->m34 = fVar3;
		fVar1 = mtx->m42;
		fVar2 = mtx->m43;
		fVar3 = mtx->m44;
		matrix->m41 = mtx->m41;
		matrix->m42 = fVar1;
		matrix->m43 = fVar2;
		matrix->m44 = fVar3;
		FUN_0013cda0(this,mtx,(BoundingBox *)&this->matrix2);
		return;
		}
		
	*/
	return;
}

bool AutoClass2::FUN_0013e050(int* param_1, void** array769[769], InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass2::FUN_0013e050(AutoClass2 *this,int *param_1,undefined *(*array769) [769],InstanceContext *ctx){
		InstanceTransform *transform;
		int iVar1;
		int unaff_retaddr;
		if (this->matrix1 == (Matrix4 *)0x0) {
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		FUN_0013cda0(this,&transform->matrix,(BoundingBox *)&this->matrix2);
		}
		if (this->field3_0xc == 0) {
		iVar1 = (**(code **)(*param_1 + 0x20))(ctx,0);
		this->field3_0xc = iVar1;
		if (iVar1 == 0) {
		this->field3_0xc = param_1;
		}
		FUN_0013c7d0(this->field3_0xc,ctx);
		FUN_00138f30(unaff_retaddr,ctx);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void AutoClass2::FUN_00064890(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass2::FUN_00064890(AutoClass2 *this,Matrix4 *param_1){
		FUN_0013cda0(this,param_1,(BoundingBox *)&this->matrix2);
		return;
		}
		
	*/
	return;
}

int* AutoClass2::FUN_0013e950(InstanceContextBase* ctx, void* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall AutoClass2::FUN_0013e950(AutoClass2 *this,InstanceContextBase *ctx,undefined *param_2){
		byte bVar1;
		byte bVar2;
		AutoClass40 *pAVar3;
		uint uVar4;
		undefined4 *puVar5;
		uint uVar6;
		undefined4 *puVar7;
		this->ctx = (InstanceContext *)ctx;
		this->field5_0x14 = 0xffffffff;
		bVar2 = this->field8_0x20 & 0xfe | 2;
		this->field8_0x20 = bVar2;
		this->field1_0x4 = (AutoClass40 *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = (InstanceContext *)0x0;
		this->field6_0x18 = 0;
		this->matrix1 = (Matrix4 *)0x0;
		bVar1 = param_2[0x20];
		this->field25_0x70 = 0;
		this->matrixArray = (Matrix4 *)0x0;
		this->field27_0x78 = 0;
		this->field28_0x7c = 0;
		this->field29_0x80 = (void *)0x0;
		this->field8_0x20 = (bVar1 ^ bVar2) & 4 ^ bVar2;
		(this->matrix2).m31 = *(float *)(param_2 + 0x50);
		(this->matrix2).m32 = *(float *)(param_2 + 0x54);
		(this->matrix2).m33 = *(float *)(param_2 + 0x58);
		(this->matrix2).m34 = *(float *)(param_2 + 0x5c);
		(this->matrix2).m41 = *(float *)(param_2 + 0x60);
		(this->matrix2).m42 = *(float *)(param_2 + 100);
		(this->matrix2).m43 = *(float *)(param_2 + 0x68);
		(this->matrix2).m44 = *(float *)(param_2 + 0x6c);
		(this->matrix2).m11 = *(float *)(param_2 + 0x30);
		(this->matrix2).m12 = *(float *)(param_2 + 0x34);
		(this->matrix2).m13 = *(float *)(param_2 + 0x38);
		(this->matrix2).m14 = *(float *)(param_2 + 0x3c);
		(this->matrix2).m21 = *(float *)(param_2 + 0x40);
		(this->matrix2).m22 = *(float *)(param_2 + 0x44);
		(this->matrix2).m23 = *(float *)(param_2 + 0x48);
		(this->matrix2).m24 = *(float *)(param_2 + 0x4c);
		if (*(int *)(param_2 + 4) == 0) {
		this->field1_0x4 = (AutoClass40 *)0x0;
		}
		else {
		pAVar3 = this->field1_0x4;
		if (pAVar3 != (AutoClass40 *)0x0) {
		AutoClass40::Dispose(pAVar3);
		VirtualPool::FreeMemory(pAVar3);
		}
		pAVar3 = (AutoClass40 *)VirtualPool::AllocateMemory(0x20);
		if (pAVar3 == (AutoClass40 *)0x0) {
		this->field1_0x4 = (AutoClass40 *)0x0;
		FUN_00149650((void *)0x0,*(undefined2 **)(param_2 + 4));
		}
		else {
		pAVar3 = AutoClass40::Construct(pAVar3);
		this->field1_0x4 = pAVar3;
		FUN_00149650(pAVar3,*(undefined2 **)(param_2 + 4));
		}
		}
		this->field2_0x8 = *(undefined4 *)(param_2 + 8);
		if (*(Matrix4 **)(param_2 + 0x1c) == (Matrix4 *)0x0) {
		this->matrix1 = (Matrix4 *)0x0;
		}
		else {
		FUN_0013dff0(this,*(Matrix4 **)(param_2 + 0x1c));
		}
		uVar4 = FUN_001373f0(this);
		if (0 < (int)uVar4) {
		if (this->field29_0x80 != (void *)0x0) {
		VirtualPool::FreeMemory(this->field29_0x80);
		}
		uVar4 = uVar4 * 2;
		puVar5 = (undefined4 *)VirtualPool::AllocateMemory(uVar4);
		this->field29_0x80 = puVar5;
		puVar7 = *(undefined4 **)(param_2 + 0x80);
		for (uVar6 = uVar4 >> 2;
		 uVar6 != 0;
		 uVar6 = uVar6 - 1) {
		*puVar5 = *puVar7;
		puVar7 = puVar7 + 1;
		puVar5 = puVar5 + 1;
		}
		for (uVar4 = uVar4 & 3;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*(undefined *)puVar5 = *(undefined *)puVar7;
		puVar7 = (undefined4 *)((int)puVar7 + 1);
		puVar5 = (undefined4 *)((int)puVar5 + 1);
		}
		}
		this->field3_0xc = 0;
		return (int *)this;
		}
		
	*/
	return null;
}

