#include "headers/Known/Camera/GameCameraUnk2.h"

#include "headers/Known/Math/Vector4.h"
void GameCameraUnk2::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraUnk2::Unroll(GameCameraUnk2 *this){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void GameCameraUnk2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraUnk2 * __fastcall GameCameraUnk2::Construct(GameCameraUnk2 *this){
		GameCameraAbstract::Construct(&this->parent);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk2;
		return this;
		}
		
	*/
	return;
}

void GameCameraUnk2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraUnk2 * __thiscall GameCameraUnk2::Dispose(GameCameraUnk2 *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk2;
		Unroll(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraUnk2::Method7(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraUnk2::Method7(GameCameraUnk2 *this,float *param_1){
		float fVar1;
		float fVar2;
		fVar1 = (this->field15_0x30).x;
		fVar2 = (this->field15_0x30).y;
		this->field15_0x30 =(Vector4)CONCAT412(fVar1 * param_1[3] + fVar2 * param_1[7] +param_1[0xb] * 0.0 + param_1[0xf],CONCAT48(fVar1 * param_1[2] + fVar2 * param_1[6] +param_1[10] * 0.0 + param_1[0xe],CONCAT44(fVar1 * param_1[1] + fVar2 * param_1[5] +param_1[9] * 0.0 + param_1[0xd],fVar1 * *param_1 + fVar2 * param_1[4] +param_1[8] * 0.0 + param_1[0xc])));
		return;
		}
		
	*/
	return;
}

int* GameCameraUnk2::Set2(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraUnk2::Set2(GameCameraUnk2 *this,GameCameraAbstract *param_1){
		(*((this->parent).vtable)->SetInternal)(&this->parent,param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

float GameCameraUnk2::GetCameraProgress(uint param_1, int param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraUnk2::GetCameraProgress(GameCameraUnk2 *this,undefined4 param_1,int param_2,float *param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		fVar3 = FLOAT_0038639c;
		fVar2 = FLOAT_00386394;
		fVar4 = *(float *)(param_2 + 0x50) - (this->field15_0x30).x;
		fVar6 = (this->field15_0x30).y;
		fVar8 = *(float *)(param_2 + 0x58) - (this->field15_0x30).z;
		fVar6 = fVar6 - fVar6;
		fVar7 = fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4;
		fVar5 = SQRT(fVar7);
		fVar6 = (this->field1_0x10).y;
		fVar9 = fVar5;
		if (fVar5 < fVar6) {
		fVar9 = fVar6;
		}
		fVar9 = fVar9 + (this->field1_0x10).x;
		if (fVar7 <= FLOAT_003a3cd0) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar7);
		}
		fVar7 = (this->field15_0x30).z;
		if (*(float *)&this->field_0x24 <= fVar5) {
		if (fVar5 < this->field2_0x20 || fVar5 == this->field2_0x20) {
		fVar5 = ((fVar5 - *(float *)&this->field_0x24) /(this->field2_0x20 - *(float *)&this->field_0x24)) *((this->field1_0x10).w - (this->field1_0x10).z) + (this->field1_0x10).z;
		}
		else {
		fVar5 = (this->field1_0x10).w;
		}
		}
		else {
		fVar5 = (this->field1_0x10).z;
		}
		fVar1 = *(float *)(param_2 + 0x54);
		*param_3 = (this->field15_0x30).x + fVar6 * fVar4 * fVar9;
		param_3[1] = fVar1 + fVar5;
		param_3[2] = fVar7 + fVar8 * fVar6 * fVar9;
		param_3[3] = fVar3;
		return fVar2;
		}
		
	*/
	return 0.0f;
}

bool GameCameraUnk2::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraUnk2::IsA(GameCameraUnk2 *this,int **param_1){
		float *pfVar1;
		bool bVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		byte bVar9;
		bVar2 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_001d21df:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**param_1 + 0x68))(0xa42,&this->field1_0x10);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d21df;
		bVar4 = (**(code **)(**param_1 + 0x18))(0xa42,(this->field1_0x10).x);
		}
		pfVar1 = &(this->field1_0x10).y;
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_001d2220:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar5 = (**(code **)(**param_1 + 0x68))(0xa43,pfVar1);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d2220;
		bVar5 = (**(code **)(**param_1 + 0x18))(0xa43,*pfVar1);
		}
		pfVar1 = &(this->field1_0x10).z;
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_001d2261:bVar6 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar6 = (**(code **)(**param_1 + 0x68))(0xa44,pfVar1);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d2261;
		bVar6 = (**(code **)(**param_1 + 0x18))(0xa44,*pfVar1);
		}
		pfVar1 = &(this->field1_0x10).w;
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_001d22a2:bVar7 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar7 = (**(code **)(**param_1 + 0x68))(0xa45,pfVar1);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d22a2;
		bVar7 = (**(code **)(**param_1 + 0x18))(0xa45,*pfVar1);
		}
		pfVar1 = &this->field2_0x20;
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_001d22e3:bVar8 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar8 = (**(code **)(**param_1 + 0x68))(0xa46,pfVar1);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d22e3;
		bVar8 = (**(code **)(**param_1 + 0x18))(0xa46,*pfVar1);
		}
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar9 = (**(code **)(**param_1 + 0x68))(0xa48,pfVar1);
		goto LAB_001d2323;
		}
		if (param_1[1] == (int *)0x1) {
		bVar9 = (**(code **)(**param_1 + 0x18))(0xa48,*pfVar1);
		goto LAB_001d2323;
		}
		}
		bVar9 = 0;
		LAB_001d2323:bVar9 = bVar2 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar2 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field15_0x30,0xa47,0);
		return (bool)(bVar2 & bVar9);
		}
		if (param_1[1] == (int *)0x1) {
		bVar2 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field15_0x30,0xa47,0);
		return (bool)(bVar2 & bVar9);
		}
		}
		return false;
		}
		
	*/
	return false;
}

