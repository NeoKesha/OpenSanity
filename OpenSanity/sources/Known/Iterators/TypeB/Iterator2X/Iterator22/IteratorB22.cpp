#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator22/IteratorB22.h"

#include "headers/Known/GameData/Trigger/CameraTrigger.h"
CameraTrigger** IteratorB22::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraTrigger ** __fastcall IteratorB22::Get(IteratorB22 *this){
		return (CameraTrigger **)(**(int **)&this->field1_0x4 + this->field3_0x8 * 4);
		}
		
	*/
	return null;
}

uint IteratorB22::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB22::End(IteratorB22 *this){
		if ((-1 < this->field3_0x8) && ((uint)this->field3_0x8 < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorB22::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB22::Rewind(IteratorB22 *this){
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB22::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB22::Iterate(IteratorB22 *this){
		this->field3_0x8 = this->field3_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB22::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB22::Construct(IteratorB22 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_22;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB22::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB22::SeekEnd(IteratorB22 *this){
		this->field3_0x8 = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB22::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB22::Previous(IteratorB22 *this){
		this->field3_0x8 = this->field3_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB22::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB22::Set(IteratorB22 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorB22::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB22::Get2(IteratorB22 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB22::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB22::Dispose(IteratorB22 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_22_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

