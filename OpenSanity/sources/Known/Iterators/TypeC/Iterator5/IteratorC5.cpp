#include "headers/Known/Iterators/TypeC/Iterator5/IteratorC5.h"

#include "headers/Unknown/Families/Families2X/Family28/UnkFamily28A.h"
#include "headers/Unknown/Families/Families2X/Family28/Element/UnkFamily28Element.h"
void IteratorC5::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC5::Reset(IteratorC5 *this){
		int iVar1;
		this->index1 = 0;
		this->index2 = 0;
		iVar1 = (int)(this->collection->parent).field1_0x4;
		if (iVar1 != 1 && -1 < iVar1 + -1) {
		do {
		if ((this->collection->parent).indexArray[this->index1] == -1) {
		return;
		}
		this->index1 = this->index1 + 1;
		}
		 while ((int)this->index1 < (this->collection->parent).field1_0x4 + -1);
		}
		return;
		}
		
	*/
	return;
}

void IteratorC5::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC5::Iterate(IteratorC5 *this){
		short cnt;
		short index;
		cnt = (this->collection->parent).cnt;
		index = this->index2;
		if ((int)index < cnt + -1) {
		if (index < cnt) {
		do {
		this->index1 = this->index1 + 1;
		if ((this->collection->parent).indexArray[this->index1] == -1) {
		this->index2 = index + 1;
		return;
		}
		}
		 while (this->index2 < (this->collection->parent).cnt);
		return;
		}
		}
		else {
		this->index2 = cnt;
		}
		return;
		}
		
	*/
	return;
}

bool IteratorC5::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorC5::IsEnd(IteratorC5 *this){
		return (bool)('\x01' - (this->index2 != (this->collection->parent).cnt));
		}
		
	*/
	return false;
}

UnkFamily28Element* IteratorC5::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28Element * __fastcall IteratorC5::Get(IteratorC5 *this){
		return (this->collection->parent).array + this->index1;
		}
		
	*/
	return null;
}

void IteratorC5::Set(IteratorC5* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC5::Set(IteratorC5 *this,IteratorC5 *param_1){
		this->index1 = param_1->index1;
		this->index2 = param_1->index2;
		this->collection = param_1->collection;
		return;
		}
		
	*/
	return;
}

int IteratorC5::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC5::GetIndex(IteratorC5 *this){
		return (int)this->index1;
		}
		
	*/
	return 0;
}

int IteratorC5::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC5::GetCollectionCnt(IteratorC5 *this){
		return (int)(this->collection->parent).cnt;
		}
		
	*/
	return 0;
}

void IteratorC5::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC5Abstract * __thiscall IteratorC5::Dispose(IteratorC5 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_5_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorC5::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC5::Construct(IteratorC5 *this,UnkFamily28A *param_1){
		this->index1 = 0;
		this->index2 = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_5;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

