#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Abstract.h"

void UnkFamily27Abstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily27Abstract * __fastcall UnkFamily27Abstract::Construct(UnkFamily27Abstract *this){
		UNV012 *puVar1;
		UNV012 *puVar2;
		UNV012 *puVar3;
		this->vtable = (UnkFamily27Abstract_VTable *)&UnkFamily27_VT_Abstract;
		this->field1_0x4 = 0;
		this->field_0x8 = 0;
		this->field_0x9 = 0;
		this->field6_0xc = 0;
		this->field7_0x10 = 0;
		this->field412_0x1b4 = 0;
		this->field413_0x1b8 = 10;
		this->field414_0x1bc = 10;
		puVar1 = (UNV012 *)VirtualPool::AllocateMemory(0x28);
		this->field411_0x1b0 = puVar1;
		this->field416_0x1c4 = 0;
		this->field417_0x1c8 = 10;
		this->field418_0x1cc = 10;
		puVar2 = (UNV012 *)VirtualPool::AllocateMemory(0x28);
		this->field415_0x1c0 = puVar2;
		this->field420_0x1d4 = 0;
		this->field421_0x1d8 = 10;
		this->field422_0x1dc = 10;
		puVar3 = (UNV012 *)VirtualPool::AllocateMemory(0x28);
		this->field419_0x1d0 = puVar3;
		this->field408_0x1a4 = 0;
		this->field409_0x1a8 = 0;
		this->field410_0x1ac = (UnkFamily27Wrapper *)0x0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily27Abstract::Dispose(UnkFamily27Abstract *this){
		this->vtable = (UnkFamily27Abstract_VTable *)&UnkFamily27_VT_Abstract;
		VirtualPool::FreeMemory(this->field419_0x1d0);
		VirtualPool::FreeMemory(this->field415_0x1c0);
		VirtualPool::FreeMemory(this->field411_0x1b0);
		return;
		}
		
	*/
	return;
}

uint UnkFamily27Abstract::FUN_0020ff00() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily27Abstract::FUN_0020ff00(UnkFamily27Abstract *this){
		UnkFamily27Wrapper *pUVar1;
		uint uVar2;
		pUVar1 = this->field410_0x1ac;
		if (pUVar1->field1_0x4 == 0) {
		FUN_00211c60(pUVar1->ptr,&this->field411_0x1b0,0x42);
		}
		else if (pUVar1->field1_0x4 == 1) {
		FUN_00211d20(pUVar1->ptr,(int)&this->field411_0x1b0,0x42);
		}
		pUVar1 = this->field410_0x1ac;
		if (pUVar1->field1_0x4 == 0) {
		uVar2 = FUN_00211c60(pUVar1->ptr,&this->field415_0x1c0,0x43);
		}
		else {
		uVar2 = pUVar1->field1_0x4 - 1;
		if (uVar2 == 0) {
		uVar2 = FUN_00211d20(pUVar1->ptr,(int)&this->field415_0x1c0,0x43);
		return uVar2 & 0xffffff00;
		}
		}
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily27Abstract::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily27Abstract * __thiscall UnkFamily27Abstract::Dispose(UnkFamily27Abstract *this,byte param_1){
		this->vtable = (UnkFamily27Abstract_VTable *)&UnkFamily27_VT_Abstract;
		VirtualPool::FreeMemory(this->field419_0x1d0);
		VirtualPool::FreeMemory(this->field415_0x1c0);
		VirtualPool::FreeMemory(this->field411_0x1b0);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily27Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::FUN_0020c060(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily27Abstract::FUN_0020c060(UnkFamily27Abstract *this,undefined4 param_1){
		(*(code *)this->vtable->field9_0x24)(0x501,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::FUN_0020c080(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily27Abstract::FUN_0020c080(UnkFamily27Abstract *this,undefined4 param_1){
		(*(code *)this->vtable->somethingTemplate)(0x501,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::FUN_0020c250() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined __fastcall UnkFamily27Abstract::FUN_0020c250(UnkFamily27Abstract *this){
		this->field7_0x10 = this->field7_0x10 + -1;
		return 1;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::FUN_0020c230() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily27Abstract::FUN_0020c230(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily27Abstract::FUN_0020c240() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily27Abstract::FUN_0020c240(void){
		return 1;
		}
		
	*/
	return;
}