uint GameCameraUnk2::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraUnk2::GetBuilderIndex(void){
		return 0x1c0c;
		}
		
	*/
	return 0;
}

void GameCameraUnk2::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk2::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraUnk2::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraUnk2::Method5(GameCameraUnk2 *this,int *param_1){
		(**(code **)(*param_1 + 4))(this,4,1);
		return;
		}
		
	*/
	return;
}

void GameCameraUnk2::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraUnk2::Method8(GameCameraUnk2 *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(this,4);
		return;
		}
		
	*/
	return;
}

int* GameCameraUnk2::SetInternal(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraUnk2::SetInternal(GameCameraUnk2 *this,int param_1){
		(*((this->parent).vtable)->Set1)(&this->parent,(GameCameraAbstract *)param_1);
		(this->field1_0x10).x = *(float *)(param_1 + 0x10);
		(this->field1_0x10).y = *(float *)(param_1 + 0x14);
		(this->field1_0x10).z = *(float *)(param_1 + 0x18);
		(this->field1_0x10).w = *(float *)(param_1 + 0x1c);
		this->field2_0x20 = *(float *)(param_1 + 0x20);
		(this->field15_0x30).x = *(float *)(param_1 + 0x30);
		(this->field15_0x30).y = *(float *)(param_1 + 0x34);
		(this->field15_0x30).z = *(float *)(param_1 + 0x38);
		(this->field15_0x30).w = *(float *)(param_1 + 0x3c);
		return (int *)this;
		}
		
	*/
	return null;
}

void GameCameraUnk2::Construct_12(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraUnk2::Construct(GameCameraUnk2 *this,Vector4 *param_1){
		float fVar1;
		fVar1 = FLOAT_0038807c;
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk2;
		(this->field15_0x30).x = param_1->x;
		(this->field15_0x30).y = param_1->y;
		(this->field15_0x30).z = param_1->z;
		(this->field15_0x30).w = param_1->w;
		(this->field1_0x10).x = fVar1;
		fVar1 = FLOAT_00387520;
		(this->field1_0x10).z = FLOAT_00387520;
		(this->field1_0x10).w = fVar1;
		fVar1 = FLOAT_0038a760;
		(this->field1_0x10).y = 0.0;
		this->field2_0x20 = fVar1;
		*(undefined4 *)&this->field_0x24 = 0;
		return;
		}
		
	*/
	return;
}

