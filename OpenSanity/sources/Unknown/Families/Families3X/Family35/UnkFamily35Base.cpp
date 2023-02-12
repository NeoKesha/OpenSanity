#include "headers/Unknown/Families/Families3X/Family35/UnkFamily35Base.h"

void UnkFamily35Base::Dispose(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily35Base * __thiscall UnkFamily35Base::Dispose(UnkFamily35Base *this,int *param_1){
		int **elementArray;
		UnkFamily35Base *element;
		*(int **)&this->field1_0x4 = param_1;
		elementArray = (int **)VirtualPool::AllocateMemory((int)param_1 * 0x14 + 4);
		if (elementArray == (int **)0x0) {
		this->vtable = (UnkFamily35Base_VTable *)0x0;
		return this;
		}
		*elementArray = param_1;
		element = (UnkFamily35Base *)(elementArray + 1);
		if (-1 < (int)param_1 + -1) {
		do {
		element->vtable = (UnkFamily35Base_VTable *)&UnkFamily35_VT_Base;
		element->field1_0x4 = 0;
		element->field2_0x6 = 10;
		element->field3_0x8 = 0;
		element->field4_0xa = -1;
		element->field5_0xc = (undefined *)0x0;
		element->field6_0x10 = (undefined *)0x0;
		param_1 = (int *)((int)param_1 + -1);
		element = element + 1;
		}
		 while (param_1 != (int *)0x0);
		}
		this->vtable = (UnkFamily35Base_VTable *)(UnkFamily35Base *)(elementArray + 1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily35Base::Dispose_1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily35Base::Dispose(UnkFamily35Base *this){
		this->vtable = (UnkFamily35Base_VTable *)&UnkFamily35_VT_Base;
		VirtualPool::FreeMemory(this->field5_0xc);
		VirtualPool::FreeMemory(this->field6_0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily35Base::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily35Base::Dispose(UnkFamily35Base *this,byte param_1){
		UnkFamily35Base *pUVar1;
		undefined *puVar2;
		if ((param_1 & 2) == 0) {
		this->vtable = (UnkFamily35Base_VTable *)&UnkFamily35_VT_Base;
		VirtualPool::FreeMemory(this->field5_0xc);
		VirtualPool::FreeMemory(this->field6_0x10);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		puVar2 = this[-1].field6_0x10;
		pUVar1 = this + (int)puVar2;
		if (-1 < (int)(puVar2 + -1)) {
		do {
		pUVar1[-1].vtable = (UnkFamily35Base_VTable *)&UnkFamily35_VT_Base;
		VirtualPool::FreeMemory(pUVar1[-1].field5_0xc);
		VirtualPool::FreeMemory(pUVar1[-1].field6_0x10);
		puVar2 = puVar2 + -1;
		pUVar1 = pUVar1 + -1;
		}
		 while (puVar2 != (undefined *)0x0);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(&this[-1].field6_0x10);
		}
		return &this[-1].field6_0x10;
		}
		
	*/
	return;
}

void UnkFamily35Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily35Base::Construct(UnkFamily35Base *this){
		this->vtable = (UnkFamily35Base_VTable *)&UnkFamily35_VT_Base;
		this->field1_0x4 = 0;
		this->field2_0x6 = 10;
		this->field3_0x8 = 0;
		this->field4_0xa = -1;
		this->field5_0xc = (undefined *)0x0;
		this->field6_0x10 = (undefined *)0x0;
		return;
		}
		
	*/
	return;
}

