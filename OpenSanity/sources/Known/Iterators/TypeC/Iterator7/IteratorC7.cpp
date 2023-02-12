#include "headers/Known/Iterators/TypeC/Iterator7/IteratorC7.h"

void IteratorC7::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC7::Reset(IteratorC7 *this){
		int iVar1;
		this->field1_0x4 = 0;
		this->index = 0;
		iVar1 = (int)*(short *)(this->collection + 4);
		if (iVar1 != 1 && -1 < iVar1 + -1) {
		do {
		if (*(short *)(*(int *)(this->collection + 0xc) + this->field1_0x4 * 2) == -1) {
		return;
		}
		this->field1_0x4 = this->field1_0x4 + 1;
		}
		 while ((int)this->field1_0x4 < *(short *)(this->collection + 4) + -1);
		}
		return;
		}
		
	*/
	return;
}

void IteratorC7::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC7::Iterate(IteratorC7 *this){
		short sVar1;
		short sVar2;
		sVar1 = *(short *)(this->collection + 8);
		sVar2 = this->index;
		if ((int)sVar2 < sVar1 + -1) {
		if (sVar2 < sVar1) {
		do {
		this->field1_0x4 = this->field1_0x4 + 1;
		if (*(short *)(*(int *)(this->collection + 0xc) + this->field1_0x4 * 2) == -1) {
		this->index = sVar2 + 1;
		return;
		}
		}
		 while (this->index < *(short *)(this->collection + 8));
		return;
		}
		}
		else {
		this->index = sVar1;
		}
		return;
		}
		
	*/
	return;
}

uint IteratorC7::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall IteratorC7::IsEnd(IteratorC7 *this){
		return (uint)this->collection & 0xffffff00 |(uint)(byte)(1 - (this->index != *(short *)(this->collection + 8)));
		}
		
	*/
	return 0;
}

int IteratorC7::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC7::Get(IteratorC7 *this){
		return *(int *)(this->collection + 0x10) + this->field1_0x4 * 4;
		}
		
	*/
	return 0;
}

void IteratorC7::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC7::Set(IteratorC7 *this,int param_1){
		this->field1_0x4 = *(short *)(param_1 + 4);
		this->index = *(short *)(param_1 + 6);
		this->collection = *(undefined **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorC7::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC7::GetIndex(IteratorC7 *this){
		return (int)this->field1_0x4;
		}
		
	*/
	return 0;
}

int IteratorC7::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC7::GetCollectionCnt(IteratorC7 *this){
		return (int)*(short *)(this->collection + 8);
		}
		
	*/
	return 0;
}

void IteratorC7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorC7::Dispose(IteratorC7 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_7_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorC7::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC7::Construct(IteratorC7 *this,undefined *param_1){
		this->field1_0x4 = 0;
		this->index = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_7;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

