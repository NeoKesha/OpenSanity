#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator1/IteratorB1.h"

#include "headers/SortLater/FontCollection.h"
#include "headers/Unknown/AutoClasses/AutoClass58.h"
AutoClass58** IteratorB1::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass58 ** __fastcall IteratorB1::Get(IteratorB1 *this){
		return this->collection->fonts + this->index;
		}
		
	*/
	return null;
}

void IteratorB1::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB1::Rewind(IteratorB1 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB1::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB1::Iterate(IteratorB1 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

bool IteratorB1::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorB1::End(IteratorB1 *this){
		if ((-1 < this->index) && ((uint)this->index < (uint)this->collection->fontsCount)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void IteratorB1::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB1::Previous(IteratorB1 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB1::Set(IteratorB1* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB1::Set(IteratorB1 *this,IteratorB1 *other){
		this->collection = other->collection;
		this->index = other->index;
		return;
		}
		
	*/
	return;
}

void IteratorB1::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB1::SeekEnd(IteratorB1 *this){
		this->index = this->collection->fontsCount + -1;
		return;
		}
		
	*/
	return;
}

AutoClass58** IteratorB1::Get2(IteratorB1* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass58 ** __fastcall IteratorB1::Get2(IteratorB1 *param_1){
		return param_1->collection->fonts + param_1->index;
		}
		
	*/
	return null;
}

void IteratorB1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB1 * __thiscall IteratorB1::Dispose(IteratorB1 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_1_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

