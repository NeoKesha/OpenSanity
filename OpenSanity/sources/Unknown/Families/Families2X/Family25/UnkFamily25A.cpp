#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25A.h"

int* UnkFamily25A::FUN_00101900(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily25A::FUN_00101900(UnkFamily25A *this,undefined4 param_1){
		(*(code *)((this->parent).vtable)->field6_0x18)(param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

void UnkFamily25A::FUN_00101920() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25A::FUN_00101920(UnkFamily25A *this){
		float fVar1;
		float fVar2;
		fVar2 = *(float *)&this->field_0x14 * FLOAT_003905e0;
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

uint UnkFamily25A::FUN_0010e800(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily25A::FUN_0010e800(UnkFamily25A *this,int **param_1){
		undefined3 extraout_var;
		UnkFamily25Abstract::FUN_0010e610(&this->parent,param_1);
		return CONCAT31(extraout_var,1);
		}
		
	*/
	return 0;
}

void UnkFamily25A::FUN_00116f50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25A::FUN_00116f50(UnkFamily25A *this){
		*(undefined *)&(this->parent).field13_0x10 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily25A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25Abstract * __thiscall UnkFamily25A::Dispose(UnkFamily25A *this,byte param_1){
		UnkFamily25A *pUVar1;
		int iVar2;
		if ((param_1 & 2) == 0) {
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		iVar2 = *(int *)&this[-1].field_0x50;
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
		VirtualPool::FreeMemory(&this[-1].field_0x50);
		}
		return (UnkFamily25Abstract *)&this[-1].field_0x50;
		}
		
	*/
	return;
}

void UnkFamily25A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

