#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20BaseSub.h"

#include "headers/Unknown/struct1.h"

UnkFamily20BaseSub::UnkFamily20BaseSub()
{
	this->totalSpace = 0;
	this->field2_0x6 = 10;
	this->occupiedElements = 0;
	this->lastIndex = -1;
	this->indexes = null;
	this->unkArray = null;
}

UnkFamily20BaseSub::~UnkFamily20BaseSub()
{
	delete this->indexes;
	delete this->unkArray;
}

void UnkFamily20BaseSub::FUN_000c3ac0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily20BaseSub::FUN_000c3ac0(UnkFamily20BaseSub *this){
		short sVar1;
		int i;
		sVar1 = this->totalSpace;
		if ((0 < sVar1) && (this->occupiedElements != 0)) {
		i = 0;
		if (sVar1 != 1 && -1 < sVar1 + -1) {
		do {
		this->indexes[i] = (short)i + 1;
		i = i + 1;
		}
		 while (i < this->totalSpace + -1);
		}
		this->indexes[i] = -2;
		this->occupiedElements = 0;
		this->lastIndex = 0;
		}
		return;
		}
		
	*/
	return;
}

