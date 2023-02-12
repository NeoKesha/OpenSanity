#include "headers/Unknown/AutoClasses/AutoClass58SubCollection.h"

#include "headers/Known/Graphics/FontRenderer/RendererText.h"
void* AutoClass58SubCollection::Add(RendererText* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall AutoClass58SubCollection::Add(AutoClass58SubCollection *this,RendererText *element){
		void *pvVar1;
		RendererText **newArray;
		uint i;
		int newCap;
		if (this->count == this->capacity) {
		newCap = this->step + this->capacity;
		newArray = (RendererText **)VirtualPool::AllocateMemory(newCap * 4);
		i = 0;
		if (this->count != 0) {
		do {
		newArray[i] = this->array[i];
		i = i + 1;
		}
		 while (i < (uint)this->count);
		}
		VirtualPool::FreeMemory(this->array);
		this->capacity = newCap;
		this->array = newArray;
		}
		this->array[this->count] = element;
		pvVar1 = (void *)this->count;
		this->count = (int)pvVar1 + 1;
		return pvVar1;
		}
		
	*/
	return null;
}

