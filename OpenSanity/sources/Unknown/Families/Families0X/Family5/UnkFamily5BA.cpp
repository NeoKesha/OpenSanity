#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5BA.h"

void UnkFamily5BA::Construct(uint param_1, byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5BA * __thiscall UnkFamily5BA::Construct(UnkFamily5BA *this,undefined **param_1,undefined param_2,undefined4 param_3){
		uint uVar1;
		undefined3 in_stack_00000009;
		if (_param_2 != (InstanceContextRefCounter *)0x0) {
		uVar1 = _param_2->refCount;
		_param_2->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		UnkFamily5B::Construct(&this->parent,0x1801,param_2,param_3);
		(this->parent).parent.vtable = &UnkFamily5_VT_BA;
		this[1].parent.parent.vtable = param_1;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&param_2);
		return this;
		}
		
	*/
	return;
}

void UnkFamily5BA::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily5BA::CleanUp(UnkFamily5BA *this){
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

void UnkFamily5BA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily5BA::Dispose(UnkFamily5BA *this,byte param_1){
		(this->parent).parent.vtable = &UnkFamily5_VT_BA;
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

