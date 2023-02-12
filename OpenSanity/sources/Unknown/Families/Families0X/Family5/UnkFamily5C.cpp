#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5C.h"

void UnkFamily5C::Construct(ushort param_1, byte unkShit, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5C * __thiscall UnkFamily5C::Construct(UnkFamily5C *this,short param_1,undefined unkShit,int param_3){
		uint uVar1;
		undefined3 in_stack_00000009;
		InstanceContextRefCounter *local_4;
		local_4 = _unkShit;
		if (_unkShit != (InstanceContextRefCounter *)0x0) {
		uVar1 = _unkShit->refCount;
		_unkShit->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		(this->parent).vtable = &UnkFamily5_VT_Base;
		(this->parent).someStruct.ptr = (UnkFamily5Ptr *)0x0;
		(this->parent).field2_0x8 = param_1;
		(this->parent).field3_0xa = 0;
		(this->parent).field4_0xc = param_3;
		(this->parent).field5_0x10 = _unkShit;
		if (_unkShit != (InstanceContextRefCounter *)0x0) {
		uVar1 = _unkShit->refCount;
		_unkShit->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		InstanceContextSmartPtr::Release(&local_4);
		(this->parent).vtable = &UnkFamily5_VT_C;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&unkShit);
		return this;
		}
		
	*/
	return;
}

void UnkFamily5C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5C * __thiscall UnkFamily5C::Dispose(UnkFamily5C *this,byte param_1){
		UnkFamily5Ptr *pUVar1;
		(this->parent).vtable = &UnkFamily5_VT_Base;
		InstanceContextSmartPtr::Release(&(this->parent).field5_0x10);
		pUVar1 = (this->parent).someStruct.ptr;
		if (pUVar1 != (UnkFamily5Ptr *)0x0) {
		pUVar1->ptr = (UnkFamily5Base *)0x0;
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

