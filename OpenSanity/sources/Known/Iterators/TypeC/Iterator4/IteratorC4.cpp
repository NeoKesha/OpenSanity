#include "headers/Known/Iterators/TypeC/Iterator4/IteratorC4.h"

#include "headers/Known/Graphics/Renderer/RendererSubStruct.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
void IteratorC4::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC4::Reset(IteratorC4 *this){
		int cnt;
		this->i = 0;
		this->index = 0;
		cnt = (int)this->collection->cnt1;
		if (cnt != 1 && -1 < cnt + -1) {
		do {
		if (this->collection->indexArray[this->i] == -1) {
		return;
		}
		this->i = this->i + 1;
		}
		 while ((int)this->i < this->collection->cnt1 + -1);
		}
		return;
		}
		
	*/
	return;
}

void IteratorC4::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorC4::Iterate(IteratorC4 *this){
		short cnt;
		short selected;
		cnt = this->collection->cnt2;
		selected = this->index;
		if ((int)selected < cnt + -1) {
		if (selected < cnt) {
		do {
		this->i = this->i + 1;
		if (this->collection->indexArray[this->i] == -1) {
		this->index = selected + 1;
		return;
		}
		}
		 while (this->index < this->collection->cnt2);
		return;
		}
		}
		else {
		this->index = cnt;
		}
		return;
		}
		
	*/
	return;
}

FontRenderer** IteratorC4::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FontRenderer ** __fastcall IteratorC4::Get(IteratorC4 *this){
		return this->collection->pointerArray + this->i;
		}
		
	*/
	return null;
}

void IteratorC4::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC4 * __thiscall IteratorC4::Dispose(IteratorC4 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_4_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool IteratorC4::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorC4::IsEnd(IteratorC4 *this){
		return (bool)('\x01' - (this->index != this->collection->cnt2));
		}
		
	*/
	return false;
}

void IteratorC4::Set(IteratorC4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorC4::Set(IteratorC4 *this,IteratorC4 *param_1){
		this->i = param_1->i;
		this->index = param_1->index;
		this->collection = param_1->collection;
		return;
		}
		
	*/
	return;
}

int IteratorC4::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC4::GetIndex(IteratorC4 *this){
		return (int)this->i;
		}
		
	*/
	return 0;
}

int IteratorC4::GetCollectionCnt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorC4::GetCollectionCnt(IteratorC4 *this){
		return (int)this->collection->cnt2;
		}
		
	*/
	return 0;
}

void IteratorC4::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorC4 * __thiscall IteratorC4::Construct(IteratorC4 *this,RendererSubStruct *param_1){
		this->i = 0;
		this->index = 0;
		(this->parent).parent.vtable = (IteratorCBase_VTable *)&IteratorC_VT_4;
		this->collection = param_1;
		return this;
		}
		
	*/
	return;
}

