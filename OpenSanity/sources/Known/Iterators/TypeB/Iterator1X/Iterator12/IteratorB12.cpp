#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator12/IteratorB12.h"

uint IteratorB12::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB12::End(IteratorB12 *this){
		if ((-1 < this->field3_0x8) && ((uint)this->field3_0x8 < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

int IteratorB12::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB12::Get(IteratorB12 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB12::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB12::Rewind(IteratorB12 *this){
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB12::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB12::Iterate(IteratorB12 *this){
		this->field3_0x8 = this->field3_0x8 + 1;
		return;
		}
		
	*/
	return;
}

int IteratorB12::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB12::Get2(IteratorB12 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB12::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB12::Previous(IteratorB12 *this){
		this->field3_0x8 = this->field3_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB12::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB12::Set(IteratorB12 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB12::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB12::SeekEnd(IteratorB12 *this){
		this->field3_0x8 = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB12::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB12::Dispose(IteratorB12 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_12_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB12::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB12::Construct(IteratorB12 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_12;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

