#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator3/IteratorB3B.h"

bool IteratorB3B::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorB3B::End(IteratorB3B *this){
		return (bool)('\x01' - (this->index < *this->collection));
		}
		
	*/
	return false;
}

uint* IteratorB3B::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __fastcall IteratorB3B::Get(IteratorB3B *this){
		return this->collection + this->index + 1;
		}
		
	*/
	return null;
}

void IteratorB3B::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3B::Rewind(IteratorB3B *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB3B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB3B * __thiscall IteratorB3B::Dispose(IteratorB3B *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorB3B::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB3B::Construct(IteratorB3B *this,uint *param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_3_B;
		this->index = 0;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

void IteratorB3B::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3B::Iterate(IteratorB3B *this){
		if (this->index < *this->collection) {
		this->index = this->index + 1;
		}
		return;
		}
		
	*/
	return;
}

