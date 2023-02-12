#include "headers/Unknown/CollectionUnk2/CollectionUnk2.h"

void CollectionUnk2::Construct(int cnt, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CollectionUnk2 * __thiscall CollectionUnk2::Construct(CollectionUnk2 *this,int cnt,int param_2){
		int *piVar1;
		this->field4_0x4 = param_2;
		*(undefined4 *)this = 0;
		this->cnt = (byte)cnt;
		piVar1 = (int *)VirtualPool::AllocateMemory(cnt * 4);
		this->array = piVar1;
		return this;
		}
		
	*/
	return;
}

void CollectionUnk2::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall CollectionUnk2::Dispose(CollectionUnk2 *this){
		uint i;
		i = 0;
		if ((*(uint *)this & 0xff) != 0) {
		do {
		if ((int *)this->array[i] != (int *)0x0) {
		(**(code **)(*(int *)this->array[i] + 0x10))(1);
		}
		i = i + 1;
		}
		 while (i < (*(uint *)this & 0xff));
		}
		VirtualPool::FreeMemory(this->array);
		return;
		}
		
	*/
	return;
}

