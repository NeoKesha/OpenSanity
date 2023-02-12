#include "headers/Known/Iterators/TypeA/Iterator4/IteratorA4.h"

bool IteratorA4::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorA4::IsEnd(IteratorA4 *this){
		return this->index == 0;
		}
		
	*/
	return false;
}

int IteratorA4::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorA4::Get(IteratorA4 *this){
		return this->index + 8;
		}
		
	*/
	return 0;
}

void IteratorA4::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA4::Rewind(IteratorA4 *this){
		this->index = *(int *)this->colection;
		return;
		}
		
	*/
	return;
}

void IteratorA4::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA4::Iterate(IteratorA4 *this){
		this->index = *(int *)(this->index + 4);
		return;
		}
		
	*/
	return;
}

void IteratorA4::Set(IteratorA4* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA4::Set(IteratorA4 *this,IteratorA4 *other){
		this->colection = other->colection;
		this->index = other->index;
		return;
		}
		
	*/
	return;
}

void IteratorA4::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA4::SeekEnd(IteratorA4 *this){
		this->index = *(int *)(this->colection + 4);
		return;
		}
		
	*/
	return;
}

void IteratorA4::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA4::Previous(IteratorA4 *this){
		this->index = *(int *)this->index;
		return;
		}
		
	*/
	return;
}

void IteratorA4::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorA4 * __thiscall IteratorA4::Dispose(IteratorA4 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_4_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorA4::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorA4 * __thiscall IteratorA4::Construct(IteratorA4 *this,undefined4 *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_4;
		this->colection = (undefined *)param_1;
		this->index = *param_1;
		return this;
		}
		
	*/
	return;
}

