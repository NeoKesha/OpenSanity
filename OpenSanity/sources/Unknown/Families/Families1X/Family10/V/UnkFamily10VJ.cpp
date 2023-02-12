#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VJ.h"

void UnkFamily10VJ::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VJ * __thiscall UnkFamily10VJ::Construct(UnkFamily10VJ *this,int param_1){
		UnkFamily8AAB *this_00;
		UnkFamily8Abstract *element;
		UnkFamily8BA *this_01;
		UnkFamily8Abstract *element_00;
		UnkFamily10Base::Construct(&this->parent,0xf,1);
		(this->parent).field7_0x1c = param_1;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VJ;
		this_00 = (UnkFamily8AAB *)VirtualPool::AllocateMemory(0x50);
		if (this_00 == (UnkFamily8AAB *)0x0) {
		element = (UnkFamily8Abstract *)0x0;
		}
		else {
		element = (UnkFamily8Abstract *)UnkFamily8AAB::Construct(this_00,0x15,0x1a,2,3,1,0,1);
		}
		this_01 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily8BA *)0x0) {
		element_00 = (UnkFamily8Abstract *)0x0;
		}
		else {
		element_00 = (UnkFamily8Abstract *)UnkFamily8BA::Construct(this_01,4,0x1c,param_1,1);
		}
		UnkFamily10Base::Add(&this->parent,element);
		UnkFamily10Base::Add(&this->parent,element_00);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VJ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VJ::Dispose(UnkFamily10VJ *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily10VJ::FUN_000a7890(byte param_2, byte param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VJ::FUN_000a7890(UnkFamily10VJ *this,undefined param_2,undefined param_3,undefined4 param_4){
		int *piVar1;
		piVar1 = (int *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x1a);
		(**(code **)(*piVar1 + 0x10))();
		return;
		}
		
	*/
	return;
}

void UnkFamily10VJ::FUN_000a78c0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10VJ::FUN_000a78c0(UnkFamily10VJ *this,undefined4 param_1){
		uint *puVar1;
		InputController *this_00;
		void *this_01;
		char local_1;
		this_00 = InputController;
		this_01 = (void *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x1a);
		FUN_001a1ba0(this_01,param_1);
		local_1 = (char)((uint)this >> 0x18);
		if (local_1 != '\0') {
		puVar1 = &this_00->flags;
		*puVar1 = *puVar1 | 2;
		return;
		}
		InputController::FUN_0020a270(this_00);
		return;
		}
		
	*/
	return;
}

void UnkFamily10VJ::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10VJ::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

