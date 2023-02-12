#include "headers/Known/Camera/GameCameraAbstract.h"

void GameCameraAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraAbstract::Construct(GameCameraAbstract *this){
		this->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		this->field3_0xc = 0.0;
		this->field1_0x4 = 1;
		return;
		}
		
	*/
	return;
}

bool GameCameraAbstract::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraAbstract::IsA(GameCameraAbstract *this,int **param_1){
		float *pfVar1;
		bool bVar2;
		byte bVar3;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		(**(code **)(**param_1 + 0x74))(0xa16,&this->field1_0x4);
		}
		else if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x24))(0xa16,this->field1_0x4);
		}
		}
		pfVar1 = &this->field3_0xc;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		(**(code **)(**param_1 + 0x68))(0xa17,pfVar1);
		}
		else if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x18))(0xa17,*pfVar1);
		}
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar3 = (**(code **)(**param_1 + 0x68))(0xa12,pfVar1);
		return (bool)(bVar3 & 1);
		}
		if (param_1[1] == (int *)0x1) {
		bVar3 = (**(code **)(**param_1 + 0x18))(0xa12,*pfVar1);
		return (bool)(bVar3 & 1);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void GameCameraAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraAbstract::Method5(GameCameraAbstract *this,int *param_1){
		(**(code **)(*param_1 + 0x50))(&this->field1_0x4);
		(**(code **)(*param_1 + 0x38))(&this->field2_0x8);
		(**(code **)(*param_1 + 0x38))(&this->field3_0xc);
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraAbstract * __thiscall GameCameraAbstract::Dispose(GameCameraAbstract *this,byte param_1){
		this->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameCameraAbstract::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraAbstract::Method8(GameCameraAbstract *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))(this->field1_0x4);
		(**(code **)(*param_1 + 100))(this->field2_0x8);
		(**(code **)(*param_1 + 100))(this->field3_0xc);
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Set1(GameCameraAbstract* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraAbstract::Set1(GameCameraAbstract *this,GameCameraAbstract *other){
		this->field1_0x4 = other->field1_0x4;
		this->field2_0x8 = other->field2_0x8;
		this->field3_0xc = other->field3_0xc;
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Set2(GameCameraAbstract* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraAbstract::Set2(GameCameraAbstract *this,GameCameraAbstract *other){
		this->field1_0x4 = other->field1_0x4;
		this->field2_0x8 = other->field2_0x8;
		this->field3_0xc = other->field3_0xc;
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Unroll(GameCameraAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraAbstract::Unroll(GameCameraAbstract *param_1){
		param_1->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void GameCameraAbstract::Unroll_9(GameCameraAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraAbstract::Unroll(GameCameraAbstract *param_1){
		param_1->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

