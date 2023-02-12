#include "headers/Unknown/Families/Families1X/Family11/UnkFamily11Abstract.h"

void UnkFamily11Abstract::Copy(UnkFamily11Abstract* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily11Abstract::Copy(UnkFamily11Abstract *this,UnkFamily11Abstract *other){
		undefined4 *puVar1;
		uint i;
		int iVar2;
		undefined4 *puVar3;
		VirtualPool::FreeMemory(this->field2_0x8);
		iVar2 = other->cnt;
		this->cnt = iVar2;
		this->field3_0xc = other->field3_0xc;
		this->field4_0x10 = other->field4_0x10;
		i = (iVar2 * 2 + 2) * 0x10;
		puVar1 = (undefined4 *)VirtualPool::AllocateMemory(i);
		this->field2_0x8 = (undefined *)puVar1;
		puVar3 = (undefined4 *)other->field2_0x8;
		for (i = i >> 2;
		 i != 0;
		 i = i - 1) {
		*puVar1 = *puVar3;
		puVar3 = puVar3 + 1;
		puVar1 = puVar1 + 1;
		}
		for (iVar2 = 0;
		 iVar2 != 0;
		 iVar2 = iVar2 + -1) {
		*(undefined *)puVar1 = *(undefined *)puVar3;
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		puVar1 = (undefined4 *)((int)puVar1 + 1);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily11Abstract::Construct(int param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11Abstract * __thiscall UnkFamily11Abstract::Construct(UnkFamily11Abstract *this,int param_1,float param_2){
		undefined *puVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c / param_2;
		this->vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		this->field3_0xc = (int)param_2;
		this->field4_0x10 = (int)fVar2;
		this->cnt = param_1 / 2 + -1;
		puVar1 = (undefined *)VirtualPool::AllocateMemory(param_1 << 4);
		this->field2_0x8 = puVar1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily11Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11Abstract * __thiscall UnkFamily11Abstract::Dispose(UnkFamily11Abstract *this,byte param_1){
		this->vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		VirtualPool::FreeMemory(this->field2_0x8);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily11Abstract::Construct_3(UnkFamily11Abstract* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11Abstract * __thiscall UnkFamily11Abstract::Construct(UnkFamily11Abstract *this,UnkFamily11Abstract *other){
		this->vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		this->field2_0x8 = (undefined *)0x0;
		Copy(this,other);
		return this;
		}
		
	*/
	return;
}

void UnkFamily11Abstract::Construct_4(UnkFamily11Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily11Abstract::Construct(UnkFamily11Abstract *param_1){
		param_1->vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		param_1->field2_0x8 = (undefined *)0x0;
		return;
		}
		
	*/
	return;
}

void UnkFamily11Abstract::Dispose_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily11Abstract::Dispose(UnkFamily11Abstract *this){
		this->vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		VirtualPool::FreeMemory(this->field2_0x8);
		return;
		}
		
	*/
	return;
}

