#include "headers/Known/Camera/GameCameraBoss.h"

#include "headers/Known/Math/Matrix4.h"
void GameCameraBoss::Method3(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraBoss::Method3(GameCameraBoss *this,undefined4 *param_1){
		undefined *puVar1;
		float fVar2;
		float fVar3;
		puVar1 = &this->field_0xc0;
		*(undefined4 *)puVar1 = *param_1;
		*(undefined4 *)&this->field_0xc4 = param_1[1];
		*(undefined4 *)&this->field_0xc8 = param_1[2];
		*(undefined4 *)&this->field_0xcc = param_1[3];
		fVar2 = *(float *)puVar1;
		fVar3 = *(float *)&this->field_0xc4;
		*(undefined (*) [16])puVar1 =CONCAT412(fVar2 * (this->matrix1).m14 + fVar3 * (this->matrix1).m24 +(this->matrix1).m34 * 0.0 + (this->matrix1).m44,CONCAT48(fVar2 * (this->matrix1).m13 + fVar3 * (this->matrix1).m23 +(this->matrix1).m33 * 0.0 + (this->matrix1).m43,CONCAT44(fVar2 * (this->matrix1).m12 + fVar3 * (this->matrix1).m22 +(this->matrix1).m32 * 0.0 + (this->matrix1).m42,fVar2 * (this->matrix1).m11 + fVar3 * (this->matrix1).m21 +(this->matrix1).m31 * 0.0 + (this->matrix1).m41)));
		return;
		}
		
	*/
	return;
}

float GameCameraBoss::GetCameraProgress(uint* param_1, int param_2, byte* param_3[16]) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraBoss::GetCameraProgress(GameCameraBoss *this,undefined4 *param_1,int param_2,undefined (*param_3) [16]){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float local_30;
		float fStack44;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		fVar4 = FLOAT_00386394;
		local_30 = SUB124(*(undefined (*) [12])(param_2 + 0x50),0);
		fStack44 = SUB124(*(undefined (*) [12])(param_2 + 0x50) >> 0x20,0);
		fVar1 = local_30 * (this->matrix1).m11 + fStack44 * (this->matrix1).m21 +(this->matrix1).m31 * 0.0 + (this->matrix1).m41;
		local_1c = local_30 * (this->matrix1).m12 + fStack44 * (this->matrix1).m22 +(this->matrix1).m32 * 0.0 + (this->matrix1).m42;
		fVar3 = local_30 * (this->matrix1).m13 + fStack44 * (this->matrix1).m23 +(this->matrix1).m33 * 0.0 + (this->matrix1).m43;
		local_14 = local_30 * (this->matrix1).m14 + fStack44 * (this->matrix1).m24 +(this->matrix1).m34 * 0.0 + (this->matrix1).m44;
		fVar2 = 0.0;
		if ((0.0 < local_1c) && (local_1c < (this->field3_0x90).x)) {
		*(float *)(*param_3 + 4) = local_1c;
		local_20 = fVar1;
		local_18 = fVar3;
		if (this->field_0xa0 == '\0') {
		*(float *)(*param_3 + 4) = (this->field3_0x90).z + *(float *)(*param_3 + 4);
		}
		else {
		fVar4 = FUN_001c9770((int)this,&local_20);
		*(float *)(*param_3 + 4) = fVar4 + *(float *)(*param_3 + 4);
		}
		fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
		if (FLOAT_003a3cd0 < fVar4) {
		fVar2 = FLOAT_0038639c / SQRT(fVar4);
		}
		fVar1 = fVar2 * fVar1;
		fVar3 = fVar3 * fVar2;
		fVar4 = FLOAT_0038639c;
		if (this->field_0xa0 == '\0') {
		fVar2 = (this->field3_0x90).y;
		}
		else {
		fVar2 = FUN_001c96d0((int)this,&local_20);
		}
		*(float *)*param_3 = fVar1 * fVar2;
		*(float *)(*param_3 + 8) = fVar3 * fVar2;
		*(float *)(*param_3 + 0xc) = fVar4;
		FUN_001d1100((int)this,(float *)param_3,fVar2);
		thunk_FUN_000a4280(&this->matrix2,param_3);
		return FLOAT_00386394;
		}
		*(undefined4 *)*param_3 = *param_1;
		*(undefined4 *)(*param_3 + 4) = param_1[1];
		*(undefined4 *)(*param_3 + 8) = param_1[2];
		*(undefined4 *)(*param_3 + 0xc) = param_1[3];
		return fVar4;
		}
		
	*/
	return 0.0f;
}

