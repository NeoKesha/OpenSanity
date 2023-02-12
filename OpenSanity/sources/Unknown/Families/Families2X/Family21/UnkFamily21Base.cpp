#include "headers/Unknown/Families/Families2X/Family21/UnkFamily21Base.h"

void UnkFamily21Base::FUN_000c31e0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily21Base::FUN_000c31e0(UnkFamily21Base *this,int *param_1){
		(**(code **)(*param_1 + 0x78))(0x28);
		(**(code **)(*param_1 + 0x6c))(this->field6_0xc);
		(**(code **)(*param_1 + 0x78))(0x29);
		thunk_FUN_000c3230(param_1,this->str);
		(**(code **)(*param_1 + 0x78))(10);
		return;
		}
		
	*/
	return;
}

void UnkFamily21Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily21Base * __thiscall UnkFamily21Base::Dispose(UnkFamily21Base *this,byte param_1){
		UnkFamily21Base *pUVar1;
		int iVar2;
		if ((param_1 & 2) == 0) {
		this->vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		iVar2 = this[-1].field7_0x10;
		pUVar1 = this + iVar2;
		if (-1 < iVar2 + -1) {
		do {
		pUVar1 = pUVar1 + -1;
		iVar2 = iVar2 + -1;
		pUVar1->vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		}
		 while (iVar2 != 0);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(&this[-1].field7_0x10);
		}
		return (UnkFamily21Base *)&this[-1].field7_0x10;
		}
		
	*/
	return;
}

void UnkFamily21Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily21Base::Construct(UnkFamily21Base *this){
		this->vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily21Base::Construct_3(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily21Base::Construct(UnkFamily21Base *this,undefined4 param_1,undefined4 param_2){
		this->vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		this->field_0x4 = 0;
		this->str = "FILL ME";
		this->field6_0xc = param_1;
		this->field7_0x10 = param_2;
		return;
		}
		
	*/
	return;
}

void UnkFamily21Base::Construct_4(UnkFamily21Base* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily21Base::Construct(UnkFamily21Base *this,UnkFamily21Base *other){
		this->vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		this->field_0x4 = other->field_0x4;
		this->str = other->str;
		this->field6_0xc = other->field6_0xc;
		this->field7_0x10 = other->field7_0x10;
		return;
		}
		
	*/
	return;
}

