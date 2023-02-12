#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VK.h"

void UnkFamily10VK::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VK * __thiscall UnkFamily10VK::Construct(UnkFamily10VK *this,int param_1){
		UnkFamily8Abstract *element;
		UnkFamily8AAB *this_00;
		UnkFamily8Abstract *element_00;
		UnkFamily8BA *this_01;
		UnkFamily8Abstract *element_01;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,0xd,1);
		(this->parent).parent.field7_0x1c = param_1;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VK;
		element = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x18);
		element_01 = (UnkFamily8Abstract *)0x0;
		if (element == (UnkFamily8Abstract *)0x0) {
		element = (UnkFamily8Abstract *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,0x11,0x15,(UnkFamily10Base *)0x0,1);
		((UnkFamily8Abstract *)&element->vtable)->vtable = &UnkFamily8_VT_BD;
		((UnkFamily8Abstract *)&element[1].vtable)->vtable = (undefined **)0x0;
		}
		this_00 = (UnkFamily8AAB *)VirtualPool::AllocateMemory(0x50);
		if (this_00 == (UnkFamily8AAB *)0x0) {
		element_00 = (UnkFamily8Abstract *)0x0;
		}
		else {
		element_00 = (UnkFamily8Abstract *)UnkFamily8AAB::Construct(this_00,0x10,0x16,0,1,1,0,1);
		}
		this_01 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_01 != (UnkFamily8BA *)0x0) {
		element_01 = (UnkFamily8Abstract *)UnkFamily8BA::Construct(this_01,4,0x1c,param_1,1);
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,element);
		UnkFamily10Base::Add((UnkFamily10Base *)this,element_00);
		UnkFamily10Base::Add((UnkFamily10Base *)this,element_01);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VK::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VK::Dispose(UnkFamily10VK *this,byte param_1){
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily10VK::FUN_000a7990(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10VK::FUN_000a7990(UnkFamily10VK *this,undefined4 param_1){
		void *this_00;
		undefined local_1;
		this_00 = (void *)UnkFamily10Base::FUN_001a56e0((UnkFamily10Base *)this,0x16);
		FUN_001a1ba0(this_00,param_1);
		local_1 = (undefined)((uint)this >> 0x18);
		IS_WIDESCREEN = (bool)local_1;
		return;
		}
		
	*/
	return;
}

void UnkFamily10VK::FUN_000a79c0(byte param_2, byte param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VK::FUN_000a79c0(UnkFamily10VK *this,undefined param_2,undefined param_3,undefined4 param_4){
		int *piVar1;
		piVar1 = (int *)UnkFamily10Base::FUN_001a56e0((UnkFamily10Base *)this,0x16);
		(**(code **)(*piVar1 + 0x10))();
		return;
		}
		
	*/
	return;
}