bool GameCameraBoss::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraBoss::IsA(GameCameraBoss *this,int **param_1){
		undefined *puVar1;
		undefined **ppuVar2;
		int *piVar3;
		int **this_00;
		bool bVar4;
		bool bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		char cVar9;
		uint uVar11;
		uint uVar12;
		uint uVar10;
		this_00 = param_1;
		bVar4 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar5 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar5 == false) {
		LAB_001d3fad:bVar6 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar10 = FUN_00141af0(*param_1,&this->matrix1,0xa1a,0);
		bVar6 = (byte)uVar10;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d3fad;
		uVar10 = FUN_00141b40(*param_1,&this->matrix1,0xa1a,0);
		bVar6 = (byte)uVar10;
		}
		bVar5 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar5 == false) {
		LAB_001d3fec:bVar7 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar10 = FUN_00141af0(*param_1,&this->matrix2,0xa1b,0);
		bVar7 = (byte)uVar10;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d3fec;
		uVar10 = FUN_00141b40(*param_1,&this->matrix2,0xa1b,0);
		bVar7 = (byte)uVar10;
		}
		bVar5 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar5 == false) {
		LAB_001d402e:bVar8 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar8 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field3_0x90,0xa1c,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d402e;
		bVar8 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field3_0x90,0xa1c,0);
		}
		bVar8 = bVar4 & bVar6 & bVar7 & bVar8;
		puVar1 = &this->field_0xa0;
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar4 == false) {
		LAB_001d40bf:*puVar1 = 0;
		}
		else {
		if (param_1[1] == (int *)0x0) {
		cVar9 = (**(code **)(**param_1 + 0x6c))(0xa49,puVar1);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d40bf;
		piVar3 = *param_1;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)(byte)*puVar1);
		cVar9 = (**(code **)(*piVar3 + 0x1c))(0xa49,param_1);
		}
		if (cVar9 == '\0') goto LAB_001d40bf;
		uVar10 = FUN_000f2a20(this_00,(undefined4 *)&this->field_0xa4,0xa4a);
		uVar11 = FUN_000f2a20(this_00,(undefined4 *)&this->field_0xa8,0xa4b);
		uVar12 = FUN_000f2a20(this_00,(undefined4 *)&this->field_0xac,0xa4c);
		bVar8 = bVar8 & (byte)uVar10 & (byte)uVar11 & (byte)uVar12;
		}
		ppuVar2 = &this->field20_0xb0;
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar4 == false) {
		LAB_001d4104:*ppuVar2 = (undefined *)0x0;
		}
		else {
		if (this_00[1] == (int *)0x0) {
		cVar9 = (**(code **)(**this_00 + 0x68))(0xa59,ppuVar2);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_001d4104;
		param_1 = (int **)*ppuVar2;
		cVar9 = (**(code **)(**this_00 + 0x18))(0xa59,param_1);
		}
		if (cVar9 == '\0') goto LAB_001d4104;
		}
		ppuVar2 = &this->field49_0xd0;
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar4 != false) {
		if (this_00[1] == (int *)0x0) {
		cVar9 = (**(code **)(**this_00 + 0x6c))(0xa5a,ppuVar2);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_001d4151;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)*(byte *)ppuVar2);
		cVar9 = (**(code **)(**this_00 + 0x1c))(0xa5a,param_1);
		}
		if (cVar9 != '\0') {
		return (bool)bVar8;
		}
		}
		LAB_001d4151:*(undefined *)ppuVar2 = 0;
		return (bool)bVar8;
		}
		
	*/
	return false;
}

void GameCameraBoss::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraBoss::Construct(GameCameraBoss *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Boss;
		this->field_0xa0 = 0;
		this->field20_0xb0 = (undefined *)0x0;
		*(undefined *)&this->field49_0xd0 = 0;
		return;
		}
		
	*/
	return;
}

void GameCameraBoss::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraBoss::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraBoss::Method7(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraBoss::Method7(GameCameraBoss *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		Matrix4 *matrix;
		matrix = &this->matrix2;
		Matrix4::Multiply4443(matrix,param_1,matrix);
		fVar1 = (this->matrix2).m12;
		fVar2 = (this->matrix2).m13;
		fVar3 = (this->matrix2).m14;
		(this->matrix1).m11 = matrix->m11;
		(this->matrix1).m12 = fVar1;
		(this->matrix1).m13 = fVar2;
		(this->matrix1).m14 = fVar3;
		fVar1 = (this->matrix2).m22;
		fVar2 = (this->matrix2).m23;
		fVar3 = (this->matrix2).m24;
		(this->matrix1).m21 = (this->matrix2).m21;
		(this->matrix1).m22 = fVar1;
		(this->matrix1).m23 = fVar2;
		(this->matrix1).m24 = fVar3;
		fVar1 = (this->matrix2).m32;
		fVar2 = (this->matrix2).m33;
		fVar3 = (this->matrix2).m34;
		(this->matrix1).m31 = (this->matrix2).m31;
		(this->matrix1).m32 = fVar1;
		(this->matrix1).m33 = fVar2;
		(this->matrix1).m34 = fVar3;
		fVar1 = (this->matrix2).m42;
		fVar2 = (this->matrix2).m43;
		fVar3 = (this->matrix2).m44;
		(this->matrix1).m41 = (this->matrix2).m41;
		(this->matrix1).m42 = fVar1;
		(this->matrix1).m43 = fVar2;
		(this->matrix1).m44 = fVar3;
		Matrix4::FUN_000d4180(&this->matrix1);
		return;
		}
		
	*/
	return;
}

