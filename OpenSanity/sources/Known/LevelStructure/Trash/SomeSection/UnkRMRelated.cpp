#include "headers/Known/LevelStructure/Trash/SomeSection/UnkRMRelated.h"

UnkRMRelated::~UnkRMRelated() {
	delete indexes;
	delete readers;
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
	this->capacity = elementCount;
	this->expansion = sVar3;
	this->count = 0;
	this->lastIndexId = 0;
	if (numSign < 0) {
		even = (numSign - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!even) {
		this->capacity = elementCount + 1;
	}
	numSign = sVar3 & 0x80000001;
	even = numSign == 0;
	if (numSign < 0) {
		even = (numSign - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!even) {
		this->expansion = sNumQuarter + 0xb;
	}
	this->indexes = new short[this->capacity];
	this->readers = new FileReaderHelper * [this->capacity];
	i = 0;
	if (0 < this->capacity) {
		do {
			this->indexes[i] = i + 1;
			i = i + 1;
		} while (i < this->capacity);
	}
	this->indexes[this->capacity + -1] = -2;
	this->field7_0x14 = 1;
}


void UnkRMRelated::Populate(FileReaderHelper** collection) {
	for (int i = 0; i < this->capacity; ++i) {
		if (this->indexes[i] == -1) {
			this->readers[i] = collection[i];
		}
	}
	return;
}

void UnkRMRelated::Expand() {
	FileReaderHelper** oldPointerArray;
	FileReaderHelper** newPointerArray;
	short* newIndexArray;
	int iVar3;
	uint uVar4;
	uint uVar5;
	bool bVar7;
	uVar4 = (int)this->capacity & 0x80000001;
	bVar7 = uVar4 == 0;
	if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!bVar7) {
		this->capacity = this->capacity + 1;
	}
	uVar4 = (int)this->expansion & 0x80000001;
	bVar7 = uVar4 == 0;
	if ((int)uVar4 < 0) {
		bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
	}
	if (!bVar7) {
		this->expansion = this->expansion + 1;
	}
	newPointerArray = new FileReaderHelper * [this->expansion + this->capacity];
	newIndexArray = new short[this->expansion + this->capacity];
	if (this->capacity != 0) {
		oldPointerArray = this->readers;
		this->readers = newPointerArray;
		Populate(oldPointerArray);
		uVar5 = this->capacity * 2;
		short* indexPtr = newIndexArray;
		for (int i = uVar5 / 4; i != 0; --i) {
			*indexPtr = -1;
			++indexPtr;
		}
		for (int i = uVar5 & 3; i != 0; --i) {
			*indexPtr = 255;
			++indexPtr;
		}
		delete oldPointerArray;
		delete this->indexes;
	}
	for (int i = this->capacity; i < this->capacity + this->expansion; ++i) {
		newIndexArray[i] = i + 1;
	}
	newIndexArray[this->capacity + this->expansion - 1] = 0xFFFE;
	this->readers = newPointerArray;
	this->indexes = newIndexArray;
	this->lastIndexId = this->capacity;
	this->capacity = this->expansion + this->capacity;
	return;
}

void UnkRMRelated::AddReader(FileReaderHelper** reader) {
	if (this->count < this->capacity) {
		int prevIndex = this->lastIndexId;
		this->lastIndexId = this->indexes[this->lastIndexId];
		this->indexes[prevIndex] = -1;
		this->count = this->count + 1;
		this->readers[prevIndex] = *reader;
	}
	else {
		Expand();
		int prevIndex = this->lastIndexId;
		this->lastIndexId = this->indexes[this->lastIndexId];
		this->indexes[prevIndex] = -1;
		this->count = this->count + 1;
		this->readers[prevIndex] = *reader;
	}
	return;
}
