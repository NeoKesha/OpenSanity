#pragma once

#include "headers/OpenSanityGlobal.h"

template<class T> class TwinArray {
public:
	short capacity;
	short expansion;
	short count;
	short lastIndex;
	short* indexArray;
	T** pointerArray;

	TwinArray() {
		capacity = 0;
		expansion = 10;
		count = 0;
		lastIndex = -1;
		indexArray = null;
		pointerArray = null;
	}
	~TwinArray() {
		delete indexArray;
		delete pointerArray;
	}

	void RelocateArrays() {
		T** oldPointerArray;
		T** newPointerArray;
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
		newPointerArray = new T * [this->expansion + this->capacity];
		newIndexArray = new short[this->expansion + this->capacity];
		if (this->capacity != 0) {
			oldPointerArray = this->pointerArray;
			this->pointerArray = newPointerArray;
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
			delete this->indexArray;
		}
		for (int i = this->capacity; i < this->capacity + this->expansion; ++i) {
			newIndexArray[i] = i + 1;
		}
		newIndexArray[this->capacity + this->expansion - 1] = 0xFFFE;
		this->pointerArray = newPointerArray;
		this->indexArray = newIndexArray;
		this->lastIndex = this->capacity;
		this->capacity = this->expansion + this->capacity;
	}
	void Populate(T** arr)
	{
		for (int i = 0; i < this->count; ++i) {
			if (this->indexArray[i] == -1) {
				this->pointerArray[i] = arr[i];
			}
		}
	}
	virtual void Add(T** elements) {
		if (this->count < this->capacity) {
			int prevIndex = this->lastIndex;
			this->lastIndex = this->indexArray[this->lastIndex];
			this->indexArray[prevIndex] = -1;
			this->count = this->count + 1;
			this->pointerArray[prevIndex] = *elements;
		}
		else {
			RelocateArrays();
			int prevIndex = this->lastIndex;
			this->lastIndex = this->indexArray[this->lastIndex];
			this->indexArray[prevIndex] = -1;
			this->count = this->count + 1;
			this->pointerArray[prevIndex] = *elements;
		}
	}

};