#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

bool UnkFamily25Abstract::FUN_0010e610(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily25Abstract::FUN_0010e610(UnkFamily25Abstract *this,int **param_1){
		int **this_00;
		bool bVar1;
		undefined local_c [8];
		uint local_4;
		this_00 = param_1;
		if (param_1[1] != (int *)0x0) {
		TwinString::Set((TwinString *)local_c,"DEBUG");
		FUN_0011afb0(this_00,local_c,0x973,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[1].field_0xc,0x974,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[2].field_0x8,0x975,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[3].field_0x4,0x976,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,this + 4,0x977,0);
		FUN_000f2a20(this_00,&this[1].vtable,0x978);
		param_1 = (int **)(uint)*(byte *)&this->field13_0x10;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar1 != false) {
		if (this_00[1] == (int *)0x0) {
		(**(code **)(**this_00 + 0x78))(0x979,&param_1);
		}
		else if (this_00[1] == (int *)0x1) {
		(**(code **)(**this_00 + 0x28))(0x979,param_1);
		TwinString::Dispose((TwinString *)&stack0xffffffec);
		return true;
		}
		}
		TwinString::Dispose((TwinString *)local_c);
		return true;
		}
		local_c._0_4_ = (char *)0x0;
		local_c._4_4_ = 0;
		local_4 = 0;
		FUN_0011afb0(param_1,local_c,0x973,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[1].field_0xc,0x974,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[2].field_0x8,0x975,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,&this[3].field_0x4,0x976,0);
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)this_00,this + 4,0x977,0);
		FUN_000f2a20(this_00,&this[1].vtable,0x978);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar1 != false) {
		if (this_00[1] == (int *)0x0) {
		(**(code **)(**this_00 + 0x78))(0x979,&param_1);
		}
		else if (this_00[1] == (int *)0x1) {
		(**(code **)(**this_00 + 0x28))(0x979,param_1);
		*(undefined *)&this->field13_0x10 = (undefined)local_4;
		TwinString::Dispose((TwinString *)&stack0xffffffec);
		return true;
		}
		}
		*(undefined *)&this->field13_0x10 = param_1._0_1_;
		TwinString::Dispose((TwinString *)local_c);
		return true;
		}
		
	*/
	return false;
}

void UnkFamily25Abstract::FUN_0010e540(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25Abstract::FUN_0010e540(UnkFamily25Abstract *this,int *param_1){
		(**(code **)(*param_1 + 4))(&this->field13_0x10,4,1);
		(**(code **)(*param_1 + 0x38))(this + 1);
		(**(code **)(*param_1 + 4))(&this[1].field_0xc,0x10,1);
		(**(code **)(*param_1 + 4))(&this[2].field_0x8,0x10,1);
		(**(code **)(*param_1 + 4))(&this[3].field_0x4,0x10,1);
		(**(code **)(*param_1 + 4))(this + 4,0x10,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_0010e5b0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25Abstract::FUN_0010e5b0(UnkFamily25Abstract *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(&this->field13_0x10,4);
		(**(code **)(*param_1 + 100))(this[1].vtable);
		(**(code **)(*param_1 + 0xc))(&this[1].field_0xc,0x10);
		(**(code **)(*param_1 + 0xc))(&this[2].field_0x8,0x10);
		(**(code **)(*param_1 + 0xc))(&this[3].field_0x4,0x10);
		(**(code **)(*param_1 + 0xc))(this + 4,0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_00101820(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25Abstract::FUN_00101820(UnkFamily25Abstract *this,int param_1){
		this->field13_0x10 = *(int *)(param_1 + 0x10);
		this[1].vtable = *(UnkFamily25Abstract_VTable **)(param_1 + 0x14);
		*(undefined4 *)&this[1].field_0xc = *(undefined4 *)(param_1 + 0x20);
		this[1].field13_0x10 = *(int *)(param_1 + 0x24);
		this[2].vtable = *(UnkFamily25Abstract_VTable **)(param_1 + 0x28);
		*(undefined4 *)&this[2].field_0x4 = *(undefined4 *)(param_1 + 0x2c);
		*(undefined4 *)&this[2].field_0x8 = *(undefined4 *)(param_1 + 0x30);
		*(undefined4 *)&this[2].field_0xc = *(undefined4 *)(param_1 + 0x34);
		this[2].field13_0x10 = *(int *)(param_1 + 0x38);
		this[3].vtable = *(UnkFamily25Abstract_VTable **)(param_1 + 0x3c);
		*(undefined4 *)&this[3].field_0x4 = *(undefined4 *)(param_1 + 0x40);
		*(undefined4 *)&this[3].field_0x8 = *(undefined4 *)(param_1 + 0x44);
		*(undefined4 *)&this[3].field_0xc = *(undefined4 *)(param_1 + 0x48);
		this[3].field13_0x10 = *(int *)(param_1 + 0x4c);
		this[4].vtable = *(UnkFamily25Abstract_VTable **)(param_1 + 0x50);
		*(undefined4 *)&this[4].field_0x4 = *(undefined4 *)(param_1 + 0x54);
		*(undefined4 *)&this[4].field_0x8 = *(undefined4 *)(param_1 + 0x58);
		*(undefined4 *)&this[4].field_0xc = *(undefined4 *)(param_1 + 0x5c);
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_00116ec0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::FUN_00116ec0(UnkFamily25Abstract *this){
		this->field13_0x10 = this->field13_0x10 | 0x100;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_00116ed0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::FUN_00116ed0(UnkFamily25Abstract *this){
		this->field13_0x10 = this->field13_0x10 & 0xfffffeff;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_00116ee0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::FUN_00116ee0(UnkFamily25Abstract *this){
		*(undefined *)&this->field13_0x10 = 4;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::FUN_00116ef0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25Abstract::FUN_00116ef0(UnkFamily25Abstract *this,undefined param_1){
		*(undefined *)&this->field13_0x10 = param_1;
		return;
		}
		
	*/
	return;
}

uint UnkFamily25Abstract::FUN_00116f00() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily25Abstract::FUN_00116f00(UnkFamily25Abstract *this){
		return this->field13_0x10 & 0xff;
		}
		
	*/
	return 0;
}

void UnkFamily25Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25Abstract * __thiscall UnkFamily25Abstract::Dispose(UnkFamily25Abstract *this,byte param_1){
		this->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Construct(UnkFamily25Abstract *this){
		this->field13_0x10 = 0;
		*(undefined *)&this->field13_0x10 = 4;
		this->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		this->field13_0x10 = this->field13_0x10 | 0x100;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Unroll(UnkFamily25Abstract *this){
		this->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Unroll_13(UnkFamily25Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Unroll(UnkFamily25Abstract *param_1){
		param_1->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Unroll_14(UnkFamily25Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Unroll(UnkFamily25Abstract *param_1){
		param_1->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Unroll_15(UnkFamily25Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Unroll(UnkFamily25Abstract *param_1){
		param_1->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily25Abstract::Unroll_16(UnkFamily25Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25Abstract::Unroll(UnkFamily25Abstract *param_1){
		param_1->vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		return;
		}
		
	*/
	return;
}

