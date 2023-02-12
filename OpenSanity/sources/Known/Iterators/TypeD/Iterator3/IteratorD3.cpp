#include "headers/Known/Iterators/TypeD/Iterator3/IteratorD3.h"

void IteratorD3::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD3::Rewind(IteratorD3 *this){
		this->field2_0x8 = *(undefined **)this->field1_0x4;
		return;
		}
		
	*/
	return;
}

bool IteratorD3::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorD3::IsEnd(IteratorD3 *this){
		return this->field2_0x8 == (undefined *)0x0;
		}
		
	*/
	return false;
}

void IteratorD3::UnkMethod4(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorD3::UnkMethod4(IteratorD3 *this,int param_1){
		this->field1_0x4 = *(undefined **)(param_1 + 4);
		this->field2_0x8 = *(undefined **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorD3::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD3::UnkMethod3(IteratorD3 *this){
		this->field2_0x8 = *(undefined **)(this->field1_0x4 + 4);
		return;
		}
		
	*/
	return;
}

int IteratorD3::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorD3::Get(IteratorD3 *this){
		return (int)(this->field2_0x8 + 8);
		}
		
	*/
	return 0;
}

void IteratorD3::UnkMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD3::UnkMethod1(IteratorD3 *this){
		this->field2_0x8 = *(undefined **)(this->field2_0x8 + 4);
		return;
		}
		
	*/
	return;
}

void IteratorD3::UnkMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorD3::UnkMethod2(IteratorD3 *this){
		this->field2_0x8 = *(undefined **)this->field2_0x8;
		return;
		}
		
	*/
	return;
}

void IteratorD3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorD3::Dispose(IteratorD3 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorD3::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorD3::Construct(IteratorD3 *this,undefined4 *param_1){
		(this->parent).parent.vtable = (IteratorDBase_VTable *)&IteratorD_VT_3;
		this->field1_0x4 = (undefined *)param_1;
		this->field2_0x8 = (undefined *)*param_1;
		return;
		}
		
	*/
	return;
}

