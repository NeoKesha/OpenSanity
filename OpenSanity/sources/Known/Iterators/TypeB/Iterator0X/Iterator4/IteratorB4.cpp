#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator4/IteratorB4.h"

void* IteratorB4::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * __fastcall IteratorB4::Get(IteratorB4 *this){
		return *this->colection + this->index * 4;
		}
		
	*/
	return null;
}

void IteratorB4::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB4::Rewind(IteratorB4 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

bool IteratorB4::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorB4::End(IteratorB4 *this){
		if ((-1 < (int)(undefined *)this->index) && ((undefined *)this->index < this->colection[1])) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void IteratorB4::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB4::Iterate(IteratorB4 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB4::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB4::SeekEnd(IteratorB4 *this){
		this->index = (int)(this->colection[1] + -1);
		return;
		}
		
	*/
	return;
}

void* IteratorB4::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * __fastcall IteratorB4::Get2(IteratorB4 *this){
		return *this->colection + this->index * 4;
		}
		
	*/
	return null;
}

void IteratorB4::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB4::Previous(IteratorB4 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB4::Set(IteratorB4* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB4::Set(IteratorB4 *this,IteratorB4 *other){
		this->colection = other->colection;
		this->index = other->index;
		return;
		}
		
	*/
	return;
}

void IteratorB4::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB4 * __thiscall IteratorB4::Dispose(IteratorB4 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_4_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorB4::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB4::Construct(IteratorB4 *this,undefined **param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_4;
		this->colection = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

