#include "headers/Known/Iterators/TypeC/Iterator6/IteratorC6.h"

void IteratorC6::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC6::Reset(IteratorC6 *this){
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

void IteratorC6::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC6::Iterate(IteratorC6 *this){
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

uint IteratorC6::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall IteratorC6::IsEnd(IteratorC6 *this){
		return (uint)this->collection & 0xffffff00 |(uint)(byte)(1 - (this->index != *(short *)(this->collection + 8)));
		}
		
	*/
	return 0;
}

int IteratorC6::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC6::Get(IteratorC6 *this){
		return *(int *)(this->collection + 0x10) + this->field1_0x4 * 4;
		}
		
	*/
	return 0;
}

void IteratorC6::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorC6::Dispose(IteratorC6 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_6_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorC6::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC6::Construct(IteratorC6 *this,undefined *param_1){
		this->field1_0x4 = 0;
		this->index = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_6;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

void IteratorC6::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC6::Set(IteratorC6 *this,int param_1){
		this->field1_0x4 = *(short *)(param_1 + 4);
		this->index = *(short *)(param_1 + 6);
		this->collection = *(undefined **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorC6::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC6::GetIndex(IteratorC6 *this){
		return (int)this->field1_0x4;
		}
		
	*/
	return 0;
}

int IteratorC6::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC6::GetCollectionCnt(IteratorC6 *this){
		return (int)*(short *)(this->collection + 8);
		}
		
	*/
	return 0;
}

