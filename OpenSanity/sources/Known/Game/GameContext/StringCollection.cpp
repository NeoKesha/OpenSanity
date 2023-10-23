#include "headers/Known/Game/GameContext/StringCollection.h"

#include "headers/Known/TwinString.h"
int StringCollection::AddString(TwinString* str) {
	if (this->strCnt == this->capacity) {
		int cnt = this->cnt2 + this->capacity;
		TwinString* strArray = new TwinString [cnt];
		for (int i = 0; i < cnt; ++i) {
			strArray[i] = TwinString();
		}
		for (int i = 0; i < this->strCnt; ++i) {
			strArray[i].Copy(this->array[i].value);
			delete this->array[i].value;
		}
		delete this->array;

		this->capacity = cnt;
		this->array = strArray;
	}

	this->array[this->strCnt].Copy(str->value);
	this->strCnt = strCnt + 1;
	return strCnt - 1;
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
	for (int i = 0; i < cnt; ++i) {
		this->array[i] = TwinString();
	}
}

