#include "headers/Known/Camera/GameCameraLine2.h"

float GameCameraLine2::GetCameraProgress(uint param_1, int param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraLine2::GetCameraProgress(GameCameraLine2 *this,undefined4 param_1,int param_2,float *param_3){
		float fVar1;
		float fVar2;
		fVar2 = *(float *)(param_2 + 0x58) - (this->line).start.z;
		fVar1 = *(float *)(param_2 + 0x50) - (this->line).start.x;
		fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
		fVar1 = FLOAT_0038639c;
		if (fVar2 < (float)this->field3_0x34 || fVar2 == (float)this->field3_0x34) {
		if (this->field2_0x30 <= fVar2) {
		fVar1 = (fVar2 - this->field2_0x30) / ((float)this->field3_0x34 - this->field2_0x30) +this->field2_0x30;
		}
		else {
		fVar1 = 0.0;
		}
		}
		Line4::GetPoint(&this->line,fVar1,(Vector4 *)param_3);
		return fVar1;
		}
		
	*/
	return 0.0f;
}

int* GameCameraLine2::Set2(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraLine2::Set2(GameCameraLine2 *this,undefined4 param_1){
		(*(this->parent).vtable[1].Dispose)(&this->parent,(byte)param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

bool GameCameraLine2::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraLine2::IsA(GameCameraLine2 *this,int **param_1){
		bool bVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		bVar1 = GameCameraLine::IsA((GameCameraLine *)this,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar3 = (**(code **)(**param_1 + 0x68))(0xa4e,&this->field2_0x30);
		goto LAB_001d4e51;
		}
		if (param_1[1] == (int *)0x1) {
		bVar3 = (**(code **)(**param_1 + 0x18))(0xa4e,this->field2_0x30);
		goto LAB_001d4e51;
		}
		}
		bVar3 = 0;
		LAB_001d4e51:bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**param_1 + 0x68))(0xa4f,&this->field3_0x34);
		return (bool)(bVar4 & bVar1 & bVar3);
		}
		if (param_1[1] == (int *)0x1) {
		bVar4 = (**(code **)(**param_1 + 0x18))(0xa4f,this->field3_0x34);
		return (bool)(bVar4 & bVar1 & bVar3);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void GameCameraLine2::GetCameraPosition(float param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine2::GetCameraPosition(GameCameraLine2 *this,float param_1,float *param_2){
		Line4::GetPoint(&this->line,param_1,(Vector4 *)param_2);
		return;
		}
		
	*/
	return;
}

void GameCameraLine2::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine2::Method5(GameCameraLine2 *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		FUN_000e7300((int)&this->line,param_1);
		(**(code **)(*param_1 + 0x38))(&this->field2_0x30);
		(**(code **)(*param_1 + 0x38))(&this->field3_0x34);
		return;
		}
		
	*/
	return;
}

void GameCameraLine2::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraLine2::Method8(GameCameraLine2 *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		FUN_000e7330((int)&this->line,param_1);
		(**(code **)(*param_1 + 100))(this->field2_0x30);
		(**(code **)(*param_1 + 100))(this->field3_0x34);
		return;
		}
		
	*/
	return;
}

int* GameCameraLine2::FUN_001ca960(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraLine2::FUN_001ca960(GameCameraLine2 *this,int param_1){
		(*((this->parent).vtable)->SetInternal)(&this->parent,(GameCameraAbstract *)param_1);
		this->field2_0x30 = *(float *)(param_1 + 0x30);
		this->field3_0x34 = *(int *)(param_1 + 0x34);
		return (int *)this;
		}
		
	*/
	return null;
}

uint GameCameraLine2::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraLine2::GetBuilderIndex(void){
		return 0x1c0d;
		}
		
	*/
	return 0;
}

void GameCameraLine2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall GameCameraLine2::Dispose(GameCameraLine2 *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void GameCameraLine2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraLine2::Construct(GameCameraLine2 *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Line2;
		return;
		}
		
	*/
	return;
}

