#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator10/IteratorB10.h"

int IteratorB10::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB10::Get(IteratorB10 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 0x14;
		}
		
	*/
	return 0;
}

void IteratorB10::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB10::Rewind(IteratorB10 *this){
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB10::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB10::SeekEnd(IteratorB10 *this){
		this->field2_0x8 = *(int *)(this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

uint IteratorB10::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB10::End(IteratorB10 *this){
		if ((-1 < (int)this->field2_0x8) && ((uint)this->field2_0x8 < *(uint *)(this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

int IteratorB10::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB10::Get2(IteratorB10 *this){
		return *(int *)this->field1_0x4 + this->field2_0x8 * 0x14;
		}
		
	*/
	return 0;
}

void IteratorB10::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB10::Iterate(IteratorB10 *this){
		this->field2_0x8 = this->field2_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB10::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB10::Previous(IteratorB10 *this){
		this->field2_0x8 = this->field2_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB10::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB10::Set(IteratorB10 *this,int param_1){
		this->field1_0x4 = *(undefined **)(param_1 + 4);
		this->field2_0x8 = *(undefined4 *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB10::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB10 * __thiscall IteratorB10::Dispose(IteratorB10 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_10_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorB10::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB10::Construct(IteratorB10 *this,undefined *param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_10;
		this->field1_0x4 = param_1;
		this->field2_0x8 = 0;
		return;
		}
		
	*/
	return;
}

