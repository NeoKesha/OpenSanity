#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/OGI/InstanceNodeOGISub.h"

#include "headers/Known/Collections/GenericArray.h"
#include "headers/Known/Collections/Matrix4Array.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/GameData/OGI/OGI.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
bool InstanceNodeOGISub::FUN_001f8a10(int index, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeOGISub::FUN_001f8a10(InstanceNodeOGISub *this,int index,Matrix4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		bool bVar4;
		Matrix4 *pfVar1;
		bVar4 = false;
		if ((this->matrixArray != (Matrix4Array *)0x0) &&(pfVar1 = this->matrixArray->array[index], pfVar1 != (Matrix4 *)0x0)) {
		fVar1 = pfVar1->m12;
		fVar2 = pfVar1->m13;
		fVar3 = pfVar1->m14;
		param_2->m11 = pfVar1->m11;
		param_2->m12 = fVar1;
		param_2->m13 = fVar2;
		param_2->m14 = fVar3;
		fVar1 = pfVar1->m22;
		fVar2 = pfVar1->m23;
		fVar3 = pfVar1->m24;
		param_2->m21 = pfVar1->m21;
		param_2->m22 = fVar1;
		param_2->m23 = fVar2;
		param_2->m24 = fVar3;
		fVar1 = pfVar1->m32;
		fVar2 = pfVar1->m33;
		fVar3 = pfVar1->m34;
		param_2->m31 = pfVar1->m31;
		param_2->m32 = fVar1;
		param_2->m33 = fVar2;
		param_2->m34 = fVar3;
		fVar1 = pfVar1->m42;
		fVar2 = pfVar1->m43;
		fVar3 = pfVar1->m44;
		param_2->m41 = pfVar1->m41;
		param_2->m42 = fVar1;
		param_2->m43 = fVar2;
		param_2->m44 = fVar3;
		bVar4 = true;
		}
		return bVar4;
		}
		
	*/
	return false;
}

uint InstanceNodeOGISub::FUN_001f9390(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Matrix4Array * __thiscall InstanceNodeOGISub::FUN_001f9390(InstanceNodeOGISub *this,int cnt){
		Matrix4Array *matrixArray;
		Matrix4 **ppMVar1;
		Matrix4 *matrix;
		uint uVar2;
		if (this->matrixArray2 != (Matrix4Array *)0x0) {
		return this->matrixArray2;
		}
		matrixArray = (Matrix4Array *)VirtualPool::AllocateMemory(8);
		if (matrixArray == (Matrix4Array *)0x0) {
		matrixArray = (Matrix4Array *)0x0;
		}
		else {
		matrixArray->cnt = cnt;
		if (cnt == 0) {
		matrixArray->array = (Matrix4 **)0x0;
		}
		else {
		ppMVar1 = (Matrix4 **)VirtualPool::AllocateMemory(cnt * 4);
		matrixArray->array = ppMVar1;
		}
		}
		this->matrixArray2 = matrixArray;
		uVar2 = 0;
		if (cnt != 0) {
		do {
		matrix = (Matrix4 *)VirtualPool::AllocateMemory(0x50);
		if (matrix == (Matrix4 *)0x0) {
		matrix = (Matrix4 *)0x0;
		}
		else {
		matrix[1].m11 = 0.0;
		matrix[1].m13 = 0.0;
		matrix[1].m14 = 0.0;
		Matrix4::Construct1(matrix);
		matrix[1].m11 = (float)((uint)matrix[1].m11 | 4);
		}
		this->matrixArray2->array[uVar2] = matrix;
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)cnt);
		return this->matrixArray2;
		}
		return this->matrixArray2;
		}
		
	*/
	return 0;
}

