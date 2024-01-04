#pragma once
#include "headers/OpenSanityGlobal.h"
#include "headers/Templates/TwinArray.h"

template<class T> class TwinArrayIterator {
public:
	short i;
	short index;
	TwinArray<T>* collection;

	TwinArrayIterator(TwinArray<T>* _collection) {
		this->i = 0;
		this->index = 0;
		this->collection = _collection;
	}

	virtual void Reset() {
		int cnt;
		this->i = 0;
		this->index = 0;
		cnt = this->collection->capacity;
		if (cnt != 1 && -1 < cnt + -1) {
			do {
				if (this->collection->indexArray[this->i] == -1) {
					return;
				}
				this->i = this->i + 1;
			} while (this->i < this->collection->count + -1);
		}
		return;
	}

	virtual void Iterate() {
		short cnt;
		short selected;
		cnt = this->collection->count;
		selected = this->index;
		if (selected < cnt + -1) {
			if (selected < cnt) {
				do {
					this->i = this->i + 1;
					if (this->collection->indexArray[this->i] == -1) {
						this->index = selected + 1;
						return;
					}
				} while (this->index < this->collection->count);
				return;
			}
		}
		else {
			this->index = cnt;
		}
		return;
	}
	virtual T** Get() {
		return &(this->collection->pointerArray[this->i]);
	}
	virtual bool IsEnd() {
		return this->index == this->collection->count;
	}
	virtual void Set(TwinArrayIterator<T>* other) {
		this->i = other->i;
		this->index = other->index;
		this->collection = other->collection;
	}
	virtual int GetIndex() {
		return this->i;
	}
	virtual int GetCollectionCnt() {
		return this->collection->count;
	}

};