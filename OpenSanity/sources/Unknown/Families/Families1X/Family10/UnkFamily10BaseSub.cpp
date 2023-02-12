#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10BaseSub.h"

#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8Abstract.h"
uint UnkFamily10BaseSub::Add(UnkFamily8Abstract* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily10BaseSub::Add(UnkFamily10BaseSub *this,UnkFamily8Abstract *element){
		UnkFamily8Abstract **pvVar1;
		int iVar1;
		uint cnt;
		if (this->cnt == this->field2_0x8) {
		iVar1 = this->field3_0xc + this->field2_0x8;
		pvVar1 = (UnkFamily8Abstract **)VirtualPool::AllocateMemory(iVar1 * 4);
		cnt = 0;
		if (this->cnt != 0) {
		do {
		pvVar1[cnt] = this->ptrArray[cnt];
		cnt = cnt + 1;
		}
		 while (cnt < this->cnt);
		}
		VirtualPool::FreeMemory(this->ptrArray);
		this->field2_0x8 = iVar1;
		this->ptrArray = pvVar1;
		}
		this->ptrArray[this->cnt] = element;
		cnt = this->cnt;
		this->cnt = cnt + 1;
		return cnt;
		}
		
	*/
	return 0;
}

