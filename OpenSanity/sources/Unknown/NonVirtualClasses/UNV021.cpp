#include "headers/Unknown/NonVirtualClasses/UNV021.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void UNV021::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UNV021::Read(UNV021 *this,MemoryStream *stream){
		UNV021 *element;
		UNV021 *next;
		next = this->next;
		if (next != (UNV021 *)0x0) {
		if (next->next != (UNV021 *)0x0) {
		Dispose(next->next,1);
		}
		AutoClass40::Dispose(&next->payload);
		VirtualPool::FreeMemory(next);
		}
		(*stream->vtable->Read)(stream,(int *)this,4,1);
		AutoClass40::FUN_0014b370(&this->payload,stream);
		if ((*(byte *)&this->field0_0x0 & 1) != 0) {
		element = (UNV021 *)VirtualPool::AllocateMemory(0x28);
		if (element != (UNV021 *)0x0) {
		element->next = (UNV021 *)0x0;
		AutoClass40::Construct(&element->payload);
		Read(element,stream);
		this->next = element;
		return;
		}
		}
		this->next = (UNV021 *)0x0;
		return;
		}
		
	*/
	return;
}

void UNV021::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV021 * __thiscall UNV021::Dispose(UNV021 *this,byte param_1){
		if (this->next != (UNV021 *)0x0) {
		Dispose(this->next,1);
		}
		AutoClass40::Dispose(&this->payload);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UNV021::Construct(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV021 * __thiscall UNV021::Construct(UNV021 *this,int *param_1){
		this->next = (UNV021 *)0x0;
		AutoClass40::Construct(&this->payload);
		Read(this,(MemoryStream *)param_1);
		return this;
		}
		
	*/
	return;
}

