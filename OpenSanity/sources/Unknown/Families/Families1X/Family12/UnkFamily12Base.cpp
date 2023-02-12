#include "headers/Unknown/Families/Families1X/Family12/UnkFamily12Base.h"

#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17Base.h"
void UnkFamily12Base::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily12Base::Construct(UnkFamily12Base *this,UnkFamily17Base *param_1){
		this->vtable = &UnkFamily12_VT_Base;
		this->cnt1 = 0;
		this->cnt2 = 0;
		this->field5_0x10 = param_1;
		this->array1 = (undefined **)0x0;
		this->array2 = (undefined **)0x0;
		return;
		}
		
	*/
	return;
}

void UnkFamily12Base::CleanUp2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily12Base::CleanUp2(UnkFamily12Base *this){
		ushort i;
		i = 0;
		if (this->cnt2 != 0) {
		do {
		VirtualPool::FreeMemory(this->array2[i]);
		i = i + 1;
		}
		 while (i < this->cnt2);
		}
		VirtualPool::FreeMemory(this->array2);
		this->array2 = (undefined **)0x0;
		this->cnt2 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily12Base::FUN_0016d1a0(UnkFamily17Base* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily12Base::FUN_0016d1a0(UnkFamily12Base *this,UnkFamily17Base *param_1){
		this->field5_0x10 = param_1;
		return;
		}
		
	*/
	return;
}

void UnkFamily12Base::CleanUp1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily12Base::CleanUp1(UnkFamily12Base *this){
		undefined *ptr;
		ushort i;
		i = 0;
		if (this->cnt1 != 0) {
		do {
		ptr = this->array1[i];
		if (ptr != (undefined *)0x0) {
		VirtualPool::FreeMemory(*(void **)(ptr + 0x14));
		VirtualPool::FreeMemory(ptr);
		}
		i = i + 1;
		}
		 while (i < this->cnt1);
		}
		VirtualPool::FreeMemory(this->array1);
		this->array1 = (undefined **)0x0;
		this->cnt1 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily12Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily12Base::Dispose(UnkFamily12Base *this,byte param_1){
		this->vtable = &UnkFamily12_VT_Base;
		CleanUp1(this);
		CleanUp2(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

