#include "headers/Known/Iterators/TypeD/Iterator1/IteratorD1.h"

int IteratorD1::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorD1::Get(IteratorD1 *this){
		return (int)(this->current + 8);
		}
		
	*/
	return 0;
}

void IteratorD1::UnkMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD1::UnkMethod1(IteratorD1 *this){
		this->current = *(undefined **)(this->current + 4);
		return;
		}
		
	*/
	return;
}

void IteratorD1::UnkMethod4(IteratorD1* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorD1::UnkMethod4(IteratorD1 *this,IteratorD1 *param_1){
		this->first = param_1->first;
		this->current = param_1->current;
		return;
		}
		
	*/
	return;
}

void IteratorD1::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD1::UnkMethod3(IteratorD1 *this){
		this->current = *(undefined **)(this->first + 4);
		return;
		}
		
	*/
	return;
}

void IteratorD1::UnkMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD1::UnkMethod2(IteratorD1 *this){
		this->current = *(undefined **)this->current;
		return;
		}
		
	*/
	return;
}

void IteratorD1::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorD1 * __thiscall IteratorD1::Construct(IteratorD1 *this,undefined4 *param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_1;
		this->first = (undefined *)param_1;
		this->current = (undefined *)*param_1;
		return this;
		}
		
	*/
	return;
}

void IteratorD1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorD1 * __thiscall IteratorD1::Dispose(IteratorD1 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_1_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorD1::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD1::Rewind(IteratorD1 *this){
		this->current = *(undefined **)this->first;
		return;
		}
		
	*/
	return;
}

bool IteratorD1::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorD1::IsEnd(IteratorD1 *this){
		return this->current == (undefined *)0x0;
		}
		
	*/
	return false;
}

