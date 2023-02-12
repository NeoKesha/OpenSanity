#include "headers/Unknown/Families/Families0X/Family9/UnkFamily9A.h"

void UnkFamily9A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily9A::Dispose(UnkFamily9A *this){
		byte bVar1;
		bVar1 = this->field1_0x14;
		(this->parent).vtable = (UnkFamily9Base_VTable *)&UnkFamily9_VT_A;
		if (bVar1 != 0) {
		FUN_001c5360((int)this);
		}
		(this->parent).vtable = (UnkFamily9Base_VTable *)&UnkFamily9_VT_Base;
		VirtualPool::FreeMemory((this->parent).field5_0xc);
		VirtualPool::FreeMemory((this->parent).field6_0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily9A::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily9A::Dispose(UnkFamily9A *this,byte param_1){
		byte bVar1;
		bVar1 = this->field1_0x14;
		(this->parent).vtable = (UnkFamily9Base_VTable *)&UnkFamily9_VT_A;
		if (bVar1 != 0) {
		FUN_001c5360((int)this);
		}
		(this->parent).vtable = (UnkFamily9Base_VTable *)&UnkFamily9_VT_Base;
		VirtualPool::FreeMemory((this->parent).field5_0xc);
		VirtualPool::FreeMemory((this->parent).field6_0x10);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily9A::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily9A::Construct(UnkFamily9A *this,byte param_1){
		(this->parent).field1_0x4 = 0;
		(this->parent).field3_0x8 = 0;
		(this->parent).field5_0xc = (undefined *)0x0;
		(this->parent).field6_0x10 = (undefined *)0x0;
		(this->parent).field2_0x6 = 10;
		(this->parent).field4_0xa = -1;
		(this->parent).vtable = (UnkFamily9Base_VTable *)&UnkFamily9_VT_A;
		this->field1_0x14 = param_1;
		return;
		}
		
	*/
	return;
}

