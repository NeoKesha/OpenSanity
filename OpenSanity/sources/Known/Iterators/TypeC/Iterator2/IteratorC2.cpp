#include "headers/Known/Iterators/TypeC/Iterator2/IteratorC2.h"

void IteratorC2::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC2::Reset(IteratorC2 *this){
		int iVar1;
		this->index = 0;
		this->minFreeIndex = 0;
		iVar1 = (int)*(short *)(this->collection + 4);
		if (iVar1 != 1 && -1 < iVar1 + -1) {
		do {
		if (*(short *)(*(int *)(this->collection + 0xc) + this->index * 2) == -1) {
		return;
		}
		this->index = this->index + 1;
		}
		 while ((int)this->index < *(short *)(this->collection + 4) + -1);
		}
		return;
		}
		
	*/
	return;
}

void IteratorC2::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC2::Iterate(IteratorC2 *this){
		short cnt;
		short num;
		cnt = *(short *)(this->collection + 8);
		num = this->minFreeIndex;
		if ((int)num < cnt + -1) {
		if (num < cnt) {
		do {
		this->index = this->index + 1;
		if (*(short *)(*(int *)(this->collection + 0xc) + this->index * 2) == -1) {
		this->minFreeIndex = num + 1;
		return;
		}
		}
		 while (this->minFreeIndex < *(short *)(this->collection + 8));
		return;
		}
		}
		else {
		this->minFreeIndex = cnt;
		}
		return;
		}
		
	*/
	return;
}

bool IteratorC2::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorC2::IsEnd(IteratorC2 *this){
		return (bool)('\x01' - (this->minFreeIndex != *(short *)(this->collection + 8)));
		}
		
	*/
	return false;
}

int IteratorC2::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC2::Get(IteratorC2 *this){
		return this->index * 0x10 + *(int *)(this->collection + 0x10);
		}
		
	*/
	return 0;
}

void IteratorC2::Set(IteratorC2* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC2::Set(IteratorC2 *this,IteratorC2 *other){
		this->index = other->index;
		this->minFreeIndex = other->minFreeIndex;
		this->collection = other->collection;
		return;
		}
		
	*/
	return;
}

int IteratorC2::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC2::GetIndex(IteratorC2 *this){
		return (int)this->index;
		}
		
	*/
	return 0;
}

int IteratorC2::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC2::GetCollectionCnt(IteratorC2 *this){
		return (int)*(short *)(this->collection + 8);
		}
		
	*/
	return 0;
}

void IteratorC2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC2 * __thiscall IteratorC2::Dispose(IteratorC2 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_2_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorC2::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC2::Construct(IteratorC2 *this,undefined *param_1){
		this->index = 0;
		this->minFreeIndex = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_2;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

