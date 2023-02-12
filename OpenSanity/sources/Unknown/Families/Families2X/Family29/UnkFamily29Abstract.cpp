#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29Abstract.h"

#include "headers/Known/Math/Vector4.h"
uint UnkFamily29Abstract::FUN_00151130(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29Abstract::FUN_00151130(UnkFamily29Abstract *this,void **param_1){
		bool bVar1;
		undefined3 extraout_var;
		uint uVar2;
		undefined3 extraout_var_00;
		undefined3 extraout_var_01;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar2 = CONCAT31(extraout_var,bVar1);
		if (bVar1 != false) {
		if (param_1[1] == (void *)0x0) {
		bVar1 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->color,0x614,0);
		return CONCAT31(extraout_var_01,bVar1) & 0xffffff01;
		}
		uVar2 = (int)param_1[1] - 1;
		if (uVar2 == 0) {
		bVar1 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->color,0x614,0);
		return CONCAT31(extraout_var_00,bVar1) & 0xffffff01;
		}
		}
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkFamily29Abstract::FUN_00136350() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29Abstract::FUN_00136350(void){
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily29Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily29Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::EmptyFunction_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily29Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily29Abstract::Dispose(UnkFamily29Abstract *this,byte param_1){
		this->vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::FUN_0014b570(float* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29Abstract::FUN_0014b570(UnkFamily29Abstract *this,float *param_1,float *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		fVar1 = (this->color).B;
		fVar2 = (this->color).A;
		fVar3 = (this->color).G;
		fVar4 = (this->color).A;
		*param_1 = (this->color).R - (this->color).A;
		fVar5 = FLOAT_0038639c;
		param_1[1] = fVar3 - fVar4;
		param_1[2] = fVar1 - fVar2;
		param_1[3] = fVar5;
		fVar1 = (this->color).A;
		fVar2 = (this->color).G;
		fVar3 = (this->color).B;
		fVar4 = (this->color).A;
		*param_2 = (this->color).R + (this->color).A;
		param_2[1] = fVar2 + fVar4;
		param_2[2] = fVar1 + fVar3;
		param_2[3] = fVar5;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::FUN_001510f0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29Abstract::FUN_001510f0(UnkFamily29Abstract *this,int *param_1){
		(**(code **)(*param_1 + 4))(&this->color,0x10,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::FUN_00151110(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29Abstract::FUN_00151110(UnkFamily29Abstract *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(&this->color,0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Unroll(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29Abstract::Unroll(undefined4 *param_1){
		*param_1 = &UnkFamily29_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Unroll_9(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29Abstract::Unroll(undefined4 *param_1){
		*param_1 = &UnkFamily29_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Unroll_10(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29Abstract::Unroll(undefined4 *param_1){
		*param_1 = &UnkFamily29_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Construct(Vector4* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29Abstract::Construct(UnkFamily29Abstract *this,Vector4 *param_1,float param_2){
		this->vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->color).R = param_1->x;
		(this->color).G = param_1->y;
		(this->color).B = param_1->z;
		(this->color).A = param_1->w;
		(this->color).A = param_2;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Construct_12(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29Abstract::Construct(UnkFamily29Abstract *this,float param_1){
		this->vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->color).R = 0.0;
		(this->color).G = 0.0;
		(this->color).B = 0.0;
		(this->color).A = param_1;
		return;
		}
		
	*/
	return;
}

void UnkFamily29Abstract::Unroll_13(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29Abstract::Unroll(undefined4 *param_1){
		*param_1 = &UnkFamily29_VT_Abstract;
		return;
		}
		
	*/
	return;
}

