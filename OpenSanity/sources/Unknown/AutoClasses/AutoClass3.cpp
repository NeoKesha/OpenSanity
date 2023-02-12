#include "headers/Unknown/AutoClasses/AutoClass3.h"

void AutoClass3::Construct(uint arrayCnt, uint arrayLength) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass3 * __thiscall AutoClass3::Construct(AutoClass3 *this,uint arrayCnt,uint arrayLength){
		int **ppiVar1;
		int *piVar2;
		uint i;
		this->arraysCnt = arrayCnt;
		this->arrayLength = arrayLength;
		ppiVar1 = (int **)VirtualPool::AllocateMemory(arrayCnt * 4);
		i = 0;
		this->array1 = ppiVar1;
		if (arrayCnt != 0) {
		do {
		piVar2 = (int *)VirtualPool::AllocateMemory(this->arrayLength << 2);
		this->array1[i] = piVar2;
		i = i + 1;
		}
		 while (i < arrayCnt);
		}
		piVar2 = (int *)VirtualPool::AllocateMemory(this->arraysCnt << 2);
		this->array2 = piVar2;
		return this;
		}
		
	*/
	return;
}

