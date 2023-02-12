#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5AB.h"

void UnkFamily5AB::Construct(ushort param_1, InstanceContextSmartPtr param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5AB * __thiscall UnkFamily5AB::Construct(UnkFamily5AB *this,short param_1,InstanceContextSmartPtr param_2,undefined4 param_3){
		uint uVar1;
		if ((InstanceContextSmartPtr)param_2 != (InstanceContextSmartPtr)0x0) {
		uVar1 = param_2->refCount;
		param_2->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		UnkFamily5A::Construct(&this->parent,0x103,param_2,param_3);
		(this->parent).parent.vtable = &UnkFamily5_VT_AB;
		(this->parent).parent.field3_0xa = param_1;
		InstanceContextSmartPtr::Release(&param_2.refCounter);
		return this;
		}
		
	*/
	return;
}

void UnkFamily5AB::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily5AB::CleanUp(UnkFamily5AB *this){
		UnkFamily5Ptr *pUVar1;
		(this->parent).parent.vtable = &UnkFamily5_VT_Base;
		InstanceContextSmartPtr::Release(&(this->parent).parent.field5_0x10);
		pUVar1 = (this->parent).parent.someStruct.ptr;
		if (pUVar1 != (UnkFamily5Ptr *)0x0) {
		pUVar1->ptr = (UnkFamily5Base *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily5AB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5AB * __thiscall UnkFamily5AB::Dispose(UnkFamily5AB *this,byte param_1){
		(this->parent).parent.vtable = &UnkFamily5_VT_AB;
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

