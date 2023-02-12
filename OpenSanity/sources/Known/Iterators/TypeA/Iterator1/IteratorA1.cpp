#include "headers/Known/Iterators/TypeA/Iterator1/IteratorA1.h"

#include "headers/SortLater/FontCollection.h"
#include "headers/Unknown/AutoClasses/AutoClass58.h"
void IteratorA1::Rewind(IteratorA1* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA1::Rewind(IteratorA1 *param_1){
		param_1->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorA1::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA1::Iterate(IteratorA1 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

bool IteratorA1::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorA1::IsEnd(IteratorA1 *this){
		if ((-1 < this->index) && ((uint)this->index < (uint)this->fontCollection->fontsCount)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void IteratorA1::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA1::Previous(IteratorA1 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA1::Set(IteratorA1* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA1::Set(IteratorA1 *this,IteratorA1 *param_1){
		this->fontCollection = param_1->fontCollection;
		this->index = param_1->index;
		return;
		}
		
	*/
	return;
}

void IteratorA1::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA1::SeekEnd(IteratorA1 *this){
		this->index = this->fontCollection->fontsCount + -1;
		return;
		}
		
	*/
	return;
}

AutoClass58** IteratorA1::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass58 ** __fastcall IteratorA1::Get(IteratorA1 *this){
		return this->fontCollection->fonts + this->index;
		}
		
	*/
	return null;
}

void IteratorA1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorA1 * __thiscall IteratorA1::Dispose(IteratorA1 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_1_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

