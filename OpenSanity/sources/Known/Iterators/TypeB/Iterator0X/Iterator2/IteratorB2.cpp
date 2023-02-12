#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator2/IteratorB2.h"

#include "headers/Known/Graphics/FontRenderer/RendererText.h"
#include "headers/Unknown/AutoClasses/AutoClass58SubCollection.h"
RendererText** IteratorB2::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	RendererText ** __fastcall IteratorB2::Get(IteratorB2 *this){
		return this->colection->array + this->index;
		}
		
	*/
	return null;
}

void IteratorB2::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB2::Rewind(IteratorB2 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

bool IteratorB2::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorB2::End(IteratorB2 *this){
		if ((-1 < this->index) && ((uint)this->index < (uint)this->colection->count)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void IteratorB2::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB2::Iterate(IteratorB2 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB2::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB2::SeekEnd(IteratorB2 *this){
		this->index = this->colection->count + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB2::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB2::Previous(IteratorB2 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB2::Set(IteratorB2* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB2::Set(IteratorB2 *this,IteratorB2 *param_1){
		this->colection = param_1->colection;
		this->index = param_1->index;
		return;
		}
		
	*/
	return;
}

RendererText** IteratorB2::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	RendererText ** __fastcall IteratorB2::Get2(IteratorB2 *this){
		return this->colection->array + this->index;
		}
		
	*/
	return null;
}

void IteratorB2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorB2 * __thiscall IteratorB2::Dispose(IteratorB2 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorB_VT_2_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorB2::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB2::Construct(IteratorB2 *this,AutoClass58SubCollection *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorB_VT_2;
		this->colection = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

