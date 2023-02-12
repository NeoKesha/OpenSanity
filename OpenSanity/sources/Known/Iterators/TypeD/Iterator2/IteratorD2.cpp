#include "headers/Known/Iterators/TypeD/Iterator2/IteratorD2.h"

int IteratorD2::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorD2::Get(IteratorD2 *this){
		return (int)(this->field2_0x8 + 8);
		}
		
	*/
	return 0;
}

void IteratorD2::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD2::Rewind(IteratorD2 *this){
		this->field2_0x8 = *(undefined **)this->field1_0x4;
		return;
		}
		
	*/
	return;
}

bool IteratorD2::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorD2::IsEnd(IteratorD2 *this){
		return this->field2_0x8 == (undefined *)0x0;
		}
		
	*/
	return false;
}

void IteratorD2::UnkMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD2::UnkMethod1(IteratorD2 *this){
		this->field2_0x8 = *(undefined **)(this->field2_0x8 + 4);
		return;
		}
		
	*/
	return;
}

void IteratorD2::UnkMethod4(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorD2::UnkMethod4(IteratorD2 *this,int param_1){
		this->field1_0x4 = *(undefined **)(param_1 + 4);
		this->field2_0x8 = *(undefined **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorD2::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD2::UnkMethod3(IteratorD2 *this){
		this->field2_0x8 = *(undefined **)(this->field1_0x4 + 4);
		return;
		}
		
	*/
	return;
}

void IteratorD2::UnkMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD2::UnkMethod2(IteratorD2 *this){
		this->field2_0x8 = *(undefined **)this->field2_0x8;
		return;
		}
		
	*/
	return;
}

void IteratorD2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorD2 * __thiscall IteratorD2::Dispose(IteratorD2 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_2_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorD2::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorD2 * __thiscall IteratorD2::Construct(IteratorD2 *this,undefined4 *param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_2;
		this->field1_0x4 = (undefined *)param_1;
		this->field2_0x8 = (undefined *)*param_1;
		return this;
		}
		
	*/
	return;
}

