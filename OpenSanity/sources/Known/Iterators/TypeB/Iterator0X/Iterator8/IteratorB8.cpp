#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator8/IteratorB8.h"

uint IteratorB8::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB8::End(IteratorB8 *this){
		if ((-1 < (int)this->field2_0x8) && (this->field2_0x8 < *(uint *)(this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

int IteratorB8::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB8::Get(IteratorB8 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB8::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB8::Rewind(IteratorB8 *this){
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB8::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB8::Dispose(IteratorB8 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_8_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB8::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB8::Iterate(IteratorB8 *this){
		this->field2_0x8 = this->field2_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB8::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB8::Previous(IteratorB8 *this){
		this->field2_0x8 = this->field2_0x8 - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB8::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB8::Set(IteratorB8 *this,int param_1){
		this->field1_0x4 = *(int *)(param_1 + 4);
		this->field2_0x8 = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB8::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB8::SeekEnd(IteratorB8 *this){
		this->field2_0x8 = *(int *)(this->field1_0x4 + 4) - 1;
		return;
		}
		
	*/
	return;
}

int IteratorB8::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB8::Get2(IteratorB8 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB8::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB8 * __thiscall IteratorB8::Construct(IteratorB8 *this,int param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_8;
		this->field1_0x4 = param_1;
		this->field2_0x8 = 0;
		return this;
		}
		
	*/
	return;
}

