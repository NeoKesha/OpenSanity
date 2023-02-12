#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5Base.h"

void UnkFamily5Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily5Base::Dispose(UnkFamily5Base *this,byte param_1){
		UnkFamily5Ptr *pUVar1;
		this->vtable = &UnkFamily5_VT_Base;
		InstanceContextSmartPtr::Release(&this->field5_0x10);
		pUVar1 = (this->someStruct).ptr;
		if (pUVar1 != (UnkFamily5Ptr *)0x0) {
		pUVar1->ptr = (UnkFamily5Base *)0x0;
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkFamily5Base::Construct(ushort param_1, byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5Base * __thiscall UnkFamily5Base::Construct(UnkFamily5Base *this,short param_1,undefined param_2,int param_3){
		uint uVar1;
		undefined3 in_stack_00000009;
		this->vtable = &UnkFamily5_VT_Base;
		(this->someStruct).ptr = (UnkFamily5Ptr *)0x0;
		this->field2_0x8 = param_1;
		this->field3_0xa = 0;
		this->field4_0xc = param_3;
		this->field5_0x10 = _param_2;
		if (_param_2 != (InstanceContextRefCounter *)0x0) {
		uVar1 = _param_2->refCount;
		_param_2->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&param_2);
		return this;
		}
		
	*/
	return;
}

