#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator3/IteratorB3A.h"

#include "headers/Unknown/UnkCInit172Collection.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
uint IteratorB3A::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB3A::End(IteratorB3A *this){
		if ((-1 < this->index) && ((uint)this->index < this->colection->cnt)) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB3A::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3A::Rewind(IteratorB3A *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB3A::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3A::Iterate(IteratorB3A *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB3A::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3A::SeekEnd(IteratorB3A *this){
		this->index = this->colection->cnt - 1;
		return;
		}
		
	*/
	return;
}

void IteratorB3A::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB3A::Previous(IteratorB3A *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB3A::Set(IteratorB3A* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB3A::Set(IteratorB3A *this,IteratorB3A *other){
		this->colection = other->colection;
		this->index = other->index;
		return;
		}
		
	*/
	return;
}

InstanceContextRefCounter** IteratorB3A::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextRefCounter ** __fastcall IteratorB3A::Get(IteratorB3A *this){
		return this->colection->array + this->index;
		}
		
	*/
	return null;
}

InstanceContextRefCounter** IteratorB3A::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextRefCounter ** __fastcall IteratorB3A::Get2(IteratorB3A *this){
		return this->colection->array + this->index;
		}
		
	*/
	return null;
}

void IteratorB3A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB3A::Dispose(IteratorB3A *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB3A::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB3A::Construct(IteratorB3A *this,UnkCInit172Collection *param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_3_A;
		this->colection = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

