#include "headers/Known/LevelStructure/Trash/SomeSection/UnkRMRelated.h"

UnkRMRelated::~UnkRMRelated() {
	delete indexes;
	delete elements;
}

UnkRMRelated::UnkRMRelated(int elementCount) {
	short sNum;
	short* psVar1;
	UnkRMRelated** ppUVar2;
	int i;
	short sVar3;
	int numSign;
	bool even;
	short sNumQuarter;
	sNumQuarter = (elementCount >> 2);
	sVar3 = sNumQuarter + 10;
	numSign = elementCount & 0x80000001;
	even = numSign == 0;
	this->cnt = elementCount;
	this->num12 = sVar3;
	this->occupiedCnt = 0;
	this->lastIndexId = 0;
	if (numSign < 0) {
		even = (numSign - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!even) {
		this->cnt = elementCount + 1;
	}
	numSign = sVar3 & 0x80000001;
	even = numSign == 0;
	if (numSign < 0) {
		even = (numSign - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!even) {
		this->num12 = sNumQuarter + 0xb;
	}
	this->indexes = new short[this->cnt];
	this->elements = new UnkRMRelated * [this->cnt];
	i = 0;
	if (0 < this->cnt) {
		do {
			this->indexes[i] = i + 1;
			i = i + 1;
		} while (i < this->cnt);
	}
	this->indexes[this->cnt + -1] = -2;
	this->field7_0x14 = 1;
}


void UnkRMRelated::AddCollection(UnkRMRelated** collection) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkRMRelated::AddCollection(UnkRMRelated *this,UnkRMRelated **collection){
		int iVar1;
		iVar1 = 0;
		if (0 < this->cnt) {
		do {
		if (this->indexes[iVar1] == -1) {
		this->elements[iVar1] = collection[iVar1];
		}
		iVar1 = iVar1 + 1;
		}
		 while (iVar1 < this->cnt);
		}
		return;
		}
		
	*/
	return;
}

void UnkRMRelated::Expand() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkRMRelated::Expand(UnkRMRelated *this){
		UnkRMRelated **collection;
		UnkRMRelated **ppUVar1;
		undefined4 *puVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		undefined4 *puVar6;
		bool bVar7;
		uVar4 = (int)this->cnt & 0x80000001;
		bVar7 = uVar4 == 0;
		if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		this->cnt = this->cnt + 1;
		}
		uVar4 = (int)this->num12 & 0x80000001;
		bVar7 = uVar4 == 0;
		if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		this->num12 = this->num12 + 1;
		}
		ppUVar1 = (UnkRMRelated **)VirtualPool::AllocateMemory(((int)this->num12 + (int)this->cnt) * 4);
		puVar2 = (undefined4 *)VirtualPool::AllocateMemory(((int)this->num12 + (int)this->cnt) * 2);
		if (this->cnt != 0) {
		collection = this->elements;
		this->elements = ppUVar1;
		AddCollection(this,collection);
		uVar5 = (int)this->cnt << 1;
		puVar6 = puVar2;
		for (uVar4 = uVar5 >> 2;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*puVar6 = 0xffffffff;
		puVar6 = puVar6 + 1;
		}
		for (uVar5 = uVar5 & 3;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*(undefined *)puVar6 = 0xff;
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		VirtualPool::FreeMemory(collection);
		VirtualPool::FreeMemory(this->indexes);
		}
		iVar3 = (int)this->cnt;
		if (iVar3 < this->num12 + iVar3) {
		do {
		*(short *)((int)puVar2 + iVar3 * 2) = (short)iVar3 + 1;
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < (int)this->num12 + (int)this->cnt);
		}
		*(undefined2 *)((int)puVar2 + iVar3 * 2 + -2) = 0xfffe;
		this->elements = ppUVar1;
		this->indexes = (short *)puVar2;
		this->lastIndexId = this->cnt;
		this->cnt = this->num12 + this->cnt;
		return;
		}
		
	*/
	return;
}

void UnkRMRelated::TestSpace() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkRMRelated::TestSpace(UnkRMRelated *this){
		short sVar1;
		if (this->occupiedCnt < this->cnt) {
		sVar1 = this->lastIndexId;
		this->lastIndexId = this->indexes[sVar1];
		this->indexes[sVar1] = -1;
		this->occupiedCnt = this->occupiedCnt + 1;
		return;
		}
		Expand(this);
		TestSpace(this);
		return;
		}
		
	*/
	return;
}

void UnkRMRelated::AddReader(FileReaderHelper** reader) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkRMRelated::AddReader(UnkRMRelated *this,UnkRMRelated **section){
		uint in_EAX;
		uint i;
		short index;
		i = in_EAX & 0xffff0000 | (uint)(ushort)this->occupiedCnt;
		if (this->occupiedCnt < this->cnt) {
		index = this->lastIndexId;
		this->lastIndexId = this->indexes[index];
		this->indexes[index] = -1;
		this->occupiedCnt = this->occupiedCnt + 1;
		this->elements[index] = *section;
		return;
		}
		Expand(this);
		TestSpace(this);
		this->elements[i] = *section;
		return;
		}
		
	*/
	return;
}
