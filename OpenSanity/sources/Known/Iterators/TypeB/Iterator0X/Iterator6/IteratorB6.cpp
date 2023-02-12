#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator6/IteratorB6.h"

int IteratorB6::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB6::Get(IteratorB6 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB6::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB6::Rewind(IteratorB6 *this){
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

uint IteratorB6::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB6::End(IteratorB6 *this){
		if ((-1 < (int)this->field2_0x8) && (this->field2_0x8 < *(uint *)(this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB6::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB6::Iterate(IteratorB6 *this){
		this->field2_0x8 = this->field2_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB6::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB6::SeekEnd(IteratorB6 *this){
		this->field2_0x8 = *(int *)(this->field1_0x4 + 4) - 1;
		return;
		}
		
	*/
	return;
}

int IteratorB6::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB6::Get2(IteratorB6 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB6::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB6::Previous(IteratorB6 *this){
		this->field2_0x8 = this->field2_0x8 - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB6::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB6::Set(IteratorB6 *this,int param_1){
		this->field1_0x4 = *(int *)(param_1 + 4);
		this->field2_0x8 = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB6::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB6Abstract * __thiscall IteratorB6::Dispose(IteratorB6 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&UnkFamily7_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB6::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB6 * __thiscall IteratorB6::Construct(IteratorB6 *this,int param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_6;
		this->field1_0x4 = param_1;
		this->field2_0x8 = 0;
		return this;
		}
		
	*/
	return;
}

