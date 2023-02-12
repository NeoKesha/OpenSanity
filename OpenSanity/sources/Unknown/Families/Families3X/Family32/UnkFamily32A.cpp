#include "headers/Unknown/Families/Families3X/Family32/UnkFamily32A.h"

void UnkFamily32A::FUN_00141420(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily32A::FUN_00141420(UnkFamily32A *this,int param_1){
		this->field1_0x4 = *(short *)(param_1 + 4);
		this->field2_0x6 = *(short *)(param_1 + 6);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void UnkFamily32A::FUN_00141440() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32A::FUN_00141440(UnkFamily32A *this){
		int iVar1;
		this->field1_0x4 = 0;
		this->field2_0x6 = 0;
		iVar1 = (int)*(short *)(this->field3_0x8 + 4);
		if (iVar1 != 1 && -1 < iVar1 + -1) {
		do {
		if (*(short *)(*(int *)(this->field3_0x8 + 0xc) + this->field1_0x4 * 2) == -1) {
		return;
		}
		this->field1_0x4 = this->field1_0x4 + 1;
		}
		 while ((int)this->field1_0x4 < *(short *)(this->field3_0x8 + 4) + -1);
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily32A::FUN_00141490() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily32A::FUN_00141490(UnkFamily32A *this){
		return this->field3_0x8 & 0xffffff00U |(uint)(byte)(1 - (this->field2_0x6 != *(short *)(this->field3_0x8 + 8)));
		}
		
	*/
	return 0;
}

void UnkFamily32A::FUN_001414b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32A::FUN_001414b0(UnkFamily32A *this){
		short sVar1;
		short sVar2;
		sVar1 = *(short *)(this->field3_0x8 + 8);
		sVar2 = this->field2_0x6;
		if ((int)sVar2 < sVar1 + -1) {
		if (sVar2 < sVar1) {
		do {
		this->field1_0x4 = this->field1_0x4 + 1;
		if (*(short *)(*(int *)(this->field3_0x8 + 0xc) + this->field1_0x4 * 2) == -1) {
		this->field2_0x6 = sVar2 + 1;
		return;
		}
		}
		 while (this->field2_0x6 < *(short *)(this->field3_0x8 + 8));
		return;
		}
		}
		else {
		this->field2_0x6 = sVar1;
		}
		return;
		}
		
	*/
	return;
}

int UnkFamily32A::FUN_00141510() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily32A::FUN_00141510(UnkFamily32A *this){
		return (int)this->field1_0x4;
		}
		
	*/
	return 0;
}

int UnkFamily32A::FUN_00141520() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily32A::FUN_00141520(UnkFamily32A *this){
		return (int)*(short *)(this->field3_0x8 + 8);
		}
		
	*/
	return 0;
}

int UnkFamily32A::FUN_001427f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily32A::FUN_001427f0(UnkFamily32A *this){
		return *(int *)(this->field3_0x8 + 0x10) + this->field1_0x4 * 4;
		}
		
	*/
	return 0;
}

void UnkFamily32A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily32A * __thiscall UnkFamily32A::Dispose(UnkFamily32A *this,byte param_1){
		(this->parent).vtable = (UnkFamily32Abstract_VTable *)&UnkFamily32_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

