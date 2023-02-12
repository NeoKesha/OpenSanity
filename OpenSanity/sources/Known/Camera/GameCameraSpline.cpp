#include "headers/Known/Camera/GameCameraSpline.h"

void GameCameraSpline::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraSpline::CleanUp(GameCameraSpline *this){
		UnkFamily11A *pUVar1;
		pUVar1 = this->field1_0x10;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&VT_Camera_Spline;
		if (pUVar1 != (UnkFamily11A *)0x0) {
		(*(code *)((pUVar1->parent).vtable)->Dispose)(1);
		}
		FUN_001d13b0((void **)&this->field_0x14);
		(this->parent).vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Abstract;
		return;
		}
		
	*/
	return;
}

float GameCameraSpline::FUN_001d6030(float* param_1, uint param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall GameCameraSpline::FUN_001d6030(GameCameraSpline *this,float *param_1,undefined4 param_2,float *param_3){
		float fVar1;
		float t;
		float fVar2;
		float fStack72;
		undefined local_40 [40];
		undefined4 local_18;
		local_18 = 0xffffffff;
		FUN_000f1660((int)this->field1_0x10,param_1,(int)local_40);
		t = FUN_000e11e0((int)this->field1_0x10,(int)local_40);
		(*((this->parent).vtable)->GetCameraPosition)(&this->parent,t,(Vector4 *)param_3);
		fVar1 = *(float *)(this->field1_0x10->field1_0x14 + (this->field1_0x10->parent).cnt * 4 + -4);
		fVar2 = FUN_001d4660((int)this,t);
		fStack72 = fVar2 / fVar1 + t;
		fVar1 = FLOAT_0038639c;
		if ((FLOAT_0038639c < fStack72) || (fVar1 = 0.0, fStack72 < 0.0)) {
		fStack72 = fVar1;
		}
		FUN_001d4400((int)this,fStack72,param_1,param_3);
		return t;
		}
		
	*/
	return 0.0f;
}

uint GameCameraSpline::FUN_001d7f00(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameCameraSpline::FUN_001d7f00(GameCameraSpline *this,int **param_1){
		undefined *this_00;
		bool bVar1;
		bool bVar2;
		byte bVar3;
		UnkFamily11A *pUVar5;
		undefined3 extraout_var;
		uint uVar4;
		bVar1 = GameCameraAbstract::IsA(&this->parent,param_1);
		this_00 = &this->field_0x14;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = FUN_001da4f0(*param_1,this_00,0xa24,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d7f4f;
		}
		if (param_1[1] == (int *)0x1) {
		uVar4 = FUN_001da540(*param_1,this_00,0xa24,0);
		bVar3 = (byte)uVar4;
		goto LAB_001d7f4f;
		}
		}
		bVar3 = 0;
		LAB_001d7f4f:if (param_1[1] == (int *)0x0) {
		FUN_001c9a20((int *)this_00);
		pUVar5 = (UnkFamily11A *)FUN_001d6d50(this_00,0x1e);
		this->field1_0x10 = pUVar5;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar4 = CONCAT31(extraout_var,bVar2);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar4 = (**(code **)(**param_1 + 0x78))(0xa39,&this->field10_0x1c);
		}
		else {
		uVar4 = (int)param_1[1] - 1;
		if (uVar4 == 0) {
		uVar4 = (**(code **)(**param_1 + 0x28))(0xa39,this->field10_0x1c);
		return uVar4 & 0xffffff00 | (uint)(bVar1 & bVar3);
		}
		}
		}
		return uVar4 & 0xffffff00 | (uint)(bVar1 & bVar3);
		}
		
	*/
	return 0;
}

