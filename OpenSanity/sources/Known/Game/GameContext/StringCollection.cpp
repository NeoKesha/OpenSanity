#include "headers/Known/Game/GameContext/StringCollection.h"

#include "headers/Known/TwinString.h"
int StringCollection::AddString(TwinString* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall StringCollection::AddString(StringCollection *this,TwinString *str){
		uint *puVar1;
		uint cnt;
		uint i;
		TwinString *this_00;
		TwinString *local_8;
		TwinString *paiVar1;
		int strCnt;
		if (this->strCnt == this->capacity) {
		cnt = this->cnt2 + this->capacity;
		puVar1 = (uint *)VirtualPool::AllocateMemory(cnt * 0xc + 4);
		i = 0;
		if (puVar1 == (uint *)0x0) {
		local_8 = (TwinString *)0x0;
		}
		else {
		local_8 = (TwinString *)(puVar1 + 1);
		*puVar1 = cnt;
		ForEach(local_8,0xc,cnt,TwinString::Construct);
		}
		if (this->strCnt != 0) {
		strCnt = 0;
		do {
		TwinString::Copy((TwinString *)((int)&local_8->value + strCnt),*(char **)((int)&this->array->value + strCnt));
		i = i + 1;
		strCnt = strCnt + 0xc;
		}
		 while (i < (uint)this->strCnt);
		}
		paiVar1 = this->array;
		if (paiVar1 != (TwinString *)0x0) {
		i = paiVar1[-1].strSize;
		this_00 = paiVar1 + i;
		if (-1 < (int)(i - 1)) {
		do {
		this_00 = this_00 + -1;
		TwinString::Dispose(this_00);
		i = i - 1;
		}
		 while (i != 0);
		}
		VirtualPool::FreeMemory(&paiVar1[-1].strSize);
		}
		this->capacity = cnt;
		this->array = local_8;
		}
		strCnt = this->strCnt;
		this->strCnt = strCnt + 1;
		TwinString::Copy(this->array + strCnt,(char *)str);
		strCnt = this->strCnt;
		TwinString::Dispose((TwinString *)&str);
		return strCnt + -1;
		}
		
	*/
	return 0;
}

StringCollection::StringCollection() {
	this->strCnt = 0;
	this->capacity = 0;
	this->cnt2 = 0;
	this->array = null;
}


StringCollection::StringCollection(uint cnt) {
	this->strCnt = 0;
	this->capacity = cnt;
	this->cnt2 = cnt;
	this->array = new TwinString[cnt];
}

