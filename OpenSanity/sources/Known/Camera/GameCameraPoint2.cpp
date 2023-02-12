#include "headers/Known/Camera/GameCameraPoint2.h"

int* GameCameraPoint2::Set2(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraPoint2::Set2(GameCameraPoint2 *this,undefined4 param_1){
		(*(this->parent).vtable[1].Dispose)(&this->parent,(byte)param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

float GameCameraPoint2::GetCameraProgress(float* param_1, uint param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraPoint2::GetCameraProgress(GameCameraPoint2 *this,float *param_1,undefined4 param_2,float *param_3){
		int iVar1;
		Line4 local_30;
		local_30.start.x = *param_1;
		local_30.start.y = param_1[1];
		local_30.start.z = param_1[2];
		local_30.start.w = param_1[3];
		iVar1 = this->field3_0x24;
		local_30.end.x = (this->pos).x;
		local_30.end.y = (this->pos).y;
		local_30.end.z = (this->pos).z;
		local_30.end.w = (this->pos).w;
		if (iVar1 == 0) {
		Line4::GetPoint(&local_30,this->field2_0x20,(Vector4 *)param_3);
		}
		else {
		if (iVar1 == 1) {
		FUN_001d1c90((int)this,(float *)&local_30,'\0',param_3);
		return FLOAT_0038639c;
		}
		if (iVar1 == 2) {
		FUN_001d1c90((int)this,(float *)&local_30,'\x01',param_3);
		return FLOAT_0038639c;
		}
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void GameCameraPoint2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraPoint2::Construct(GameCameraPoint2 *this){
		float fVar1;
		(this->parent).field3_0xc = 0.0;
		fVar1 = FLOAT_00386ab4;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Point2;
		this->field2_0x20 = fVar1;
		this->field3_0x24 = 0;
		return;
		}
		
	*/
	return;
}

void GameCameraPoint2::GetCameraPosition(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint2::GetCameraPosition(GameCameraPoint2 *this,undefined4 param_1,undefined4 *param_2){
		*param_2 = (this->pos).x;
		param_2[1] = (this->pos).y;
		param_2[2] = (this->pos).z;
		param_2[3] = (this->pos).w;
		return;
		}
		
	*/
	return;
}

int* GameCameraPoint2::FUN_001ca570(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall GameCameraPoint2::FUN_001ca570(GameCameraPoint2 *this,int param_1){
		(*((this->parent).vtable)->SetInternal)(&this->parent,(GameCameraAbstract *)param_1);
		this->field2_0x20 = *(float *)(param_1 + 0x20);
		this->field3_0x24 = *(int *)(param_1 + 0x24);
		return (int *)this;
		}
		
	*/
	return null;
}

void GameCameraPoint2::Method5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint2::Method5(GameCameraPoint2 *this,int *param_1){
		undefined4 uStack24;
		float *pfStack20;
		int *piStack16;
		int *piStack12;
		piStack12 = &(this->parent).field1_0x4;
		piStack16 = (int *)0x1d1ec3;
		(**(code **)(*param_1 + 0x50))();
		piStack16 = &(this->parent).field2_0x8;
		pfStack20 = (float *)0x1d1ece;
		(**(code **)(*param_1 + 0x38))();
		pfStack20 = &(this->parent).field3_0xc;
		uStack24 = 0x1d1ed9;
		(**(code **)(*param_1 + 0x38))();
		uStack24 = 1;
		(**(code **)(*param_1 + 4))(&this->pos);
		(**(code **)(*param_1 + 0x38))(&this->field2_0x20);
		(**(code **)(*param_1 + 0x5c))(&uStack24);
		this->field3_0x24 = 0x10;
		return;
		}
		
	*/
	return;
}

void GameCameraPoint2::Method8(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraPoint2::Method8(GameCameraPoint2 *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(**(code **)(*param_1 + 0xc))(&this->pos,0x10);
		(**(code **)(*param_1 + 100))(this->field2_0x20);
		(**(code **)(*param_1 + 0x88))(*(undefined *)&this->field3_0x24);
		return;
		}
		
	*/
	return;
}

bool GameCameraPoint2::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameCameraPoint2::IsA(GameCameraPoint2 *this,int **param_1){
		int **ppiVar1;
		bool bVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		GameCameraPoint2 *local_4;
		ppiVar1 = param_1;
		bVar2 = GameCameraPoint::IsA((GameCameraPoint *)this,param_1);
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		local_4 = this;
		if (bVar3 != false) {
		if (ppiVar1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**ppiVar1 + 0x68))(0xa40,&this->field2_0x20);
		goto LAB_001d1fc2;
		}
		if (ppiVar1[1] == (int *)0x1) {
		local_4 = (GameCameraPoint2 *)this->field2_0x20;
		bVar4 = (**(code **)(**ppiVar1 + 0x18))(0xa40,local_4);
		goto LAB_001d1fc2;
		}
		}
		bVar4 = 0;
		LAB_001d1fc2:param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)*(byte *)&this->field3_0x24);
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		if (bVar3 != false) {
		if (ppiVar1[1] == (int *)0x0) {
		bVar5 = (**(code **)(**ppiVar1 + 0x7c))(0xa41,&param_1);
		this->field3_0x24 = (uint)local_4 & 0xff;
		return (bool)(bVar5 & bVar2 & bVar4);
		}
		if (ppiVar1[1] == (int *)0x1) {
		bVar5 = (**(code **)(**ppiVar1 + 0x2c))(0xa41,param_1);
		this->field3_0x24 = (uint)local_4 & 0xff;
		return (bool)(bVar5 & bVar2 & bVar4);
		}
		}
		this->field3_0x24 = (uint)param_1 & 0xff;
		return false;
		}
		
	*/
	return false;
}

uint GameCameraPoint2::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraPoint2::GetBuilderIndex(void){
		return 0x1c0b;
		}
		
	*/
	return 0;
}

void GameCameraPoint2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall GameCameraPoint2::Dispose(GameCameraPoint2 *this,byte param_1){
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

