#include "headers/Known/Iterators/TypeA/Iterator3/IteratorA3.h"

int IteratorA3::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorA3::Get(IteratorA3 *this){
		return this->field2_0x8 + 8;
		}
		
	*/
	return 0;
}

void IteratorA3::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA3::Rewind(IteratorA3 *this){
		this->field2_0x8 = *(uint *)this->field1_0x4;
		return;
		}
		
	*/
	return;
}

bool IteratorA3::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorA3::IsEnd(IteratorA3 *this){
		return this->field2_0x8 == 0;
		}
		
	*/
	return false;
}

void IteratorA3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorA3::Dispose(IteratorA3 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorTypeA_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorA3::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA3::Iterate(IteratorA3 *this){
		this->field2_0x8 = *(uint *)(this->field2_0x8 + 4);
		return;
		}
		
	*/
	return;
}

void IteratorA3::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA3::Set(IteratorA3 *this,int param_1){
		this->field1_0x4 = *(int *)(param_1 + 4);
		this->field2_0x8 = *(uint *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorA3::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA3::SeekEnd(IteratorA3 *this){
		this->field2_0x8 = *(uint *)(this->field1_0x4 + 4);
		return;
		}
		
	*/
	return;
}

void IteratorA3::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA3::Previous(IteratorA3 *this){
		this->field2_0x8 = *(uint *)this->field2_0x8;
		return;
		}
		
	*/
	return;
}

void IteratorA3::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA3::Construct(IteratorA3 *this,undefined4 *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_3;
		this->field1_0x4 = (int)param_1;
		this->field2_0x8 = *param_1;
		return;
		}
		
	*/
	return;
}

