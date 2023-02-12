#include "headers/Unknown/Families/Families3X/Family36/UnkFamily36Base.h"

void UnkFamily36Base::Dispose(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily36Base * __thiscall UnkFamily36Base::Dispose(UnkFamily36Base *this,int *param_1){
		int **ppiVar1;
		UnkFamily36Base_VTable *pUVar2;
		*(int **)&this->field1_0x4 = param_1;
		ppiVar1 = (int **)VirtualPool::AllocateMemory((int)param_1 * 0x14 + 4);
		if (ppiVar1 == (int **)0x0) {
		this->vtable = (UnkFamily36Base_VTable *)0x0;
		return this;
		}
		*ppiVar1 = param_1;
		pUVar2 = (UnkFamily36Base_VTable *)(ppiVar1 + 1);
		if (-1 < (int)param_1 + -1) {
		do {
		pUVar2->Dispose = (undefined *)&UnkFamily36_VT_Base;
		*(undefined2 *)&pUVar2[1].Dispose = 0;
		*(undefined2 *)((int)&pUVar2[1].Dispose + 2) = 10;
		*(undefined2 *)&pUVar2[2].Dispose = 0;
		*(undefined2 *)((int)&pUVar2[2].Dispose + 2) = 0xffff;
		pUVar2[3].Dispose = (undefined *)0x0;
		pUVar2[4].Dispose = (undefined *)0x0;
		param_1 = (int *)((int)param_1 + -1);
		pUVar2 = pUVar2 + 5;
		}
		 while (param_1 != (int *)0x0);
		}
		this->vtable = (UnkFamily36Base_VTable *)(ppiVar1 + 1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily36Base::Dispose_1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily36Base::Dispose(UnkFamily36Base *this){
		this->vtable = (UnkFamily36Base_VTable *)&UnkFamily36_VT_Base;
		VirtualPool::FreeMemory(this->field5_0xc);
		VirtualPool::FreeMemory(this->field6_0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily36Base::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily36Base::Dispose(UnkFamily36Base *this,byte param_1){
		UnkFamily36Base *pUVar1;
		undefined *puVar2;
		if ((param_1 & 2) == 0) {
		this->vtable = (UnkFamily36Base_VTable *)&UnkFamily36_VT_Base;
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
		pUVar1[-1].vtable = (UnkFamily36Base_VTable *)&UnkFamily36_VT_Base;
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

void UnkFamily36Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily36Base * __fastcall UnkFamily36Base::Construct(UnkFamily36Base *this){
		this->vtable = (UnkFamily36Base_VTable *)&UnkFamily36_VT_Base;
		this->field1_0x4 = 0;
		this->field2_0x6 = 10;
		this->field3_0x8 = 0;
		this->field4_0xa = -1;
		this->field5_0xc = (undefined *)0x0;
		this->field6_0x10 = (undefined *)0x0;
		return this;
		}
		
	*/
	return;
}

