#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator5/IteratorB5.h"

int IteratorB5::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB5::Get(IteratorB5 *this){
		return *(int *)this->collection + this->index * 4;
		}
		
	*/
	return 0;
}

void IteratorB5::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB5::Rewind(IteratorB5 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

uint IteratorB5::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB5::End(IteratorB5 *this){
		if ((-1 < (int)this->index) && (this->index < *(uint *)(this->collection + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB5::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB5::Iterate(IteratorB5 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB5::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB5::SeekEnd(IteratorB5 *this){
		this->index = *(int *)(this->collection + 4) - 1;
		return;
		}
		
	*/
	return;
}

int IteratorB5::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB5::Get2(IteratorB5 *this){
		return *(int *)this->collection + this->index * 4;
		}
		
	*/
	return 0;
}

void IteratorB5::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB5::Previous(IteratorB5 *this){
		this->index = this->index - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB5::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB5::Set(IteratorB5 *this,int param_1){
		this->collection = *(undefined **)(param_1 + 4);
		this->index = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorB5::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB5 * __thiscall IteratorB5::Dispose(IteratorB5 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_5_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorB5::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB5::Construct(IteratorB5 *this,undefined *param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_5;
		this->collection = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

