#include "headers/Known/GameData/Path/PathBase.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void PathBase::Method1(Matrix4* mat) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PathBase::Method1(PathBase *this,Matrix4 *mat){
		float *pfVar1;
		float fVar2;
		float fVar3;
		int i;
		int iVar4;
		iVar4 = 0;
		if (0 < this->pointCnt) {
		i = 0;
		do {
		pfVar1 = (float *)((int)&this->points->x + i);
		fVar2 = *pfVar1;
		fVar3 = pfVar1[1];
		*(undefined (*) [16])((int)&this->points->x + i) =CONCAT412(fVar2 * mat->m14 + fVar3 * mat->m24 + mat->m34 * 0.0 + mat->m44,CONCAT48(fVar2 * mat->m13 + fVar3 * mat->m23 + mat->m33 * 0.0 + mat->m43,CONCAT44(fVar2 * mat->m12 + fVar3 * mat->m22 +mat->m32 * 0.0 + mat->m42,fVar2 * mat->m11 + fVar3 * mat->m21 +mat->m31 * 0.0 + mat->m41)));
		iVar4 = iVar4 + 1;
		i = i + 0x10;
		}
		 while (iVar4 < this->pointCnt);
		}
		return;
		}
		
	*/
	return;
}

void PathBase::Write(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PathBase::Write(PathBase *this,MemoryStream *param_1){
		(*param_1->vtable->WriteInt1)(param_1,this->pointCnt);
		(*param_1->vtable->Write)(param_1,(byte *)this->points,this->pointCnt << 4);
		return;
		}
		
	*/
	return;
}

void PathBase::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PathBase * __thiscall PathBase::Dispose(PathBase *this,byte param_1){
		this->vtable = (PathBase_VTable *)&Path_VT_Base;
		VirtualPool::FreeMemory(this->points);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool PathBase::Method5(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall PathBase::Method5(PathBase *this,void **param_1){
		int *piVar1;
		Vector4 **ppVVar2;
		float fVar3;
		byte bVar4;
		uint uVar5;
		int iVar6;
		int iVar7;
		piVar1 = &this->pointCnt;
		ppVVar2 = &this->points;
		if (param_1[1] == (void *)0x0) {
		uVar5 = FUN_000f35c0(*param_1,ppVVar2,piVar1,0x41f);
		bVar4 = (byte)uVar5;
		}
		else if (param_1[1] == (void *)0x1) {
		uVar5 = FUN_000f3710(*param_1,*ppVVar2,*piVar1,0x41f);
		bVar4 = (byte)uVar5;
		}
		else {
		bVar4 = 0;
		}
		fVar3 = FLOAT_0038639c;
		iVar6 = 0;
		if (0 < *piVar1) {
		iVar7 = 0;
		do {
		*(float *)((int)&(*ppVVar2)->w + iVar7) = fVar3;
		iVar6 = iVar6 + 1;
		iVar7 = iVar7 + 0x10;
		}
		 while (iVar6 < *piVar1);
		}
		return (bool)(bVar4 & 1);
		}
		
	*/
	return false;
}

void PathBase::Read(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PathBase::Read(PathBase *this,MemoryStream *param_1){
		int *piVar1;
		Vector4 *outArray;
		piVar1 = &this->pointCnt;
		(*param_1->vtable->ReadInt2)(param_1,piVar1);
		outArray = (Vector4 *)VirtualPool::AllocateMemory(*piVar1 << 4);
		this->points = outArray;
		(*param_1->vtable->Read)(param_1,(int *)outArray,*piVar1 << 4,1);
		return;
		}
		
	*/
	return;
}

uint PathBase::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 PathBase::GetBuilderIndex(void){
		return 0x1511;
		}
		
	*/
	return 0;
}

void PathBase::Construct(int cnt, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PathBase * __thiscall PathBase::Construct(PathBase *this,int cnt,int param_2){
		Vector4 *pVVar1;
		undefined4 *puVar2;
		undefined4 *puVar3;
		int iVar4;
		this->pointCnt = cnt;
		this->vtable = (PathBase_VTable *)&Path_VT_Base;
		pVVar1 = (Vector4 *)VirtualPool::AllocateMemory(cnt << 4);
		this->points = pVVar1;
		iVar4 = 0;
		if (0 < this->pointCnt) {
		puVar3 = (undefined4 *)(param_2 + 8);
		do {
		puVar2 = (undefined4 *)((int)this->points + (-8 - param_2) + (int)puVar3);
		*puVar2 = puVar3[-2];
		puVar2[1] = puVar3[-1];
		puVar2[2] = *puVar3;
		puVar2[3] = puVar3[1];
		iVar4 = iVar4 + 1;
		puVar3 = puVar3 + 4;
		}
		 while (iVar4 < this->pointCnt);
		}
		return this;
		}
		
	*/
	return;
}

void PathBase::Construct_7(PathBase* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PathBase * __thiscall PathBase::Construct(PathBase *this,PathBase *other){
		Vector4 *pVVar1;
		uint uVar2;
		int iVar3;
		Vector4 *pVVar4;
		this->vtable = (PathBase_VTable *)&Path_VT_Base;
		this->points = (Vector4 *)0x0;
		VirtualPool::FreeMemory((void *)0x0);
		iVar3 = other->pointCnt;
		this->pointCnt = iVar3;
		pVVar1 = (Vector4 *)VirtualPool::AllocateMemory(iVar3 << 4);
		this->points = pVVar1;
		pVVar4 = other->points;
		for (uVar2 = (uint)(this->pointCnt << 4) >> 2;
		 uVar2 != 0;
		 uVar2 = uVar2 - 1) {
		pVVar1->x = pVVar4->x;
		pVVar4 = (Vector4 *)&pVVar4->y;
		pVVar1 = (Vector4 *)&pVVar1->y;
		}
		for (iVar3 = 0;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		*(undefined *)&pVVar1->x = *(undefined *)&pVVar4->x;
		pVVar4 = (Vector4 *)((int)&pVVar4->x + 1);
		pVVar1 = (Vector4 *)((int)&pVVar1->x + 1);
		}
		return this;
		}
		
	*/
	return;
}

void PathBase::Construct_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PathBase::Construct(PathBase *this){
		this->vtable = (PathBase_VTable *)&Path_VT_Base;
		this->points = (Vector4 *)0x0;
		return;
		}
		
	*/
	return;
}

