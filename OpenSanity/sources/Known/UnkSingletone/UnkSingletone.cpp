#include "headers/Known/UnkSingletone/UnkSingletone.h"

#include "headers/Known/UnkSingletone/UnkSingletoneElement.h"

UnkSingletone::UnkSingletone()
{

}
UnkSingletone::UnkSingletone(int cnt, int param_2)
{
	/*
UnkSingletone * __thiscall UnkSingletone::Construct(UnkSingletone *this,int cnt,int param_2){
	int *piVar1;
	UnkSingletoneElement *element;
	undefined *puVar2;
	UnkSingletoneElement *piVar3;
	this->cnt = cnt;
	this->field1_0x4 = 0;
	this->poolSize = param_2;
	this->field3_0xc = 0;
	piVar1 = (int *)VirtualPool::AllocateMemory(cnt * 0xc + 4);
	if (piVar1 == (int *)0x0) {
	piVar3 = (UnkSingletoneElement *)0x0;
	}
	else {
	piVar3 = (UnkSingletoneElement *)(piVar1 + 1);
	*piVar1 = cnt;
	element = piVar3;
	if (-1 < cnt + -1) {
	do {
	element->field0_0x0 = 0;
	element->field_0x4 = 0;
	element->field5_0x8 = 0;
	cnt = cnt + -1;
	element = element + 1;
	}
	 while (cnt != 0);
	}
	}
	this->collection = piVar3;
	puVar2 = (undefined *)VirtualPool::AllocateMemory(this->poolSize);
	this->pool = puVar2;
	return this;
	}

*/
}

UnkSingletone* UnkSingletone::Get() {
	static UnkSingletone* instance = null;
	if (instance == null) {
		instance = new UnkSingletone(0x2000, 0);
	}
	return instance;
}

