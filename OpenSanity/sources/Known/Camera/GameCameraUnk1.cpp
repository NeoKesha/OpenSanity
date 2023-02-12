#include "headers/Known/Camera/GameCameraUnk1.h"

float GameCameraUnk1::GetCameraProgress(float* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraUnk1::GetCameraProgress(GameCameraUnk1 *this,float *param_1,undefined4 param_2,Vector4 *param_3){
		float t;
		undefined local_40 [40];
		undefined4 local_18;
		local_18 = 0xffffffff;
		FUN_000f1660((int)&this->field_0x20,param_1,(int)local_40);
		t = FUN_000e11e0((int)&this->field_0x20,(int)local_40);
		(*((this->parent).vtable)->GetCameraPosition)(&this->parent,t,param_3);
		return (this->parent).field3_0xc (float *)(*(int *)&this->field_0x34 + -4 + *(int *)&this->field_0x24 * 4) + t;
		}
		
	*/
	return 0.0f;
}

void GameCameraUnk1::GetCameraPosition(float param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraUnk1::GetCameraPosition(GameCameraUnk1 *this,float param_1,float *param_2){
		float fVar1;
		int iVar2;
		float fVar3;
		float local_64;
		Vector4 local_60;
		Matrix4 local_50;
		fVar3 = (this->parent).field3_0xc (float *)(*(int *)&this->field_0x34 + -4 + *(int *)&this->field_0x24 * 4) + param_1;
		fVar1 = FLOAT_0038639c;
		if ((FLOAT_0038639c < fVar3) || (fVar1 = 0.0, fVar3 < 0.0)) {
		fVar3 = fVar1;
		}
		iVar2 = FUN_000e0500((int)&this->field_0x20,(float)*(int *)&this->field_0x24 * *(float *)&this->field_0x2c * fVar3,&local_64);
		FUN_000dfb10((int)&this->field_0x20,param_2,iVar2,local_64);
		FUN_001d4910(&this->field_0x10,&local_60.x,fVar3);
		Matrix4::Construct1(&local_50);
		Matrix4::FUN_000d9f80(&local_50,&local_60);
		*param_2 = local_50.m11 * 0.0 + local_50.m21 * 0.0 + local_50.m31 * 0.0 + *param_2;
		param_2[1] = local_50.m12 * 0.0 + local_50.m22 * 0.0 + local_50.m32 * 0.0 + param_2[1];
		param_2[2] = local_50.m13 * 0.0 + local_50.m23 * 0.0 + local_50.m33 * 0.0 + param_2[2];
		param_2[3] = local_50.m14 * 0.0 + local_50.m24 * 0.0 + local_50.m34 * 0.0 + param_2[3];
		return;
		}
		
	*/
	return;
}

bool GameCameraUnk1::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraUnk1::IsA(GameCameraUnk1 *this,int **param_1){
		bool bVar1;
		bool bVar2;
		byte bVar3;
		uint uVar4;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = FUN_001da020(*param_1,&this->field_0x10,0xa34,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d6f9f;
		}
		if (param_1[1] == (int *)0x1) {
		uVar4 = FUN_001da070(*param_1,&this->field_0x10,0xa34,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d6f9f;
		}
		}
		bVar3 = 0;
		LAB_001d6f9f:bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = FUN_001d90e0(*param_1,&this->field_0x20,0xa35,0);
		return (bool)((byte)uVar4 & bVar1 & bVar3);
		}
		if (param_1[1] == (int *)0x1) {
		uVar4 = FUN_001d9130(*param_1,&this->field_0x20,0xa35,0);
		return (bool)((byte)uVar4 & bVar1 & bVar3);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void GameCameraUnk1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraUnk1 * __thiscall GameCameraUnk1::Dispose(GameCameraUnk1 *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk1;
		UnkFamily11A::Dispose((UnkFamily11A *)&this->field_0x20);
		FUN_001da0e0((int *)&this->field_0x10);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraUnk1::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraUnk1::Construct(GameCameraUnk1 *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk1;
		(this->parent).field1_0x4 = 1;
		*(undefined4 *)&this->field_0x10 = 0;
		*(undefined2 *)&this->field_0x14 = 0;
		*(undefined2 *)&this->field_0x16 = 0;
		*(undefined2 *)&this->field_0x18 = 0x40;
		this->field_0x1c = 1;
		*(undefined4 *)&this->field_0x28 = 0;
		*(undefined ***)&this->field_0x20 = &UnkFamily11_VT_A;
		*(undefined4 *)&this->field_0x34 = 0;
		*(undefined4 *)&this->field_0x68 = 0xffffffff;
		return;
		}
		
	*/
	return;
}

void GameCameraUnk1::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk1::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint GameCameraUnk1::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraUnk1::GetBuilderIndex(void){
		return 0x1c09;
		}
		
	*/
	return 0;
}

