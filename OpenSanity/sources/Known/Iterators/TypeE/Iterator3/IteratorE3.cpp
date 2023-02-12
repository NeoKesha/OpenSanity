#include "headers/Known/Iterators/TypeE/Iterator3/IteratorE3.h"

void IteratorE3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorE3::Dispose(IteratorE3 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorEBase_VTable *)&IteratorE_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

bool IteratorE3::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorE3::IsEnd(IteratorE3 *this){
		return (bool)('\x01' - (this->index < *(uint *)(this->field1_0x4 + 4)));
		}
		
	*/
	return false;
}

void IteratorE3::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE3::Rewind(IteratorE3 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

int IteratorE3::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorE3::Get(IteratorE3 *this){
		return (int)(this->collection + this->index * 8);
		}
		
	*/
	return 0;
}

void IteratorE3::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE3::Iterate(IteratorE3 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

