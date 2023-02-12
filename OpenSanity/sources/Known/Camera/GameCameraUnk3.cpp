#include "headers/Known/Camera/GameCameraUnk3.h"

void GameCameraUnk3::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraUnk3::CleanUp(GameCameraUnk3 *this){
		undefined4 *puVar1;
		puVar1 = *(undefined4 **)&this->field_0x10;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk3;
		if (puVar1 != (undefined4 *)0x0) {
		(**(code **)*puVar1)(1);
		}
		if (*(int *)&this->field_0x1c != 0) {
		VirtualPool::FreeMemory((void *)(*(int *)&this->field_0x1c + -0x10));
		}
		*(undefined4 *)&this->field_0x1c = 0;
		this->field17_0x20 = 0;
		this->field18_0x22 = 0;
		FUN_001d13b0((void **)&this->field_0x14);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

bool GameCameraUnk3::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraUnk3::IsA(GameCameraUnk3 *this,int **param_1){
		undefined *this_00;
		bool bVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		undefined4 *puVar6;
		uint uVar5;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		this_00 = &this->field_0x14;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001d800e:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar5 = FUN_001da4f0(*param_1,this_00,0xa50,0);
		bVar3 = (byte)uVar5;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001d800e;
		uVar5 = FUN_001da540(*param_1,this_00,0xa50,0);
		bVar3 = (byte)uVar5;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar5 = FUN_001da020(*param_1,&this->field_0x1c,0xa51,0);
		bVar4 = (byte)uVar5;
		goto LAB_001d8058;
		}
		if (param_1[1] == (int *)0x1) {
		uVar5 = FUN_001da070(*param_1,&this->field_0x1c,0xa51,0);
		bVar4 = (byte)uVar5;
		goto LAB_001d8058;
		}
		}
		bVar4 = 0;
		LAB_001d8058:if (param_1[1] == (int *)0x0) {
		FUN_001c9a20((int *)this_00);
		puVar6 = FUN_001d6d50(this_00,0x1e);
		*(undefined4 **)&this->field_0x10 = puVar6;
		}
		return (bool)(bVar1 & bVar3 & bVar4);
		}
		
	*/
	return false;
}

void GameCameraUnk3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraUnk3 * __thiscall GameCameraUnk3::Dispose(GameCameraUnk3 *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraUnk3::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraUnk3::Construct(GameCameraUnk3 *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk3;
		*(undefined4 *)&this->field_0x10 = 0;
		(this->parent).field1_0x4 = 1;
		*(undefined4 *)&this->field_0x14 = 0;
		*(undefined4 *)&this->field_0x18 = 0;
		*(undefined4 *)&this->field_0x1c = 0;
		this->field17_0x20 = 0;
		this->field18_0x22 = 0;
		this->field19_0x24 = 0x40;
		this->field_0x28 = 1;
		this->field_0x2c = 0;
		this->field_0x2d = 0;
		return;
		}
		
	*/
	return;
}

float GameCameraUnk3::GetCameraProgress() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float GameCameraUnk3::GetCameraProgress(void){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void GameCameraUnk3::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk3::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraUnk3::EmptyFunction_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk3::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraUnk3::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk3::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraUnk3::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraUnk3::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint GameCameraUnk3::Set2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraUnk3 * __fastcall GameCameraUnk3::Set2(GameCameraUnk3 *this){
		return this;
		}
		
	*/
	return 0;
}

uint GameCameraUnk3::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraUnk3::GetBuilderIndex(void){
		return 0x1c0e;
		}
		
	*/
	return 0;
}