void GameCameraSpline::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraSpline * __thiscall GameCameraSpline::Dispose(GameCameraSpline *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

GameCameraSpline* GameCameraSpline::FUN_001d4850(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraSpline * __thiscall GameCameraSpline::FUN_001d4850(GameCameraSpline *this,int param_1){
		UnkFamily11A *pUVar1;
		(*((this->parent).vtable)->Set1)(&this->parent,(GameCameraAbstract *)param_1);
		if (this->field1_0x10 != (UnkFamily11A *)0x0) {
		(*(code *)((this->field1_0x10->parent).vtable)->Dispose)(1);
		}
		this->field1_0x10 = (UnkFamily11A *)0x0;
		if (*(int *)(param_1 + 0x10) != 0) {
		pUVar1 = (UnkFamily11A *)VirtualPool::AllocateMemory(0x50);
		if (pUVar1 == (UnkFamily11A *)0x0) {
		pUVar1 = (UnkFamily11A *)0x0;
		}
		else {
		pUVar1 = UnkFamily11A::Construct(pUVar1,*(UnkFamily11A **)(param_1 + 0x10));
		}
		this->field1_0x10 = pUVar1;
		}
		FUN_001d4340(&this->field_0x14,(int *)(param_1 + 0x14));
		this->field10_0x1c = *(short *)(param_1 + 0x1c);
		return this;
		}
		
	*/
	return null;
}

void GameCameraSpline::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameCameraSpline::Construct(GameCameraSpline *this){
		float fVar1;
		fVar1 = FLOAT_0039559c;
		(this->parent).field1_0x4 = 1;
		(this->parent).vtable = (GameCameraAbstract_VTable *)&VT_Camera_Spline;
		this->field1_0x10 = (UnkFamily11A *)0x0;
		*(undefined4 *)&this->field_0x14 = 0;
		*(undefined4 *)&this->field_0x18 = 0;
		this->field10_0x1c = this->field10_0x1c | 1;
		(this->parent).field3_0xc = fVar1;
		return;
		}
		
	*/
	return;
}

void GameCameraSpline::FUN_001c9c70(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraSpline::FUN_001c9c70(GameCameraSpline *this,int *param_1){
		(**(code **)(*param_1 + 0x7c))((this->parent).field1_0x4);
		(**(code **)(*param_1 + 100))((this->parent).field2_0x8);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(*(code *)((this->field1_0x10->parent).vtable)->field2_0x8)(param_1);
		(**(code **)(*param_1 + 0x84))(this->field10_0x1c);
		return;
		}
		
	*/
	return;
}

void GameCameraSpline::FUN_001c9d30(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraSpline::FUN_001c9d30(GameCameraSpline *this,int *param_1){
		UnkFamily11A *piVar1;
		(**(code **)(*param_1 + 0x50))(&(this->parent).field1_0x4);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field2_0x8);
		(**(code **)(*param_1 + 0x38))(&(this->parent).field3_0xc);
		piVar1 = (UnkFamily11A *)VirtualPool::AllocateMemory(0x50);
		if (piVar1 == (UnkFamily11A *)0x0) {
		piVar1 = (UnkFamily11A *)0x0;
		}
		else {
		(piVar1->parent).field2_0x8 = (undefined *)0x0;
		(piVar1->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		piVar1->field1_0x14 = (undefined *)0x0;
		piVar1->field47_0x48 = -1;
		}
		this->field1_0x10 = piVar1;
		(*(code *)((piVar1->parent).vtable)->field1_0x4)(param_1);
		(**(code **)(*param_1 + 0x58))(&this->field10_0x1c);
		return;
		}
		
	*/
	return;
}

void GameCameraSpline::FUN_001d1660(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraSpline::FUN_001d1660(GameCameraSpline *this,float *param_1){
		FUN_001d1540(&this->field_0x14,param_1);
		return;
		}
		
	*/
	return;
}

void GameCameraSpline::FUN_001d47b0(float param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameCameraSpline::FUN_001d47b0(GameCameraSpline *this,float param_1,float *param_2){
		UnkFamily11A *this_00;
		int iVar1;
		float fVar2;
		float fVar3;
		fVar2 = *(float *)(this->field1_0x10->field1_0x14 + (this->field1_0x10->parent).cnt * 4 + -4);
		fVar3 = FUN_001d4660((int)this,param_1);
		param_1 = fVar3 / fVar2 + param_1;
		fVar2 = FLOAT_0038639c;
		if ((param_1 <= FLOAT_0038639c) && (fVar2 = param_1, param_1 < 0.0)) {
		fVar2 = 0.0;
		}
		this_00 = this->field1_0x10;
		iVar1 = FUN_000e0500((int)this_00,(float)(this_00->parent).cnt * (float)(this_00->parent).field3_0xc * fVar2,&param_1);
		FUN_000dfb10((int)this_00,param_2,iVar1,param_1);
		return;
		}
		
	*/
	return;
}

GameCameraSpline* GameCameraSpline::FUN_001d60f0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameCameraSpline * __thiscall GameCameraSpline::FUN_001d60f0(GameCameraSpline *this,int param_1){
		FUN_001d4850(this,param_1);
		return this;
		}
		
	*/
	return null;
}

uint GameCameraSpline::FUN_001d9c40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameCameraSpline::FUN_001d9c40(void){
		return 0x1c06;
		}
		
	*/
	return 0;
}

