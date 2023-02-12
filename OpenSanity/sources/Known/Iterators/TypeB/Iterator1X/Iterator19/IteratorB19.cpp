#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator19/IteratorB19.h"

#include "headers/Known/GameData/AiPosition/AiPosition.h"
uint IteratorB19::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB19::End(IteratorB19 *this){
		if ((-1 < this->index) && ((uint)this->index < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

AiPosition** IteratorB19::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AiPosition ** __fastcall IteratorB19::Get(IteratorB19 *this){
		return (AiPosition **)(**(int **)&this->field1_0x4 + this->index * 4);
		}
		
	*/
	return null;
}

void IteratorB19::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB19::Rewind(IteratorB19 *this){
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB19::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB19::Iterate(IteratorB19 *this){
		this->index = this->index + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB19::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB19::Construct(IteratorB19 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_19;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->index = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB19::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB19::SeekEnd(IteratorB19 *this){
		this->index = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB19::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB19::Previous(IteratorB19 *this){
		this->index = this->index + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB19::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB19::Set(IteratorB19 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->index = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorB19::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB19::Get2(IteratorB19 *this){
		return **(int **)&this->field1_0x4 + this->index * 4;
		}
		
	*/
	return 0;
}

void IteratorB19::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB19::Dispose(IteratorB19 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_19_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

