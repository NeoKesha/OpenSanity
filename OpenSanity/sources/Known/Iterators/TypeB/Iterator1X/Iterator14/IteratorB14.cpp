#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator14/IteratorB14.h"

#include "headers/Known/GameData/Position/Position.h"
Position** IteratorB14::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Position ** __fastcall IteratorB14::Get(IteratorB14 *this){
		return (Position **)(**(int **)&this->field1_0x4 + this->index * 4);
		}
		
	*/
	return null;
}

uint IteratorB14::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB14::End(IteratorB14 *this){
		if ((-1 < this->index) && ((uint)this->index < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB14::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB14::Rewind(IteratorB14 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB14::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB14::Dispose(IteratorB14 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_14_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB14::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB14::Iterate(IteratorB14 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB14::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB14::Construct(IteratorB14 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_14;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB14::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB14::SeekEnd(IteratorB14 *this){
		this->index = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

int IteratorB14::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB14::Get2(IteratorB14 *this){
		return **(int **)&this->field1_0x4 + this->index * 4;
		}
		
	*/
	return 0;
}

void IteratorB14::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB14::Previous(IteratorB14 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB14::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB14::Set(IteratorB14 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->index = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

