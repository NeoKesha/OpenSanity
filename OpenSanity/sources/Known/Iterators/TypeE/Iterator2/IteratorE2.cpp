#include "headers/Known/Iterators/TypeE/Iterator2/IteratorE2.h"

void IteratorE2::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE2::Rewind(IteratorE2 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

bool IteratorE2::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorE2::IsEnd(IteratorE2 *this){
		return (bool)('\x01' - (this->index < *(uint *)(this->field1_0x4 + 4)));
		}
		
	*/
	return false;
}

void IteratorE2::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE2::Iterate(IteratorE2 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorE2::Construct(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorE2 * __thiscall IteratorE2::Construct(IteratorE2 *this,int *param_1){
		PhysicalPool *this_00;
		int *piVar1;
		(this->parent).parent.vtable = (IteratorEBase_VTable *)&IteratorE_VT_2;
		this->field1_0x4 = (int)param_1;
		this_00 = PhysicalPool::GetPool();
		piVar1 = PhysicalPool::GetBufferPointerByIndex(this_00,param_1);
		this->collection = (undefined *)piVar1;
		this->index = 0;
		return this;
		}
		
	*/
	return;
}

int IteratorE2::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorE2::Get(IteratorE2 *this){
		return (int)(this->collection + this->index * 8);
		}
		
	*/
	return 0;
}

void IteratorE2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorE2::Dispose(IteratorE2 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorEBase_VTable *)&IteratorE_VT_2_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

