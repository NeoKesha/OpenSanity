#include "headers/Known/Iterators/TypeC/Iterator3/IteratorC3.h"

#include "headers/Unknown/Families/Families2X/Family28/UnkFamily28A.h"
#include "headers/Unknown/Families/Families2X/Family28/Element/UnkFamily28Element.h"
void IteratorC3::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC3::Reset(IteratorC3 *this){
		int iVar1;
		this->index = 0;
		this->field2_0x6 = 0;
		iVar1 = (int)(this->collection->parent).field1_0x4;
		if (iVar1 != 1 && -1 < iVar1 + -1) {
		do {
		if ((this->collection->parent).indexArray[this->index] == -1) {
		return;
		}
		this->index = this->index + 1;
		}
		 while ((int)this->index < (this->collection->parent).field1_0x4 + -1);
		}
		return;
		}
		
	*/
	return;
}

void IteratorC3::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC3::Iterate(IteratorC3 *this){
		short sVar1;
		short sVar2;
		sVar1 = (this->collection->parent).cnt;
		sVar2 = this->field2_0x6;
		if ((int)sVar2 < sVar1 + -1) {
		if (sVar2 < sVar1) {
		do {
		this->index = this->index + 1;
		if ((this->collection->parent).indexArray[this->index] == -1) {
		this->field2_0x6 = sVar2 + 1;
		return;
		}
		}
		 while (this->field2_0x6 < (this->collection->parent).cnt);
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

uint IteratorC3::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall IteratorC3::IsEnd(IteratorC3 *this){
		return (uint)this->collection & 0xffffff00 |(uint)(byte)(1 - (this->field2_0x6 != (this->collection->parent).cnt));
		}
		
	*/
	return 0;
}

UnkFamily28Element* IteratorC3::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28Element * __fastcall IteratorC3::Get(IteratorC3 *this){
		return (this->collection->parent).array + this->index;
		}
		
	*/
	return null;
}

void IteratorC3::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC3::Set(IteratorC3 *this,int param_1){
		this->index = *(short *)(param_1 + 4);
		this->field2_0x6 = *(short *)(param_1 + 6);
		this->collection = *(UnkFamily28A **)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorC3::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC3::GetIndex(IteratorC3 *this){
		return (int)this->index;
		}
		
	*/
	return 0;
}

int IteratorC3::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC3::GetCollectionCnt(IteratorC3 *this){
		return (int)(this->collection->parent).cnt;
		}
		
	*/
	return 0;
}

void IteratorC3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC3 * __thiscall IteratorC3::Dispose(IteratorC3 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_3_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorC3::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC3::Construct(IteratorC3 *this,UnkFamily28A *param_1){
		this->index = 0;
		this->field2_0x6 = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_3;
		this->collection = param_1;
		return;
		}
		
	*/
	return;
}

