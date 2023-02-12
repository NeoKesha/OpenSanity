#include "headers/Known/Iterators/TypeA/Iterator2/IteratorA2.h"

#include "headers/Known/Graphics/FontRenderer/RendererText.h"
#include "headers/Unknown/AutoClasses/AutoClass58SubCollection.h"
void IteratorA2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorA2::Dispose(IteratorA2 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_2_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorA2::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA2::Rewind(IteratorA2 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

bool IteratorA2::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorA2::IsEnd(IteratorA2 *this){
		if ((-1 < this->index) && ((uint)this->index < (uint)this->colection->count)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

void IteratorA2::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA2::Iterate(IteratorA2 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorA2::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA2::SeekEnd(IteratorA2 *this){
		this->index = this->colection->count + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA2::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA2::Previous(IteratorA2 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA2::Set(IteratorA2* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA2::Set(IteratorA2 *this,IteratorA2 *param_1){
		this->colection = param_1->colection;
		this->index = param_1->index;
		return;
		}
		
	*/
	return;
}

RendererText** IteratorA2::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	RendererText ** __fastcall IteratorA2::Get(IteratorA2 *this){
		return this->colection->array + this->index;
		}
		
	*/
	return null;
}

void IteratorA2::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA2::Construct(IteratorA2 *this,AutoClass58SubCollection *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_2;
		this->colection = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

