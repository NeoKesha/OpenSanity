#include "headers/Unknown/NonVirtualClasses/UNV034.h"

void UNV034::FUN_0009ad70(UNV034* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UNV034::FUN_0009ad70(UNV034 *param_1){
		undefined *this;
		*(undefined4 *)param_1 = 0;
		this = &param_1->field_0x14;
		*(uint *)param_1 = *(uint *)param_1 & 0xfffff8e0 | 0xe0;
		if ((*(int **)this != (int *)0x0) && (**(int **)this != 0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this);
		*(undefined4 *)this = 0;
		}
		*(undefined4 *)&param_1->field_0x4 = 0;
		*(undefined4 *)&param_1->field_0x8 = 0;
		*(undefined4 *)&param_1->field_0xc = 0;
		UNV032::thunk_FUN_0009a520(&param_1->field96_0x60);
		return;
		}
		
	*/
	return;
}

UNV034* UNV034::FUN_0009b4e0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV034 * __thiscall UNV034::FUN_0009b4e0(UNV034 *this,uint param_1){
		UNV032 *this_01;
		uint uVar1;
		UNV032 *this_00;
		*(uint *)&this->field_0x10 = param_1;
		this_01 = &this->field96_0x60;
		*(undefined4 *)&this->field_0x14 = 0;
		*(undefined4 *)&(this->field96_0x60).field_0x4 = 0;
		(this->field96_0x60).field60_0x60.refCounter = (InstanceContextRefCounter *)0x0;
		(this->field96_0x60).smartPtr.refCounter = (InstanceContextRefCounter *)0x0;
		AutoClass40::Construct(&(this->field96_0x60).ac40);
		this_01->field0_0x0 = 0;
		UNV032::thunk_FUN_0009a520(this_01);
		thunk_FUN_0009ad70(this);
		(this->field96_0x60).field13_0x10.x = DAT_0039dd10;
		(this->field96_0x60).field13_0x10.y = FLOAT_0039dd14;
		(this->field96_0x60).field13_0x10.z = DAT_0039dd18;
		(this->field96_0x60).field13_0x10.w = FLOAT_0039dd1c;
		(this->field96_0x60).field14_0x20.x = FLOAT_0038b9f8;
		(this->field96_0x60).field14_0x20.y = FLOAT_0038639c;
		(this->field96_0x60).field14_0x20.z = FLOAT_0038b87c;
		UNV032::thunk_FUN_00082180(this_01,'\x01');
		*(undefined *)((int)&(this->field96_0x60).field14_0x20.w + ((uint)this_01->field0_0x0 >> 8 & 0xf) * 2) = 0x11;
		*(undefined *)((int)&(this->field96_0x60).field14_0x20.w + ((uint)this_01->field0_0x0 >> 8 & 0xf) * 2 + 1) = 1;
		uVar1 = this_01->field0_0x0;
		this_01->field0_0x0 = ((uVar1 & 0xffffff00) + 0x100 ^ uVar1) & 0xf00 ^ uVar1;
		return this;
		}
		
	*/
	return null;
}

