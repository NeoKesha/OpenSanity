#include "headers/Unknown/Families/Families2X/Family26/UnkFamily26Base.h"

#include "headers/Unknown/NonVirtualClasses/UNV008.h"
void UnkFamily26Base::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily26Base::CleanUp(UnkFamily26Base *this){
		uint uVar1;
		void **ppvVar2;
		this->vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_Base;
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (uint)this->field2_0x8));
		 uVar1 = uVar1 + 1) {
		ppvVar2 = (void **)(*(code *)PTR_Get_0038e200)();
		if (*ppvVar2 != (void *)0x0) {
		VirtualPool::FreeMemory(*ppvVar2);
		}
		}
		VirtualPool::FreeMemory(this->collection);
		return;
		}
		
	*/
	return;
}

void UnkFamily26Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26Base * __fastcall UnkFamily26Base::Construct(UnkFamily26Base *this){
		UNV008 *puVar1;
		this->vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_Base;
		this->field2_0x8 = 0;
		this->cnt1 = 10;
		this->cnt2 = 10;
		puVar1 = (UNV008 *)VirtualPool::AllocateMemory(0x28);
		this->collection = puVar1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily26Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26Base * __thiscall UnkFamily26Base::Dispose(UnkFamily26Base *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

