#include "headers/Unknown/Families/Families3X/Family30/UnkFamily30A.h"

void UnkFamily30A::FUN_001411c0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily30A::FUN_001411c0(UnkFamily30A *this,int param_1){
		this->field1_0x4 = *(short *)(param_1 + 4);
		this->field2_0x6 = *(short *)(param_1 + 6);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void UnkFamily30A::FUN_001411e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30A::FUN_001411e0(UnkFamily30A *this){
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

uint UnkFamily30A::FUN_00141230() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily30A::FUN_00141230(UnkFamily30A *this){
		return this->field3_0x8 & 0xffffff00U |(uint)(byte)(1 - (this->field2_0x6 != *(short *)(this->field3_0x8 + 8)));
		}
		
	*/
	return 0;
}

void UnkFamily30A::FUN_00141250() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30A::FUN_00141250(UnkFamily30A *this){
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

int UnkFamily30A::FUN_001412b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily30A::FUN_001412b0(UnkFamily30A *this){
		return (int)this->field1_0x4;
		}
		
	*/
	return 0;
}

int UnkFamily30A::FUN_001412c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily30A::FUN_001412c0(UnkFamily30A *this){
		return (int)*(short *)(this->field3_0x8 + 8);
		}
		
	*/
	return 0;
}

int UnkFamily30A::FUN_001427d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily30A::FUN_001427d0(UnkFamily30A *this){
		return *(int *)(this->field3_0x8 + 0x10) + this->field1_0x4 * 4;
		}
		
	*/
	return 0;
}

void UnkFamily30A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily30A * __thiscall UnkFamily30A::Dispose(UnkFamily30A *this,byte param_1){
		(this->parent).vtable = (UnkFamily30Abstract_VTable *)&UnkFamily30_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily30A::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily30A * __thiscall UnkFamily30A::Construct(UnkFamily30A *this,int param_1){
		this->field1_0x4 = 0;
		this->field2_0x6 = 0;
		(this->parent).vtable = (UnkFamily30Abstract_VTable *)&UnkFamily30_VT_A;
		this->field3_0x8 = param_1;
		return this;
		}
		
	*/
	return;
}

