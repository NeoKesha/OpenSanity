#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator11/IteratorB11.h"

uint IteratorB11::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB11::End(IteratorB11 *this){
		if ((-1 < this->field3_0x8) && ((uint)this->field3_0x8 < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB11::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB11::Rewind(IteratorB11 *this){
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB11::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB11::Iterate(IteratorB11 *this){
		this->field3_0x8 = this->field3_0x8 + 1;
		return;
		}
		
	*/
	return;
}

int IteratorB11::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB11::Get(IteratorB11 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

int IteratorB11::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB11::Get2(IteratorB11 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB11::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB11::Previous(IteratorB11 *this){
		this->field3_0x8 = this->field3_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB11::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB11::Set(IteratorB11 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB11::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB11::SeekEnd(IteratorB11 *this){
		this->field3_0x8 = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB11::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB11 * __thiscall IteratorB11::Dispose(IteratorB11 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_11_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

