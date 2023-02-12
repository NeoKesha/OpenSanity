#include "headers/Unknown/AutoClasses/AutoClass40.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void AutoClass40::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass40 * __fastcall AutoClass40::Construct(AutoClass40 *this){
		this->vectorArray = (Vector4 (*) [8])0x0;
		*(undefined4 *)this = 0;
		*(undefined4 *)&this->field2_0x4 = 0;
		*(undefined4 *)&this->field4_0x8 = 0;
		*(undefined4 *)&this->offset2 = 0;
		*(undefined4 *)&this->offset4 = 0;
		this->offset6 = 0;
		this->field11_0x16 = 0;
		this->memoryLength = 0;
		return this;
		}
		
	*/
	return;
}

void AutoClass40::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass40::Dispose(AutoClass40 *this){
		VirtualPool::FreeMemory(this->vectorArray);
		return;
		}
		
	*/
	return;
}

void AutoClass40::Set(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass40::Set(AutoClass40 *this,Vector4 *vec1,Vector4 *vec2){
		float fVar1;
		AutoClass40Sub *vectorArray;
		uint offset;
		byte (*puVar1) [6];
		byte (*puVar2) [30];
		byte (*puVar3) [24];
		float y;
		float x;
		float z;
		this->vectorCnt = 8;
		this->field1_0x2 = 0xc;
		this->field2_0x4 = 6;
		this->field3_0x6 = 3;
		this->field4_0x8 = 3;
		this->offset1 = 0x80;
		this->offset2 = 0xe0;
		this->offset3 = 0x110;
		this->offset4 = 0x140;
		this->offset5 = 0x146;
		this->offset6 = 0x164;
		this->memoryLength = 0x17c;
		vectorArray = (AutoClass40Sub *)VirtualPool::AllocateMemory(0x17c);
		this->vectorArray = (Vector4 (*) [8])vectorArray;
		z = vec1->z;
		x = vec1->x;
		vectorArray->vectorArray1[0].y = vec1->y;
		vectorArray->vectorArray1[0].x = x;
		vectorArray->vectorArray1[0].z = z;
		fVar1 = FLOAT_0038639c;
		vectorArray->vectorArray1[0].w = FLOAT_0038639c;
		z = vec1->z;
		x = vec1->y;
		vectorArray->vectorArray1[1].x = vec2->x;
		vectorArray->vectorArray1[1].y = x;
		vectorArray->vectorArray1[1].z = z;
		vectorArray->vectorArray1[1].w = fVar1;
		z = vec2->z;
		x = vec1->y;
		vectorArray->vectorArray1[2].x = vec2->x;
		vectorArray->vectorArray1[2].y = x;
		vectorArray->vectorArray1[2].z = z;
		vectorArray->vectorArray1[2].w = fVar1;
		z = vec2->z;
		x = vec1->y;
		vectorArray->vectorArray1[3].x = vec1->x;
		vectorArray->vectorArray1[3].y = x;
		vectorArray->vectorArray1[3].z = z;
		vectorArray->vectorArray1[3].w = fVar1;
		z = vec1->z;
		x = vec2->y;
		vectorArray->vectorArray1[4].x = vec1->x;
		vectorArray->vectorArray1[4].y = x;
		vectorArray->vectorArray1[4].z = z;
		vectorArray->vectorArray1[4].w = fVar1;
		z = vec1->z;
		x = vec2->y;
		vectorArray->vectorArray1[5].x = vec2->x;
		vectorArray->vectorArray1[5].y = x;
		vectorArray->vectorArray1[5].z = z;
		vectorArray->vectorArray1[5].w = fVar1;
		z = vec2->z;
		x = vec2->y;
		vectorArray->vectorArray1[6].x = vec2->x;
		vectorArray->vectorArray1[6].y = x;
		vectorArray->vectorArray1[6].z = z;
		vectorArray->vectorArray1[6].w = fVar1;
		z = vec2->z;
		x = vec2->y;
		vectorArray->vectorArray1[7].x = vec1->x;
		vectorArray->vectorArray1[7].y = x;
		vectorArray->vectorArray1[7].z = z;
		vectorArray->vectorArray1[7].w = fVar1;
		offset = (uint)this->offset1;
		*(float *)((int)&vectorArray->vectorArray1[0].w + offset) = vec1->y;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].x + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].z + offset) = 0;
		z = FLOAT_003869d8;
		*(float *)((int)&vectorArray->vectorArray1[0].y + offset) = FLOAT_003869d8;
		*(float *)((int)&vectorArray->vectorArray1[1].w + offset) = vec1->z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].x + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].y + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[1].z + offset) = z;
		*(float *)((int)&vectorArray->vectorArray1[2].w + offset) = 0.0 - vec2->x;
		*(float *)((int)&vectorArray->vectorArray1[2].x + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].y + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[3].w + offset) = 0.0 - vec2->z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[3].x + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[3].y + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[3].z + offset) = fVar1;
		*(float *)((int)&vectorArray->vectorArray1[4].w + offset) = vec1->x;
		*(float *)((int)&vectorArray->vectorArray1[4].x + offset) = z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[4].y + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[4].z + offset) = 0;
		y = vec2->y;
		*(undefined4 *)((int)&vectorArray->vectorArray1[5].x + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[5].y + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[5].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[5].w + offset) = 0.0 - y;
		offset = (uint)this->offset2;
		*(float *)((int)&vectorArray->vectorArray1[0].x + offset) = z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].y + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[0].w + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].x + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].y + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[1].z + offset) = z;
		*(float *)((int)&vectorArray->vectorArray1[1].w + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].x + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[2].y + offset) = z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[2].w + offset) = fVar1;
		offset = (uint)this->offset3;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].x + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[0].y + offset) = z;
		*(undefined4 *)((int)&vectorArray->vectorArray1[0].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[0].w + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].x + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[1].y + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[1].z + offset) = z;
		*(float *)((int)&vectorArray->vectorArray1[1].w + offset) = fVar1;
		*(float *)((int)&vectorArray->vectorArray1[2].x + offset) = fVar1;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].y + offset) = 0;
		*(undefined4 *)((int)&vectorArray->vectorArray1[2].z + offset) = 0;
		*(float *)((int)&vectorArray->vectorArray1[2].w + offset) = fVar1;
		puVar1 = (byte (*) [6])((int)&vectorArray->vectorArray1[0].x + (uint)this->offset4);
		(*puVar1)[0] = 0;
		(*puVar1)[1] = 5;
		(*puVar1)[2] = 10;
		(*puVar1)[3] = 0xf;
		(*puVar1)[4] = 0x14;
		(*puVar1)[5] = 0x19;
		puVar2 = (byte (*) [30])((int)&vectorArray->vectorArray1[0].x + (uint)this->offset5);
		(*puVar2)[0] = 4;
		(*puVar2)[1] = 0;
		(*puVar2)[2] = 1;
		(*puVar2)[3] = 2;
		(*puVar2)[4] = 3;
		(*puVar2)[5] = 4;
		(*puVar2)[0x10] = 3;
		(*puVar2)[0x15] = 3;
		(*puVar2)[6] = 0;
		(*puVar2)[7] = 4;
		(*puVar2)[8] = 5;
		(*puVar2)[9] = 1;
		(*puVar2)[10] = 4;
		(*puVar2)[0xb] = 1;
		(*puVar2)[0xc] = 5;
		(*puVar2)[0xd] = 6;
		(*puVar2)[0xe] = 2;
		(*puVar2)[0xf] = 4;
		(*puVar2)[0x11] = 2;
		(*puVar2)[0x12] = 6;
		(*puVar2)[0x13] = 7;
		(*puVar2)[0x14] = 4;
		(*puVar2)[0x16] = 7;
		(*puVar2)[0x17] = 4;
		(*puVar2)[0x18] = 0;
		(*puVar2)[0x19] = 4;
		(*puVar2)[0x1a] = 5;
		(*puVar2)[0x1b] = 4;
		(*puVar2)[0x1c] = 7;
		(*puVar2)[0x1d] = 6;
		puVar3 = (byte (*) [24])((int)&vectorArray->vectorArray1[0].x + (uint)this->offset6);
		(*puVar3)[5] = 3;
		(*puVar3)[6] = 3;
		(*puVar3)[0x15] = 3;
		(*puVar3)[0] = 0;
		(*puVar3)[1] = 1;
		(*puVar3)[2] = 1;
		(*puVar3)[3] = 2;
		(*puVar3)[4] = 2;
		(*puVar3)[7] = 0;
		(*puVar3)[8] = 0;
		(*puVar3)[9] = 4;
		(*puVar3)[10] = 4;
		(*puVar3)[0xb] = 5;
		(*puVar3)[0xc] = 5;
		(*puVar3)[0xd] = 1;
		(*puVar3)[0xe] = 5;
		(*puVar3)[0xf] = 6;
		(*puVar3)[0x10] = 6;
		(*puVar3)[0x11] = 2;
		(*puVar3)[0x12] = 6;
		(*puVar3)[0x13] = 7;
		(*puVar3)[0x14] = 7;
		(*puVar3)[0x16] = 7;
		(*puVar3)[0x17] = 4;
		return;
		}
		
	*/
	return;
}

