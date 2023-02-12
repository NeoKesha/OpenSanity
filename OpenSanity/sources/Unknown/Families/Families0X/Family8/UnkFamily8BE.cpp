#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8BE.h"

void UnkFamily8BE::Construct(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8BE * __thiscall UnkFamily8BE::Construct(UnkFamily8BE *this,int param_1,uint param_2,int param_3,uint param_4){
		UnkFamily8B::Construct(&this->parent,&DAT_00388031,param_2,0,1);
		this->field3_0x1c = param_1;
		(this->parent).parent.vtable = &UnkFamily8_VT_BE;
		this->field1_0x14 = param_4;
		this->field2_0x18 = param_3;
		return this;
		}
		
	*/
	return;
}

uint* UnkFamily8BE::FUN_002036e0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8BE::FUN_002036e0(UnkFamily8BE *this,byte param_1){
		UnkFamily8Abstract::Unroll((UnkFamily8Abstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return null;
}

void UnkFamily8BE::FUN_00201360() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8BE::FUN_00201360(UnkFamily8BE *this){
		uint *puVar1;
		if (STR_INDEX[this->field3_0x1c] == -1) {
		(this->parent).parent.field1_0x4 = (int)SaveSystemStringsArray[this->field3_0x1c];
		puVar1 = &(this->parent).parent.field2_0x8;
		*puVar1 = *puVar1 & 0xff000fff;
		return;
		}
		(this->parent).parent.field1_0x4 = (int)LOCAL_MSG1[STR_INDEX[this->field3_0x1c]];
		puVar1 = &(this->parent).parent.field2_0x8;
		*puVar1 = *puVar1 & 0xff000fff;
		return;
		}
		
	*/
	return;
}

uint UnkFamily8BE::FUN_002012b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily8BE::FUN_002012b0(UnkFamily8BE *this){
		int iVar1;
		iVar1 = this->field2_0x18;
		if (iVar1 == 0) {
		*(uint *)(this->field1_0x14 + 4) =((this->parent).parent.field2_0x8 & 0xf) << 0x14 |*(uint *)(this->field1_0x14 + 4) & 0xff01ffff | 0x10000;
		}
		else {
		if (iVar1 == 1) {
		*(uint *)(this->field1_0x14 + 4) = *(uint *)(this->field1_0x14 + 4) & 0xfff2ffff | 0x20000;
		return 0;
		}
		if (iVar1 == 2) {
		*(uint *)(this->field1_0x14 + 4) = *(uint *)(this->field1_0x14 + 4) & 0xfff3ffff | 0x30000;
		return 0;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

