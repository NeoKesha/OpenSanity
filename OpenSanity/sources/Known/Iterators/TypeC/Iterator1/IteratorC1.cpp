#include "headers/Known/Iterators/TypeC/Iterator1/IteratorC1.h"

void IteratorC1::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC1::Reset(IteratorC1 *this){
		int iVar1;
		this->index = 0;
		this->field2_0x6 = 0;
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

void IteratorC1::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC1::Iterate(IteratorC1 *this){
		short sVar1;
		short sVar2;
		sVar1 = *(short *)(this->collection + 8);
		sVar2 = this->field2_0x6;
		if ((int)sVar2 < sVar1 + -1) {
		if (sVar2 < sVar1) {
		do {
		this->index = this->index + 1;
		if (*(short *)(*(int *)(this->collection + 0xc) + this->index * 2) == -1) {
		this->field2_0x6 = sVar2 + 1;
		return;
		}
		}
		 while (this->field2_0x6 < *(short *)(this->collection + 8));
		return;
		}
		}
		else {
		this->field2_0x6 = sVar1;
		}
		return;
		}
		
	*/
	return;
}

uint IteratorC1::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall IteratorC1::IsEnd(IteratorC1 *this){
		return (uint)this->collection & 0xffffff00 |(uint)(byte)(1 - (this->field2_0x6 != *(short *)(this->collection + 8)));
		}
		
	*/
	return 0;
}

int IteratorC1::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC1::Get(IteratorC1 *this){
		return this->index * 0x10 + *(int *)(this->collection + 0x10);
		}
		
	*/
	return 0;
}

void IteratorC1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC1 * __thiscall IteratorC1::Dispose(IteratorC1 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_1_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorC1::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC1::Set(IteratorC1 *this,int param_1){
		this->index = *(short *)(param_1 + 4);
		this->field2_0x6 = *(short *)(param_1 + 6);
		this->collection = *(undefined **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorC1::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC1::GetIndex(IteratorC1 *this){
		return (int)this->index;
		}
		
	*/
	return 0;
}

int IteratorC1::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC1::GetCollectionCnt(IteratorC1 *this){
		return (int)*(short *)(this->collection + 8);
		}
		
	*/
	return 0;
}

void IteratorC1::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC1::Construct(IteratorC1 *this,undefined *param_1){
		this->index = 0;
		this->field2_0x6 = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_1;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

