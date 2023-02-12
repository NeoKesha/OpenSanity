#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator9/IteratorB9.h"

void IteratorB9::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB9::Rewind(IteratorB9 *this){
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB9::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB9::Iterate(IteratorB9 *this){
		this->field2_0x8 = this->field2_0x8 + 1;
		return;
		}
		
	*/
	return;
}

uint IteratorB9::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB9::End(IteratorB9 *this){
		if ((-1 < (int)this->field2_0x8) && (this->field2_0x8 < *(uint *)(this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

int IteratorB9::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB9::Get(IteratorB9 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

int IteratorB9::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB9::Get2(IteratorB9 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB9::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB9::Previous(IteratorB9 *this){
		this->field2_0x8 = this->field2_0x8 - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB9::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB9::Set(IteratorB9 *this,int param_1){
		this->field1_0x4 = *(int *)(param_1 + 4);
		this->field2_0x8 = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB9::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB9::SeekEnd(IteratorB9 *this){
		this->field2_0x8 = *(int *)(this->field1_0x4 + 4) - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB9::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB9::Dispose(IteratorB9 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_9_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB9::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB9 * __thiscall IteratorB9::Construct(IteratorB9 *this,int param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_9;
		this->field1_0x4 = param_1;
		this->field2_0x8 = 0;
		return this;
		}
		
	*/
	return;
}

