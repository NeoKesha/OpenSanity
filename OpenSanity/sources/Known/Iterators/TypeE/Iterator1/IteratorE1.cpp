#include "headers/Known/Iterators/TypeE/Iterator1/IteratorE1.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceDataList.h"
void IteratorE1::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE1::Iterate(IteratorE1 *this){
		char cVar1;
		int iVar2;
		cVar1 = (*((this->parent).parent.vtable)->IsEnd)((IteratorEAbstract *)this);
		while ((cVar1 == '\0' &&(iVar2 = this->index + 1, this->index = iVar2,(this->collection->cnt & 1 << ((byte)iVar2 & 0x1f)) == 0))) {
		cVar1 = (*((this->parent).parent.vtable)->IsEnd)((IteratorEAbstract *)this);
		}
		return;
		}
		
	*/
	return;
}

InstanceNodeAbstract** IteratorE1::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract ** __fastcall IteratorE1::Get(IteratorE1 *this){
		return this->collection->array + this->index;
		}
		
	*/
	return null;
}

bool IteratorE1::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorE1::IsEnd(IteratorE1 *this){
		return (bool)('\x01' - ((~((1 << ((byte)this->index & 0x1f)) - 1U) & this->collection->cnt) != 0));
		}
		
	*/
	return false;
}

void IteratorE1::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorE1::Rewind(IteratorE1 *this){
		this->index = 0;
		if ((*(byte *)&this->collection->cnt & 1) == 0) {
		(*((this->parent).parent.vtable)->Iterate)((IteratorEAbstract *)this);
		return;
		}
		return;
		}
		
	*/
	return;
}

void IteratorE1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorE1 * __thiscall IteratorE1::Dispose(IteratorE1 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorEBase_VTable *)&IteratorE_VT_1_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void IteratorE1::Construct(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorE1 * __thiscall IteratorE1::Construct(IteratorE1 *this,byte *param_1){
		(this->parent).parent.vtable = (IteratorEBase_VTable *)&IteratorE_VT_1;
		this->collection = (InstanceDataList *)param_1;
		this->index = 0;
		if ((*param_1 & 1) == 0) {
		(*(code *)PTR_Iterate_0038e370)();
		}
		return this;
		}
		
	*/
	return;
}

