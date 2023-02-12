#include "headers/Known/Camera/GameCameraZone.h"

#include "headers/Known/Camera/GameCameraAbstract.h"
float GameCameraZone::GetCameraProgress(uint param_1, int param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraZone::GetCameraProgress(GameCameraZone *this,undefined4 param_1,int param_2,float *param_3){
		float local_28;
		float local_24;
		float local_20;
		undefined4 local_1c;
		undefined4 local_18;
		undefined4 local_14;
		local_20 = *(float *)(param_2 + 0x50);
		local_1c = *(undefined4 *)(param_2 + 0x54);
		local_18 = *(undefined4 *)(param_2 + 0x58);
		local_14 = *(undefined4 *)(param_2 + 0x5c);
		FUN_000ed480((int)&this->zone2,&local_20,param_3,&local_28,&local_24);
		FUN_000df1e0((int)&this->zone1,local_28,local_24,param_3);
		return local_28;
		}
		
	*/
	return 0.0f;
}

GameCameraAbstract* GameCameraZone::Set2(GameCameraZone* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraAbstract * __thiscall GameCameraZone::Set2(GameCameraZone *this,GameCameraZone *other){
		(*((this->parent).vtable)->SetInternal)(&this->parent,&other->parent);
		return &this->parent;
		}
		
	*/
	return null;
}

bool GameCameraZone::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraZone::IsA(GameCameraZone *this,int **param_1){
		bool bVar1;
		bool bVar2;
		byte bVar3;
		uint uVar4;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = FUN_001d9220(*param_1,&this->zone1,0xa53,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d4fdf;
		}
		if (param_1[1] == (int *)0x1) {
		uVar4 = FUN_001d9270(*param_1,&this->zone1,0xa53,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d4fdf;
		}
		}
		bVar3 = 0;
		LAB_001d4fdf:bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = FUN_001d9220(*param_1,&this->zone2,0xa54,0);
		return (bool)((byte)uVar4 & bVar1 & bVar3);
		}
		if (param_1[1] == (int *)0x1) {
		uVar4 = FUN_001d9270(*param_1,&this->zone2,0xa54,0);
		return (bool)((byte)uVar4 & bVar1 & bVar3);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void GameCameraZone::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameCameraZone::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameCameraZone::Method7(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraZone::Method7(GameCameraZone *this,float *param_1){
		FUN_000df380(&this->zone1,param_1);
		FUN_000df380(&this->zone2,param_1);
		return;
		}
		
	*/
	return;
}

GameCameraZone* GameCameraZone::SetInternal(GameCameraZone* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraZone * __thiscall GameCameraZone::SetInternal(GameCameraZone *this,GameCameraZone *param_1){
		Zone::Copy(&this->zone1,&param_1->zone1);
		Zone::Copy(&this->zone2,&param_1->zone2);
		return this;
		}
		
	*/
	return null;
}

void GameCameraZone::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraZone::Method5(GameCameraZone *this,int *param_1){
		(**(code **)(*param_1 + 4))(&this->zone1,0x50,1);
		(**(code **)(*param_1 + 4))(&this->zone2,0x50,1);
		return;
		}
		
	*/
	return;
}

void GameCameraZone::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraZone::Method8(GameCameraZone *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(&this->zone1,0x50);
		(**(code **)(*param_1 + 0xc))(&this->zone2,0x50);
		return;
		}
		
	*/
	return;
}

int GameCameraZone::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int GameCameraZone::GetBuilderIndex(void){
		return 0x1c0f;
		}
		
	*/
	return 0;
}

void GameCameraZone::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall GameCameraZone::Dispose(GameCameraZone *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void GameCameraZone::Construct(float* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraZone * __thiscall GameCameraZone::Construct(GameCameraZone *this,float *param_1,undefined4 param_2){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Zone;
		Zone::Construct(&this->zone1,param_1,param_2);
		Zone::Construct(&this->zone2,param_1,param_2);
		return this;
		}
		
	*/
	return;
}

void GameCameraZone::Construct_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraZone::Construct(GameCameraZone *this){
		(this->parent).field3_0xc = 0.0;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Zone;
		return;
		}
		
	*/
	return;
}

