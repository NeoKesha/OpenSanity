#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25C.h"

void UnkFamily25C::FUN_00100f00(float* param_1, float* param_2, float* param_3, float* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25C::FUN_00100f00(UnkFamily25C *this,float *param_1,float *param_2,float *param_3,float *param_4){
		int iVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		if (param_4 == (float *)0x0) {
		fVar4 = *(float *)&this->field_0x30 - *param_1;
		fVar5 = *(float *)&this->field_0x34 - param_1[1];
		fVar6 = *(float *)&this->field_0x38 - param_1[2];
		}
		else {
		fVar4 = *param_4 - *param_1;
		fVar5 = param_4[1] - param_1[1];
		fVar6 = param_4[2] - param_1[2];
		}
		fVar7 = FLOAT_0039f5fc / (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 + FLOAT_0039f5fc);
		*param_2 = fVar4 * fVar7;
		fVar4 = FLOAT_0038639c;
		param_2[1] = fVar5 * fVar7;
		param_2[2] = fVar6 * fVar7;
		param_2[3] = fVar4;
		iVar1 = (int)*(short *)&this->field_0x60;
		fVar4 = *(float *)&this->field_0x14;
		iVar3 = 0;
		if (3 < iVar1) {
		iVar2 = (iVar1 - 4U >> 2) + 1;
		iVar3 = iVar2 * 4;
		do {
		iVar2 = iVar2 + -1;
		fVar4 = fVar4 * fVar7 * fVar7 * fVar7 * fVar7;
		}
		 while (iVar2 != 0);
		}
		if (iVar3 < iVar1) {
		iVar1 = iVar1 - iVar3;
		do {
		iVar1 = iVar1 + -1;
		fVar4 = fVar4 * fVar7;
		}
		 while (iVar1 != 0);
		*param_3 = fVar4;
		return;
		}
		*param_3 = fVar4;
		return;
		}
		
	*/
	return;
}

int* UnkFamily25C::FUN_00100e60(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily25C::FUN_00100e60(UnkFamily25C *this,int param_1){
		UnkFamily25Abstract_VTable *pUVar1;
		pUVar1 = (this->parent).vtable;
		*(undefined2 *)&this->field_0x60 = *(undefined2 *)(param_1 + 0x60);
		(*(code *)pUVar1->field6_0x18)(param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

void UnkFamily25C::FUN_00100e80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25C::FUN_00100e80(UnkFamily25C *this){
		float fVar1;
		float fVar2;
		fVar2 = *(float *)&this->field_0x14 * FLOAT_0038d38c;
		*(float *)&this->field_0x40 = *(float *)&this->field_0x30 - fVar2;
		*(float *)&this->field_0x44 = *(float *)&this->field_0x34 - fVar2;
		*(float *)&this->field_0x48 = *(float *)&this->field_0x38 - fVar2;
		fVar1 = FLOAT_0038639c;
		*(float *)&this->field_0x4c = FLOAT_0038639c;
		*(float *)&this->field_0x50 = *(float *)&this->field_0x30 + fVar2;
		*(float *)&this->field_0x54 = *(float *)&this->field_0x34 + fVar2;
		*(float *)&this->field_0x58 = *(float *)&this->field_0x38 + fVar2;
		*(float *)&this->field_0x5c = fVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily25C::FUN_00113500(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25C::FUN_00113500(UnkFamily25C *this,int *param_1){
		UnkFamily25Abstract::FUN_0010e540(&this->parent,param_1);
		(**(code **)(*param_1 + 0x48))(&this->field_0x60);
		return;
		}
		
	*/
	return;
}

void UnkFamily25C::FUN_00113520(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25C::FUN_00113520(UnkFamily25C *this,int *param_1){
		UnkFamily25Abstract::FUN_0010e5b0(&this->parent,param_1);
		(**(code **)(*param_1 + 0x74))(*(undefined2 *)&this->field_0x60);
		return;
		}
		
	*/
	return;
}

uint UnkFamily25C::FUN_00113550(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily25C::FUN_00113550(UnkFamily25C *this,int **param_1){
		bool bVar1;
		undefined3 extraout_var;
		int iVar2;
		undefined4 uVar3;
		undefined3 extraout_var_00;
		undefined *puVar4;
		UnkFamily25Abstract::FUN_0010e610(&this->parent,param_1);
		puVar4 = &this->field_0x60;
		if (param_1[1] == (int *)0x0) {
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		iVar2 = CONCAT31(extraout_var,bVar1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar3 = (**(code **)(**param_1 + 0x78))(0x983,puVar4);
		return CONCAT31((int3)((uint)uVar3 >> 8),1);
		}
		iVar2 = (int)param_1[1] + -1;
		if (iVar2 == 0) {
		uVar3 = (**(code **)(**param_1 + 0x28))(0x983,*(undefined2 *)puVar4);
		return CONCAT31((int3)((uint)uVar3 >> 8),1);
		}
		}
		}
		else {
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		iVar2 = CONCAT31(extraout_var_00,bVar1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		iVar2 = (**(code **)(**param_1 + 0x78))(0x983,puVar4);
		}
		else {
		iVar2 = (int)param_1[1] + -1;
		if (iVar2 == 0) {
		uVar3 = (**(code **)(**param_1 + 0x28))(0x983,*(undefined2 *)puVar4);
		return CONCAT31((int3)((uint)uVar3 >> 8),1);
		}
		}
		}
		}
		return CONCAT31((int3)((uint)iVar2 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily25C::FUN_00116ff0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25C::FUN_00116ff0(UnkFamily25C *this){
		*(undefined *)&(this->parent).field13_0x10 = 2;
		return;
		}
		
	*/
	return;
}

void UnkFamily25C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily25C::Dispose(UnkFamily25C *this,byte param_1){
		UnkFamily25C *pUVar1;
		int iVar2;
		if ((param_1 & 2) == 0) {
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		iVar2 = *(int *)&this[-1].field_0x60;
		pUVar1 = this + iVar2;
		if (-1 < iVar2 + -1) {
		do {
		pUVar1 = pUVar1 + -1;
		iVar2 = iVar2 + -1;
		(pUVar1->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		}
		 while (iVar2 != 0);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(&this[-1].field_0x60);
		}
		return (undefined4 *)&this[-1].field_0x60;
		}
		
	*/
	return;
}

