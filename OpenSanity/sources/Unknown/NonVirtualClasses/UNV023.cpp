#include "headers/Unknown/NonVirtualClasses/UNV023.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Unknown/NonVirtualClasses/UNV021.h"
void UNV023::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UNV023::Read(UNV023 *this,MemoryStream *stream){
		UNV021 *pUVar1;
		pUVar1 = this->top;
		if (pUVar1 != (UNV021 *)0x0) {
		if (pUVar1->next != (UNV021 *)0x0) {
		UNV021::Dispose(pUVar1->next,1);
		}
		AutoClass40::Dispose(&pUVar1->payload);
		VirtualPool::FreeMemory(pUVar1);
		}
		(*stream->vtable->Read)(stream,(int *)this,4,1);
		TwinString::ReadFromFile(&this->str,stream);
		::Read(&this->field18_0x20,stream);
		if ((*(byte *)this & 1) != 0) {
		pUVar1 = (UNV021 *)VirtualPool::AllocateMemory(0x28);
		if (pUVar1 != (UNV021 *)0x0) {
		pUVar1->next = (UNV021 *)0x0;
		AutoClass40::Construct(&pUVar1->payload);
		UNV021::Read(pUVar1,stream);
		this->top = pUVar1;
		return;
		}
		}
		this->top = (UNV021 *)0x0;
		return;
		}
		
	*/
	return;
}

