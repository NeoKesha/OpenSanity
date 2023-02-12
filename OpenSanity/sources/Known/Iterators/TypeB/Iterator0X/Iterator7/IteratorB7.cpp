#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator7/IteratorB7.h"

int IteratorB7::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB7::Get(IteratorB7 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB7::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB7::Rewind(IteratorB7 *this){
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB7::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB7::Iterate(IteratorB7 *this){
		this->field2_0x8 = this->field2_0x8 + 1;
		return;
		}
		
	*/
	return;
}

uint IteratorB7::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB7::End(IteratorB7 *this){
		if ((-1 < (int)this->field2_0x8) && (this->field2_0x8 < *(uint *)(this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB7::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB7::Previous(IteratorB7 *this){
		this->field2_0x8 = this->field2_0x8 - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB7::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB7::Set(IteratorB7 *this,int param_1){
		this->field1_0x4 = *(int *)(param_1 + 4);
		this->field2_0x8 = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB7::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB7::SeekEnd(IteratorB7 *this){
		this->field2_0x8 = *(int *)(this->field1_0x4 + 4) - 1;
		return;
		}
		
	*/
	return;
}

int IteratorB7::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB7::Get2(IteratorB7 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB7::Dispose(IteratorB7 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_7_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB7::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB7::Construct(IteratorB7 *this,int param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_7;
		this->field1_0x4 = param_1;
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

