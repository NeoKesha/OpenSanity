#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator21/IteratorB21.h"

#include "headers/Known/GameData/Trigger/Trigger.h"
Trigger** IteratorB21::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Trigger ** __fastcall IteratorB21::Get(IteratorB21 *this){
		return (Trigger **)(**(int **)&this->field1_0x4 + this->field3_0x8 * 4);
		}
		
	*/
	return null;
}

uint IteratorB21::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB21::End(IteratorB21 *this){
		if ((-1 < this->field3_0x8) && ((uint)this->field3_0x8 < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB21::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB21::Rewind(IteratorB21 *this){
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB21::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB21::Iterate(IteratorB21 *this){
		this->field3_0x8 = this->field3_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB21::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB21::Construct(IteratorB21 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_21;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB21::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB21::SeekEnd(IteratorB21 *this){
		this->field3_0x8 = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB21::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB21::Previous(IteratorB21 *this){
		this->field3_0x8 = this->field3_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB21::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB21::Set(IteratorB21 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorB21::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB21::Get2(IteratorB21 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB21::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB21::Dispose(IteratorB21 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_21_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