void InstanceNodeOGISub::FUN_001f9450() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::FUN_001f9450(InstanceNodeOGISub *this){
		byte bVar1;
		byte bVar2;
		uint uVar3;
		OGIType2 **ppOVar4;
		Matrix4 *pMVar5;
		Matrix4 *pMVar6;
		int iVar7;
		uint uVar8;
		if (this->matrixArray2 != (Matrix4Array *)0x0) {
		uVar3 = this->matrixArray2->cnt;
		bVar2 = this->ogi->header[1];
		uVar8 = 0;
		if (uVar3 != 0) {
		iVar7 = 0;
		do {
		if (uVar8 < bVar2) {
		ppOVar4 = this->ogi->type2list;
		bVar1 = *(byte *)((int)ppOVar4 + iVar7 + 0x40);
		if (bVar1 != 0xff) {
		pMVar5 = this->matrixArray2->array[uVar8];
		pMVar6 = this->matrixArray->array[bVar1];
		pMVar5[1].m13 = (float)((int)ppOVar4 + iVar7);
		pMVar5[1].m14 = (float)pMVar6;
		}
		}
		else {
		pMVar5 = this->matrixArray2->array[uVar8];
		pMVar5[1].m13 = 0.0;
		pMVar5[1].m14 = 0.0;
		}
		uVar8 = uVar8 + 1;
		iVar7 = iVar7 + 0x50;
		}
		 while (uVar8 < uVar3);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::FUN_001f9570() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::FUN_001f9570(InstanceNodeOGISub *this){
		uint uVar1;
		void *pvVar2;
		int iVar3;
		uint uVar4;
		*(uint *)this = *(uint *)this & 0xfffffe01;
		if (this->genericArray != (GenericArray *)0x0) {
		uVar4 = (uint)this->ogi->header[2];
		uVar1 = this->genericArray->cnt;
		if ((int)uVar1 <= (int)uVar4) {
		uVar4 = uVar1;
		}
		iVar3 = 0;
		if (0 < (int)uVar4) {
		do {
		pvVar2 = this->genericArray->array[iVar3];
		if (pvVar2 != (void *)0x0) {
		*(void **)((int)pvVar2 + 0x58) = this->genericArray2->array[iVar3];
		}
		uVar1 = *(uint *)this;
		iVar3 = iVar3 + 1;
		*(uint *)this = ((uVar1 & 0xfffffffe) + 2 ^ uVar1) & 0x1fe ^ uVar1;
		}
		 while (iVar3 < (int)uVar4);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::FUN_001f9630() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::FUN_001f9630(InstanceNodeOGISub *this){
		Matrix4 *pMVar1;
		Matrix4Array *pMVar2;
		uint uVar3;
		pMVar2 = this->matrixArray2;
		if ((pMVar2 != (Matrix4Array *)0x0) && (uVar3 = 0, pMVar2->cnt != 0)) {
		do {
		pMVar1 = pMVar2->array[uVar3];
		pMVar1[1].m13 = 0.0;
		pMVar1[1].m14 = 0.0;
		pMVar2 = this->matrixArray2;
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < pMVar2->cnt);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceNodeOGISub::FUN_001fabc0(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GenericArray * __thiscall InstanceNodeOGISub::FUN_001fabc0(InstanceNodeOGISub *this,int cnt){
		GenericArray *array;
		uint i;
		GenericArray *array2;
		void **ppvVar1;
		if (this->genericArray == (GenericArray *)0x0) {
		array = (GenericArray *)VirtualPool::AllocateMemory(8);
		if (array == (GenericArray *)0x0) {
		array = (GenericArray *)0x0;
		}
		else {
		array->cnt = cnt;
		if (cnt == 0) {
		array->array = (void **)0x0;
		}
		else {
		ppvVar1 = (void **)VirtualPool::AllocateMemory(cnt * 4);
		array->array = ppvVar1;
		}
		}
		this->genericArray = array;
		if ((array != (GenericArray *)0x0) && (i = 0, array->cnt != 0)) {
		do {
		this->genericArray->array[i] = (void *)0x0;
		i = i + 1;
		}
		 while (i < this->genericArray->cnt);
		}
		}
		if (this->genericArray2 == (GenericArray *)0x0) {
		array2 = (GenericArray *)VirtualPool::AllocateMemory(8);
		if (array2 == (GenericArray *)0x0) {
		array2 = (GenericArray *)0x0;
		}
		else {
		array2->cnt = cnt;
		if (cnt == 0) {
		array2->array = (void **)0x0;
		}
		else {
		ppvVar1 = (void **)VirtualPool::AllocateMemory(cnt * 4);
		array2->array = ppvVar1;
		}
		}
		this->genericArray2 = array2;
		if ((array2 != (GenericArray *)0x0) && (i = 0, array2->cnt != 0)) {
		do {
		this->genericArray2->array[i] = (void *)0x0;
		i = i + 1;
		}
		 while (i < this->genericArray2->cnt);
		}
		}
		return this->genericArray2;
		}
		
	*/
	return 0;
}

void InstanceNodeOGISub::CleanUp1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::CleanUp1(InstanceNodeOGISub *this){
		Matrix4 *ptr;
		Matrix4Array *ptr_00;
		uint uVar1;
		if (this->matrixArray2 != (Matrix4Array *)0x0) {
		uVar1 = 0;
		if (this->matrixArray2->cnt != 0) {
		do {
		ptr = this->matrixArray2->array[uVar1];
		if (ptr != (Matrix4 *)0x0) {
		VirtualPool::FreeMemory(ptr);
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->matrixArray2->cnt);
		}
		ptr_00 = this->matrixArray2;
		if (ptr_00 != (Matrix4Array *)0x0) {
		VirtualPool::FreeMemory(ptr_00->array);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->matrixArray2 = (Matrix4Array *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::CleanUp2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::CleanUp2(InstanceNodeOGISub *this){
		void **ptr;
		GenericArray *ptr_00;
		uint uVar1;
		if (this->genericArray2 != (GenericArray *)0x0) {
		uVar1 = 0;
		if (this->genericArray2->cnt != 0) {
		do {
		ptr = (void **)this->genericArray2->array[uVar1];
		if (ptr != (void **)0x0) {
		if (*ptr != (void *)0x0) {
		FUN_001fe2e0(*ptr,1);
		}
		VirtualPool::FreeMemory(ptr);
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->genericArray2->cnt);
		}
		ptr_00 = this->genericArray2;
		if (ptr_00 != (GenericArray *)0x0) {
		VirtualPool::FreeMemory(ptr_00->array);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->genericArray2 = (GenericArray *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::FUN_001fb6d0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeOGISub::FUN_001fb6d0(InstanceNodeOGISub *this,undefined4 param_1){
		Matrix4Array *pMVar1;
		int iVar2;
		uint uVar3;
		int *piVar4;
		*(undefined4 *)&this->field_0xc = param_1;
		pMVar1 = this->matrixArray2;
		if (pMVar1 != (Matrix4Array *)0x0) {
		for (uVar3 = 0;
		 (-1 < (int)uVar3 && (uVar3 < pMVar1->cnt));
		 uVar3 = uVar3 + 1) {
		piVar4 = (int *)(*(code *)PTR_Get_00395d14)();
		iVar2 = *piVar4;
		if (iVar2 != 0) {
		*(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)&this->field_0xc;
		*(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 3;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::Dispose(InstanceNodeOGISub *this){
		undefined *ptr;
		Matrix4Array *ptr_00;
		GenericArray *ptr_01;
		ptr = this->field5_0x8;
		if (ptr != (undefined *)0x0) {
		FUN_001fd2c0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = this->matrixArray;
		if (ptr_00 != (Matrix4Array *)0x0) {
		VirtualPool::FreeMemory(ptr_00->array);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->field5_0x8 = (undefined *)0x0;
		this->matrixArray = (Matrix4Array *)0x0;
		CleanUp1(this);
		CleanUp2(this);
		ptr_01 = this->genericArray;
		if (ptr_01 != (GenericArray *)0x0) {
		VirtualPool::FreeMemory(ptr_01->array);
		VirtualPool::FreeMemory(ptr_01);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::Init(OGI* ogi, int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeOGISub::Init(InstanceNodeOGISub *this,OGI *ogi,int param_2,int param_3){
		undefined *ptr;
		Matrix4Array *matrixArray;
		int extraout_ECX;
		int extraout_ECX_00;
		int this_00;
		int extraout_ECX_01;
		uint cnt;
		if (this->ogi != ogi) {
		ptr = this->field5_0x8;
		if (ptr != (undefined *)0x0) {
		FUN_001fd2c0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		matrixArray = this->matrixArray;
		if (matrixArray != (Matrix4Array *)0x0) {
		VirtualPool::FreeMemory(matrixArray->array);
		VirtualPool::FreeMemory(matrixArray);
		}
		this->field5_0x8 = (undefined *)0x0;
		this->matrixArray = (Matrix4Array *)0x0;
		this->ogi = ogi;
		if (ogi != (OGI *)0x0) {
		cnt = *(uint *)ogi->header & 0xff;
		matrixArray = (Matrix4Array *)VirtualPool::AllocateMemory(8);
		if (matrixArray == (Matrix4Array *)0x0) {
		matrixArray = (Matrix4Array *)0x0;
		}
		else {
		matrixArray = Matrix4Array::Construct(matrixArray,cnt);
		}
		this->matrixArray = matrixArray;
		FUN_001f9630(this);
		FUN_001f95d0(extraout_ECX);
		FUN_001f9600(extraout_ECX_00);
		FUN_001f92d0(this_00,cnt);
		if (param_2 != 0) {
		FUN_001fabc0(this,param_2);
		}
		if (param_3 != 0) {
		FUN_001f9390(this,param_3);
		}
		FUN_001f9450(this);
		FUN_001f94e0(extraout_ECX_01);
		FUN_001f9570(this);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::FUN_001fd9c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeOGISub::FUN_001fd9c0(InstanceNodeOGISub *this){
		undefined *ptr;
		Matrix4Array *ptr_00;
		if (this->ogi != (OGI *)0x0) {
		ptr = this->field5_0x8;
		if (ptr != (undefined *)0x0) {
		FUN_001fd2c0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = this->matrixArray;
		if (ptr_00 != (Matrix4Array *)0x0) {
		VirtualPool::FreeMemory(ptr_00->array);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->field5_0x8 = (undefined *)0x0;
		this->matrixArray = (Matrix4Array *)0x0;
		this->ogi = (OGI *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeOGISub::Construct(OGI* ogi, int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeOGISub * __thiscall InstanceNodeOGISub::Construct(InstanceNodeOGISub *this,OGI *ogi,int param_2,int param_3){
		this->ogi = (OGI *)0x0;
		this->field5_0x8 = (undefined *)0x0;
		*(undefined4 *)&this->field_0xc = 0;
		this->matrixArray2 = (Matrix4Array *)0x0;
		this->genericArray = (GenericArray *)0x0;
		this->matrixArray = (Matrix4Array *)0x0;
		this->genericArray2 = (GenericArray *)0x0;
		*(undefined4 *)this = 0;
		*(undefined4 *)this = 1;
		Init(this,ogi,param_2,param_3);
		*(undefined4 *)&this->field_0x24 = 0;
		*(undefined4 *)&this->field_0x28 = 0;
		*(undefined4 *)&this->field_0x2c = 0;
		*(undefined4 *)&this->field_0x20 = 0;
		this->field_0x30 = 0;
		this->field_0x31 = 0;
		*(undefined4 *)&this->field_0x34 = 0;
		*(undefined4 *)&this->field_0x38 = 0;
		*(undefined4 *)&this->field_0x3c = 0;
		return this;
		}
		
	*/
	return;
}

float InstanceNodeOGISub::GetAnimationProgress(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeOGISub::GetAnimationProgress(InstanceNodeOGISub *this,byte param_1){
		void *pvVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		if (param_1 == 0xff) {
		if ((*(int *)(this->field5_0x8 + 0x5c) == 0) ||(fVar4 = FUN_001f7bd0(*(int *)(*(int *)(this->field5_0x8 + 0x5c) + 4)),fVar4 <= FLOAT_00386394)) {
		fVar4 = 0.0;
		}
		return fVar4;
		}
		pvVar1 = this->genericArray->array[param_1];
		do {
		if (pvVar1 == (void *)0x0) {
		return FLOAT_00386394;
		}
		if (*(int *)((int)pvVar1 + 0x5c) != 0) {
		iVar2 = *(int *)(*(int *)((int)pvVar1 + 0x5c) + 4);
		fVar4 = 0.0;
		if (iVar2 != 0) {
		do {
		fVar3 = (float)(int)(((float)*(int *)(iVar2 + 0x14) * TimePerTick1 -(float)*(int *)(iVar2 + 0x18) * TimePerTick1) * TicksPerTime) *TimePerTick1;
		if (fVar4 < fVar3) {
		fVar4 = fVar3;
		}
		iVar2 = *(int *)(iVar2 + 0x2c);
		}
		 while (iVar2 != 0);
		if (0.0 < fVar4) {
		return fVar4;
		}
		}
		}
		pvVar1 = *(void **)((int)pvVar1 + 0x60);
		}
		 while( true );
		}
		
	*/
	return 0.0f;
}

uint InstanceNodeOGISub::FUN_001fb7d0(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeOGISub::FUN_001fb7d0(InstanceNodeOGISub *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		InstanceNodeKSubAbstract_VTable *pIVar1;
		Matrix4Array *pMVar2;
		Matrix4Array *pMVar3;
		Matrix4 **ppMVar4;
		byte bVar5;
		pIVar1 = (param_2->parent).parent.vtable;
		if (((uint)pIVar1 >> 0x12 & 1) == 0) {
		return ((uint)pIVar1 >> 0x1a) << 8;
		}
		pMVar2 = this->matrixArray2;
		bVar5 = 1;
		pMVar3 = pMVar2;
		if ((pMVar2 == (Matrix4Array *)0x0) || (*(int *)&this->field_0xc == 0)) {
		LAB_001fb84c:return (uint)pMVar3 & 0xffffff00 | (uint)bVar5;
		}
		pMVar3 = (Matrix4Array *)0x0;
		LAB_001fb800:do {
		if (((int)pMVar3 < 0) || ((Matrix4Array *)pMVar2->cnt <= pMVar3)) goto LAB_001fb84c;
		ppMVar4 = (Matrix4 **)(*(code *)PTR_Get_00395d14)();
		if (*ppMVar4 != (Matrix4 *)0x0) {
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139500(param_2,*ppMVar4,'\x01');
		pMVar3 = (Matrix4Array *)((int)&pMVar3->array + 1);
		goto LAB_001fb800;
		}
		bVar5 = 0;
		}
		pMVar3 = (Matrix4Array *)((int)&pMVar3->array + 1);
		}
		 while( true );
		}
		
	*/
	return 0;
}

