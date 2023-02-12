#include "headers/Known/Builders/UnkBuilder9/UnkBuilder9.h"

void UnkBuilder9::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder9 * __thiscall UnkBuilder9::Dispose(UnkBuilder9 *this,byte flag){
		this->vtable = (UnkBuilder9_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint* UnkBuilder9::BUILD(int id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * UnkBuilder9::BUILD(int id){
		uint *puVar1;
		if (id == 0x1e00) {
		puVar1 = (uint *)VirtualPool::AllocateMemory(100);
		if (puVar1 != (uint *)0x0) {
		*(undefined2 *)puVar1 = 0;
		puVar1[1] = 0xffffffff;
		*puVar1 = *puVar1 & 0xfffcffff;
		puVar1[3] = 0;
		puVar1[4] = 0;
		puVar1[5] = 0;
		puVar1[0x15] = 0;
		puVar1[0x17] = 0;
		puVar1[0x18] = 0;
		puVar1[2] = 0;
		return puVar1;
		}
		}
		return (uint *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder9::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder9::Construct(UnkBuilder9 *this){
		this->vtable = (UnkBuilder9_VTable *)&Builder_VT_9;
		return;
		}
		
	*/
	return;
}

