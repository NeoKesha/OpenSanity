#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5AC.h"

void UnkFamily5AC::FUN_0018a900(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily5AC::FUN_0018a900(UnkFamily5AC *this,int *param_1){
		void *this_00;
		InstanceContext *this_01;
		InstanceContextSmartPtr IVar1;
		uint uVar2;
		char cVar3;
		undefined uVar4;
		UnkFamily5AB *this_02;
		UnkFamily5AA *pUVar5;
		cVar3 = (**(code **)(*param_1 + 0x38))();
		if (cVar3 != '\0') {
		this_00 = (void *)param_1[0x43];
		if (((this_00 != (void *)0x0) && ((*(uint *)((int)this_00 + 0xd0) >> 5 & 1) == 0)) &&((~(byte)(*(uint *)((int)this_00 + 0xd0) >> 1) & 1) == 0)) {
		FUN_0017c1d0(this_00,(int)this,(int)param_1);
		}
		if ((*(byte *)(param_1 + 0x56) & 1) != 0) {
		this_01 = (InstanceContext *)param_1[1];
		this_02 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_02 == (UnkFamily5AB *)0x0) {
		pUVar5 = (UnkFamily5AA *)0x0;
		}
		else {
		IVar1 = (InstanceContextSmartPtr)(this->parent).parent.field5_0x10;
		if (IVar1 != (InstanceContextSmartPtr)0x0) {
		uVar2 = *(uint *)((int)IVar1 + 4);
		*(uint *)((int)IVar1 + 4) = (uVar2 + 1 ^ uVar2) & 0xffffff ^ uVar2;
		}
		pUVar5 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_02,(short)((uint)param_1[0x56] >> 2),IVar1,2);
		}
		if (pUVar5 == (UnkFamily5AA *)0x0) {
		InstanceContext::FUN_000fa200(this_01,0);
		return;
		}
		uVar4 = UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		InstanceContext::FUN_000fa200(this_01,uVar4);
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily5AC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily5AC::Dispose(UnkFamily5AC *this,byte param_1){
		UnkFamily5Ptr *pUVar1;
		(this->parent).parent.vtable = &UnkFamily5_VT_Base;
		InstanceContextSmartPtr::Release(&(this->parent).parent.field5_0x10);
		pUVar1 = (this->parent).parent.someStruct.ptr;
		if (pUVar1 != (UnkFamily5Ptr *)0x0) {
		pUVar1->ptr = (UnkFamily5Base *)0x0;
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

