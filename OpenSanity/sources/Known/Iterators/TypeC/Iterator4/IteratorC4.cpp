#include "headers/Known/Iterators/TypeC/Iterator4/IteratorC4.h"

#include "headers/Known/Graphics/Renderer/RendererSubStruct.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"

IteratorC4::IteratorC4(RendererSubStruct* _collection) {
	this->i = 0;
	this->index = 0;
	this->collection = _collection;
}

void IteratorC4::Reset() {
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

void IteratorC4::Iterate() {
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

FontRenderer** IteratorC4::Get() {
	return &(this->collection->pointerArray[this->i]);
}

bool IteratorC4::IsEnd() {
	return this->index == this->collection->count;
}

void IteratorC4::Set(IteratorC4* other) {
	this->i = other->i;
	this->index = other->index;
	this->collection = other->collection;
}

int IteratorC4::GetIndex() {
	return this->i;
}

int IteratorC4::GetCollectionCnt() {
	return this->collection->count;
}

