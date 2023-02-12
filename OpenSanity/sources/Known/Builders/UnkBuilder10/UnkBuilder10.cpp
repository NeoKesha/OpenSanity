#include "headers/Known/Builders/UnkBuilder10/UnkBuilder10.h"

#include "headers/Unknown/NonVirtualClasses/UNV021.h"
void UnkBuilder10::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder10 * __thiscall UnkBuilder10::Dispose(UnkBuilder10 *this,byte flag){
		this->vtable = (UnkBuilder10_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

UNV021* UnkBuilder10::BUILD(int id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV021 * UnkBuilder10::BUILD(int id){
		UNV021 *puVar1;
		if (id != 0x1d02) {
		return (UNV021 *)0x0;
		}
		puVar1 = (UNV021 *)VirtualPool::AllocateMemory(0x28);
		if (puVar1 != (UNV021 *)0x0) {
		puVar1->next = (UNV021 *)0x0;
		AutoClass40::Construct(&puVar1->payload);
		puVar1->field0_0x0 = 0;
		return puVar1;
		}
		return (UNV021 *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder10::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder10::Construct(UnkBuilder10 *this){
		this->vtable = (UnkBuilder10_VTable *)&Builder_VT_10;
		return;
		}
		
	*/
	return;
}

