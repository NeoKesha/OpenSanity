#include "headers/Known/GameData/Path/Path.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Path::Dispose(Path* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Path::Dispose(Path *param_1){
		Vector2 *ptr;
		ptr = param_1->parameters;
		(param_1->parent).vtable = (PathBase_VTable *)&Path_VT;
		VirtualPool::FreeMemory(ptr);
		(param_1->parent).vtable = (PathBase_VTable *)&Path_VT_Base;
		VirtualPool::FreeMemory((param_1->parent).points);
		return;
		}
		
	*/
	return;
}

float Path::FUN_000ecee0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Path::FUN_000ecee0(Path *this,int param_1){
		int iVar1;
		float10 fVar2;
		float fVar3;
		iVar1 = *(int *)(param_1 + 0x28);
		if (iVar1 == 0) {
		fVar3 = 0.0;
		}
		else {
		fVar3 = *(float *)((int)this->parameters + iVar1 * 4 + -4);
		}
		fVar2 = (float10)FUN_000de6a0(iVar1,*(float *)(param_1 + 0x24));
		return (float)((fVar2 + (float10)fVar3) /(float10)(&this->parameters[-2].x)[(this->parent).pointCnt]);
		}
		
	*/
	return 0.0f;
}

void Path::FUN_000f1c60(Vector4* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Path::FUN_000f1c60(Path *this,Vector4 *param_1,int param_2){
		int iVar1;
		int iVar2;
		int iVar3;
		uint uVar4;
		iVar1 = param_2;
		*(float *)(param_2 + 0x20) = FLOAT_0038dff4;
		iVar2 = FUN_000ddca0((int)this,&param_1->x);
		iVar3 = iVar2 + -3;
		param_2 = 4;
		if (iVar3 < 0) {
		param_2 = iVar2 + 1;
		iVar3 = 0;
		}
		iVar2 = (this->parent).pointCnt + -3;
		if (iVar2 < param_2 + iVar3) {
		param_2 = iVar2 - iVar3;
		}
		if (0 < param_2) {
		do {
		uVar4 = FUN_000f17f0((int)this,&param_1->x,iVar1,iVar3);
		if ((char)uVar4 != '\0') {
		*(int *)(iVar1 + 0x28) = iVar3;
		}
		iVar3 = iVar3 + 1;
		param_2 = param_2 + -1;
		}
		 while (param_2 != 0);
		}
		return;
		}
		
	*/
	return;
}

void Path::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Path * __thiscall Path::Dispose(Path *this,byte param_1){
		Vector2 *ptr;
		ptr = this->parameters;
		(this->parent).vtable = (PathBase_VTable *)&Path_VT;
		VirtualPool::FreeMemory(ptr);
		(this->parent).vtable = (PathBase_VTable *)&Path_VT_Base;
		VirtualPool::FreeMemory((this->parent).points);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Path::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Path::Read(Path *this,MemoryStream *stream){
		Vector4 *pointArray;
		Vector2 *parameterArray;
		int *pointCnt;
		pointCnt = &(this->parent).pointCnt;
		(*stream->vtable->ReadInt2)(stream,pointCnt);
		pointArray = (Vector4 *)VirtualPool::AllocateMemory(*pointCnt << 4);
		(this->parent).points = pointArray;
		(*stream->vtable->Read)(stream,(int *)pointArray,*pointCnt << 4,1);
		(*stream->vtable->ReadInt2)(stream,(int *)&stream);
		parameterArray = (Vector2 *)VirtualPool::AllocateMemory((int)stream * 8);
		this->parameters = parameterArray;
		(*stream->vtable->Read)(stream,(int *)parameterArray,(int)stream << 3,1);
		*(float **)&this->field_0x10 = &this->parameters->x + (int)stream;
		return;
		}
		
	*/
	return;
}

void Path::Write(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Path::Write(Path *this,int *param_1){
		int iVar1;
		int iVar2;
		iVar2 = (this->parent).pointCnt;
		iVar1 = iVar2 + -3;
		(**(code **)(*param_1 + 0x6c))(iVar2);
		(**(code **)(*param_1 + 0xc))((this->parent).points,(this->parent).pointCnt << 4);
		(**(code **)(*param_1 + 0x6c))(iVar1);
		(**(code **)(*param_1 + 0xc))(this->parameters,iVar1 * 8);
		return;
		}
		
	*/
	return;
}

bool Path::Method5(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Path::Method5(Path *this,int **param_1){
		Vector2 **ppVVar1;
		int *piVar2;
		byte bVar3;
		byte bVar4;
		byte unaff_BL;
		int iVar5;
		Path *local_4;
		local_4 = this;
		bVar3 = PathBase::Method5(&this->parent,param_1);
		piVar2 = param_1[1];
		iVar5 = (this->parent).pointCnt + -3;
		if (piVar2 == (int *)0x1) {
		local_4 = (Path *)(iVar5 * 2);
		}
		ppVVar1 = &this->parameters;
		if (piVar2 == (int *)0x0) {
		bVar3 = unaff_BL;
		bVar4 = (**(code **)(**param_1 + 0x94))(0x420,&local_4,ppVVar1);
		}
		else if (piVar2 == (int *)0x1) {
		bVar3 = unaff_BL;
		bVar4 = (**(code **)(**param_1 + 0x30))(0x420,local_4,*ppVVar1);
		}
		else {
		bVar4 = 0;
		}
		if (param_1[1] == (int *)0x0) {
		*(int *)&this->field_0x10 = (int)*ppVVar1 + iVar5 * 4;
		}
		return (bool)(bVar3 & bVar4);
		}
		
	*/
	return false;
}

uint Path::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 Path::GetBuilderIndex(void){
		return 0x1512;
		}
		
	*/
	return 0;
}

Path* Path::Copy(Path* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Path * __thiscall Path::Copy(Path *this,Path *other){
		Vector2 *pVVar1;
		uint uVar2;
		int iVar3;
		Vector2 *pVVar4;
		PathBase::Construct(&this->parent,&other->parent);
		(this->parent).vtable = (PathBase_VTable *)&Path_VT;
		this->parameters = (Vector2 *)0x0;
		this->field58_0x48 = -1;
		iVar3 = (this->parent).pointCnt + -3;
		uVar2 = iVar3 * 8;
		pVVar1 = (Vector2 *)VirtualPool::AllocateMemory(uVar2);
		*(void **)&this->field_0x10 = (void *)((int)pVVar1 + iVar3 * 4);
		this->parameters = pVVar1;
		pVVar4 = other->parameters;
		for (uVar2 = uVar2 >> 2;
		 uVar2 != 0;
		 uVar2 = uVar2 - 1) {
		pVVar1->x = pVVar4->x;
		pVVar4 = (Vector2 *)&pVVar4->y;
		pVVar1 = (Vector2 *)&pVVar1->y;
		}
		for (iVar3 = 0;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		*(undefined *)&pVVar1->x = *(undefined *)&pVVar4->x;
		pVVar4 = (Vector2 *)((int)&pVVar4->x + 1);
		pVVar1 = (Vector2 *)((int)&pVVar1->x + 1);
		}
		return this;
		}
		
	*/
	return null;
}