void AutoClass40::FUN_0014b370(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass40::FUN_0014b370(AutoClass40 *this,MemoryStream *stream){
		float fVar1;
		Vector4 (*outArray) [8];
		int iVar2;
		float *pfVar3;
		(*stream->vtable->Read)(stream,(int *)this,0x16,1);
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		this->memoryLength = (size_t)stream;
		outArray = (Vector4 (*) [8])VirtualPool::AllocateMemory((size_t)stream);
		this->vectorArray = outArray;
		(*stream->vtable->Read)(stream,(int *)outArray,(uint)stream,1);
		fVar1 = FLOAT_0038639c;
		iVar2 = 0;
		if (this->vectorCnt != 0) {
		pfVar3 = &(*this->vectorArray)[0].w;
		do {
		*pfVar3 = fVar1;
		iVar2 = iVar2 + 1;
		pfVar3 = pfVar3 + 4;
		}
		 while (iVar2 < (int)(uint)this->vectorCnt);
		}
		return;
		}
		
	*/
	return;
}

void AutoClass40::FUN_00150ee0(Matrix4* matrix) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall AutoClass40::FUN_00150ee0(AutoClass40 *this,Matrix4 *matrix){
		Matrix4 *vector;
		int iVar1;
		int iVar2;
		int iVar3;
		undefined4 uVar4;
		uint uVar5;
		int iVar6;
		Vector4 *pMVar7;
		Vector4 *matrixRow3;
		Vector4 *matrixRow2;
		Vector4 *matrixRow4;
		DAT_004937b4 = 1;
		SOME_VECTOR_INDEX = 0;
		_DAT_004937b0 = 0;
		DAT_004937a4 = 0;
		_DAT_004937a8 = 0;
		_DAT_004937ac = 0;
		iVar6 = 5;
		pMVar7 = (Vector4 *)matrix;
		do {
		Vector4::AddVectorToDict(pMVar7);
		pMVar7 = pMVar7 + 1;
		iVar6 = iVar6 + -1;
		}
		 while (iVar6 != 0);
		iVar6 = Vector4::AddVectorToDict((Vector4 *)matrix);
		matrixRow3 = (Vector4 *)&matrix->m31;
		iVar1 = Vector4::AddVectorToDict(matrixRow3);
		matrixRow2 = (Vector4 *)&matrix->m21;
		iVar2 = Vector4::AddVectorToDict(matrixRow2);
		FUN_0014e450((char)iVar6,(char)iVar1,(char)iVar2);
		iVar6 = Vector4::AddVectorToDict((Vector4 *)matrix);
		iVar1 = Vector4::AddVectorToDict(matrixRow2);
		vector = matrix + 1;
		iVar2 = Vector4::AddVectorToDict((Vector4 *)vector);
		FUN_0014e450((char)iVar6,(char)iVar1,(char)iVar2);
		iVar6 = Vector4::AddVectorToDict((Vector4 *)matrix);
		iVar1 = Vector4::AddVectorToDict((Vector4 *)vector);
		matrixRow4 = (Vector4 *)&matrix->m41;
		iVar2 = Vector4::AddVectorToDict(matrixRow4);
		FUN_0014e450((char)iVar6,(char)iVar1,(char)iVar2);
		iVar6 = Vector4::AddVectorToDict((Vector4 *)matrix);
		iVar1 = Vector4::AddVectorToDict(matrixRow4);
		iVar2 = Vector4::AddVectorToDict(matrixRow3);
		FUN_0014e450((char)iVar6,(char)iVar1,(char)iVar2);
		iVar6 = Vector4::AddVectorToDict(matrixRow2);
		iVar1 = Vector4::AddVectorToDict(matrixRow3);
		iVar2 = Vector4::AddVectorToDict(matrixRow4);
		iVar3 = Vector4::AddVectorToDict((Vector4 *)vector);
		FUN_0014e4d0((char)iVar6,(char)iVar1,(char)iVar2,(char)iVar3);
		DAT_004937b4 = 0;
		uVar4 = FUN_00149730();
		if ((char)uVar4 != '\0') {
		uVar4 = FUN_0014dcb0();
		if ((char)uVar4 != '\0') {
		uVar5 = FUN_0014df20();
		if ((char)uVar5 != '\0') {
		FUN_00149820(&this->vectorCnt);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

