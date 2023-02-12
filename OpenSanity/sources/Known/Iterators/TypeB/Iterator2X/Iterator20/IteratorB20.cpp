#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator20/IteratorB20.h"

#include "headers/Known/GameData/AiPath/AiPath.h"
uint IteratorB20::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB20::End(IteratorB20 *this){
		if ((-1 < this->index) && ((uint)this->index < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

AiPath** IteratorB20::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AiPath ** __fastcall IteratorB20::Get(IteratorB20 *this){
		return (AiPath **)(**(int **)&this->field1_0x4 + this->index * 4);
		}
		
	*/
	return null;
}

void IteratorB20::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Rewind(IteratorB20 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB20::Dispose(IteratorB20 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_20_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB20::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB20::Dispose(IteratorB20 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_20_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorB20::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Iterate(IteratorB20 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Unroll(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Unroll(undefined4 *param_1){
		*param_1 = &IteratorB_VT_20_Abstract;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Unroll_7(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Unroll(undefined4 *param_1){
		*param_1 = &IteratorB_VT_20_Abstract;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Unroll_8(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Unroll(undefined4 *param_1){
		*param_1 = &IteratorB_VT_20_Abstract;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB20::Construct(IteratorB20 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_20;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB20::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::SeekEnd(IteratorB20 *this){
		this->index = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Previous(IteratorB20 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB20::Set(IteratorB20 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->index = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorB20::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB20::Get2(IteratorB20 *this){
		return **(int **)&this->field1_0x4 + this->index * 4;
		}
		
	*/
	return 0;
}

void IteratorB20::Unroll_14(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB20::Unroll(undefined4 *param_1){
		*param_1 = &IteratorB_VT_20_Abstract;
		return;
		}
		
	*/
	return;
}

void IteratorB20::Dispose_15(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB20::Dispose(IteratorB20 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_20_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

