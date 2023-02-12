#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8Abstract.h"

uint UnkFamily8Abstract::FUN_001a1aa0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __fastcall UnkFamily8Abstract::FUN_001a1aa0(UnkFamily8Abstract *this){
		return this->field7_0x10;
		}
		
	*/
	return 0;
}

void UnkFamily8Abstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8Abstract::Unroll(UnkFamily8Abstract *this){
		this->vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

int UnkFamily8Abstract::FUN_001a4420(uint param_1, uint param_2, int param_3, int param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily8Abstract::FUN_001a4420(UnkFamily8Abstract *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4){
		int iVar1;
		int iVar2;
		int iVar3;
		bool bVar4;
		if ((*(byte *)(param_3 + 8) & 1) != 0) {
		bVar4 = ((byte)(1 << ((byte)param_1 & 0x1f)) & this->field_0xc) == 0;
		if (bVar4) {
		iVar2 = 0;
		}
		else {
		iVar2 = (*(code *)*this->vtable)(param_1,param_2);
		}
		if (param_4 != 0) {
		if (bVar4) {
		iVar3 = 0;
		}
		else {
		iVar3 = (-(uint)(iVar2 != 0) & 9) + 1;
		}
		iVar1 = *(int *)(param_4 + iVar3 * 4);
		if (iVar1 != 0) {
		FUN_00132a40(iVar1,*(undefined4 *)(param_4 + 0x34 + iVar3 * 4),-1.0,0xbf800000,0,-1);
		}
		}
		return iVar2;
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily8Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily8Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily8Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8Abstract * __thiscall UnkFamily8Abstract::Dispose(UnkFamily8Abstract *this,byte param_1){
		this->vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8Abstract::Dispose(UnkFamily8Abstract *this,byte param_1){
		this->vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Dispose_7(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8Abstract::Dispose(UnkFamily8Abstract *this,byte param_1){
		this->vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Dispose_8(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8Abstract::Dispose(UnkFamily8Abstract *this,byte param_1){
		this->vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Construct(uint param_1, uint param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily8Abstract::Construct(UnkFamily8Abstract *this,int param_1,uint param_2,byte param_3){
		char cVar1;
		this->field1_0x4 = param_1;
		this->field2_0x8 =(param_3 & 0xf | 0x10) << 0x18 | param_2 & 0xfff | this->field2_0x8 & 0xf0000000;
		this->vtable = &UnkFamily8_VT_Abstract;
		this->field7_0x10 = (UnkFamily10Base *)0x0;
		cVar1 = ('\x01' << (param_3 & 0x1f)) + -1;
		this->field_0xd = cVar1;
		this->field_0xc = cVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Construct_10(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily8Abstract::Construct(UnkFamily8Abstract *this,uint param_1,uint param_2,uint param_3){
		char cVar1;
		this->field7_0x10 = (UnkFamily10Base *)0x0;
		this->field1_0x4 = 0;
		this->field2_0x8 =((param_3 & 0xf | 0x10) << 0xc | param_1 & 0xfff) << 0xc | param_2 & 0xfff |this->field2_0x8 & 0xf0000000;
		this->vtable = &UnkFamily8_VT_Abstract;
		cVar1 = ('\x01' << ((byte)param_3 & 0x1f)) + -1;
		this->field_0xd = cVar1;
		this->field_0xc = cVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Unroll_11(UnkFamily8Abstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8Abstract::Unroll(UnkFamily8Abstract *param_1){
		param_1->vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Unroll_12() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8Abstract::Unroll(UnkFamily8Abstract *this){
		this->vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily8Abstract::Unroll_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8Abstract::Unroll(UnkFamily8Abstract *this){
		this->vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