int* GameCameraBoss::SetInternal(GameCameraBoss* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraBoss::SetInternal(GameCameraBoss *this,GameCameraBoss *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		(*((this->parent).vtable)->Set1)(&this->parent,&param_1->parent);
		fVar1 = (param_1->matrix1).m12;
		fVar2 = (param_1->matrix1).m13;
		fVar3 = (param_1->matrix1).m14;
		(this->matrix1).m11 = (param_1->matrix1).m11;
		(this->matrix1).m12 = fVar1;
		(this->matrix1).m13 = fVar2;
		(this->matrix1).m14 = fVar3;
		fVar1 = (param_1->matrix1).m22;
		fVar2 = (param_1->matrix1).m23;
		fVar3 = (param_1->matrix1).m24;
		(this->matrix1).m21 = (param_1->matrix1).m21;
		(this->matrix1).m22 = fVar1;
		(this->matrix1).m23 = fVar2;
		(this->matrix1).m24 = fVar3;
		fVar1 = (param_1->matrix1).m32;
		fVar2 = (param_1->matrix1).m33;
		fVar3 = (param_1->matrix1).m34;
		(this->matrix1).m31 = (param_1->matrix1).m31;
		(this->matrix1).m32 = fVar1;
		(this->matrix1).m33 = fVar2;
		(this->matrix1).m34 = fVar3;
		fVar1 = (param_1->matrix1).m42;
		fVar2 = (param_1->matrix1).m43;
		fVar3 = (param_1->matrix1).m44;
		(this->matrix1).m41 = (param_1->matrix1).m41;
		(this->matrix1).m42 = fVar1;
		(this->matrix1).m43 = fVar2;
		(this->matrix1).m44 = fVar3;
		fVar1 = (param_1->matrix2).m12;
		fVar2 = (param_1->matrix2).m13;
		fVar3 = (param_1->matrix2).m14;
		(this->matrix2).m11 = (param_1->matrix2).m11;
		(this->matrix2).m12 = fVar1;
		(this->matrix2).m13 = fVar2;
		(this->matrix2).m14 = fVar3;
		fVar1 = (param_1->matrix2).m22;
		fVar2 = (param_1->matrix2).m23;
		fVar3 = (param_1->matrix2).m24;
		(this->matrix2).m21 = (param_1->matrix2).m21;
		(this->matrix2).m22 = fVar1;
		(this->matrix2).m23 = fVar2;
		(this->matrix2).m24 = fVar3;
		fVar1 = (param_1->matrix2).m32;
		fVar2 = (param_1->matrix2).m33;
		fVar3 = (param_1->matrix2).m34;
		(this->matrix2).m31 = (param_1->matrix2).m31;
		(this->matrix2).m32 = fVar1;
		(this->matrix2).m33 = fVar2;
		(this->matrix2).m34 = fVar3;
		fVar1 = (param_1->matrix2).m42;
		fVar2 = (param_1->matrix2).m43;
		fVar3 = (param_1->matrix2).m44;
		(this->matrix2).m41 = (param_1->matrix2).m41;
		(this->matrix2).m42 = fVar1;
		(this->matrix2).m43 = fVar2;
		(this->matrix2).m44 = fVar3;
		(this->field3_0x90).x = (param_1->field3_0x90).x;
		(this->field3_0x90).y = (param_1->field3_0x90).y;
		(this->field3_0x90).z = (param_1->field3_0x90).z;
		(this->field3_0x90).w = (param_1->field3_0x90).w;
		return (int *)this;
		}
		
	*/
	return null;
}

void GameCameraBoss::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraBoss::Method5(GameCameraBoss *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		(**(code **)(*param_1 + 4))(&this->matrix1,0x40,1);
		(**(code **)(*param_1 + 4))(&this->matrix2,0x40,1);
		(**(code **)(*param_1 + 4))(&this->field3_0x90,0x10,1);
		(**(code **)(*param_1 + 0x3c))(&this->field_0xa0);
		(**(code **)(*param_1 + 0x38))(&this->field_0xa4);
		(**(code **)(*param_1 + 0x38))(&this->field_0xa8);
		(**(code **)(*param_1 + 0x38))(&this->field_0xac);
		(**(code **)(*param_1 + 0x38))(&this->field20_0xb0);
		(**(code **)(*param_1 + 0x3c))(&this->field49_0xd0);
		return;
		}
		
	*/
	return;
}

void GameCameraBoss::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraBoss::Method8(GameCameraBoss *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(**(code **)(*param_1 + 0xc))(&this->matrix1,0x40);
		(**(code **)(*param_1 + 0xc))(&this->matrix2,0x40);
		(**(code **)(*param_1 + 0xc))(&this->field3_0x90,0x10);
		(**(code **)(*param_1 + 0x68))(this->field_0xa0);
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0xa4);
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0xa8);
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0xac);
		(**(code **)(*param_1 + 100))(this->field20_0xb0);
		(**(code **)(*param_1 + 0x68))(*(undefined *)&this->field49_0xd0);
		return;
		}
		
	*/
	return;
}

int GameCameraBoss::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int GameCameraBoss::GetBuilderIndex(void){
		return 0xa19;
		}
		
	*/
	return 0;
}

void GameCameraBoss::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall GameCameraBoss::Dispose(GameCameraBoss *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

