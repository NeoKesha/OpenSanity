#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25B.h"

int* UnkFamily25B::FUN_00101700(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily25B::FUN_00101700(UnkFamily25B *this,int param_1){
		UnkFamily25Abstract_VTable *pUVar1;
		*(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
		*(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
		*(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
		*(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
		pUVar1 = (this->parent).vtable;
		*(undefined2 *)&this->field_0x70 = *(undefined2 *)(param_1 + 0x70);
		(*(code *)pUVar1->field6_0x18)(param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

void UnkFamily25B::FUN_00101740() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25B::FUN_00101740(UnkFamily25B *this){
		float fVar1;
		float fVar2;
		fVar2 = *(float *)&this->field_0x14 * FLOAT_003905dc;
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

void UnkFamily25B::FUN_001017c0(uint param_1, uint* param_2, uint* param_3, uint param_4, uint* param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25B::FUN_001017c0(UnkFamily25B *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5){
		if (param_5 != (undefined4 *)0x0) {
		*param_2 = *param_5;
		param_2[1] = param_5[1];
		param_2[2] = param_5[2];
		param_2[3] = param_5[3];
		*param_3 = *(undefined4 *)&this->field_0x14;
		return;
		}
		*param_2 = *(undefined4 *)&this->field_0x60;
		param_2[1] = *(undefined4 *)&this->field_0x64;
		param_2[2] = *(undefined4 *)&this->field_0x68;
		param_2[3] = *(undefined4 *)&this->field_0x6c;
		*param_3 = *(undefined4 *)&this->field_0x14;
		return;
		}
		
	*/
	return;
}

void UnkFamily25B::FUN_001135f0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25B::FUN_001135f0(UnkFamily25B *this,int *param_1){
		UnkFamily25Abstract::FUN_0010e540(&this->parent,param_1);
		(**(code **)(*param_1 + 4))(&this->field_0x60,0x10,1);
		(**(code **)(*param_1 + 0x48))(&this->field_0x70);
		return;
		}
		
	*/
	return;
}

void UnkFamily25B::FUN_00113620(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25B::FUN_00113620(UnkFamily25B *this,int *param_1){
		UnkFamily25Abstract::FUN_0010e5b0(&this->parent,param_1);
		(**(code **)(*param_1 + 0xc))(&this->field_0x60,0x10);
		(**(code **)(*param_1 + 0x74))(*(undefined2 *)&this->field_0x70);
		return;
		}
		
	*/
	return;
}

uint UnkFamily25B::FUN_00113650(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily25B::FUN_00113650(UnkFamily25B *this,int **param_1){
		int *piVar1;
		bool bVar2;
		undefined3 extraout_var;
		int iVar3;
		undefined3 extraout_var_00;
		undefined4 uVar4;
		UnkFamily25Abstract::FUN_0010e610(&this->parent,param_1);
		if (param_1[1] == (int *)0x0) {
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)param_1,&this->field_0x60,0x981,0);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		iVar3 = CONCAT31(extraout_var,bVar2);
		if (bVar2 == false) goto LAB_0011369a;
		piVar1 = param_1[1];
		}
		else {
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)param_1,&this->field_0x60,0x981,0);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		iVar3 = CONCAT31(extraout_var_00,bVar2);
		if (bVar2 == false) goto LAB_0011369a;
		piVar1 = param_1[1];
		}
		if (piVar1 == (int *)0x0) {
		iVar3 = (**(code **)(**param_1 + 0x78))(0x982,&this->field_0x70);
		}
		else {
		iVar3 = (int)piVar1 + -1;
		if (iVar3 == 0) {
		uVar4 = (**(code **)(**param_1 + 0x28))(0x982,*(undefined2 *)&this->field_0x70);
		return CONCAT31((int3)((uint)uVar4 >> 8),1);
		}
		}
		LAB_0011369a:return CONCAT31((int3)((uint)iVar3 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily25B::FUN_00116fb0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25B::FUN_00116fb0(UnkFamily25B *this){
		*(undefined *)&(this->parent).field13_0x10 = 1;
		return;
		}
		
	*/
	return;
}

void UnkFamily25B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily25B::Dispose(UnkFamily25B *this,byte param_1){
		UnkFamily25B *pUVar1;
		int iVar2;
		if ((param_1 & 2) == 0) {
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		iVar2 = *(int *)&this[-1].field_0x70;
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
		VirtualPool::FreeMemory(&this[-1].field_0x70);
		}
		return (undefined4 *)&this[-1].field_0x70;
		}
		
	*/
	return;
}

