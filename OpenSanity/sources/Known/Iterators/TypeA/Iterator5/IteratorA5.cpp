#include "headers/Known/Iterators/TypeA/Iterator5/IteratorA5.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Game/GameContext/StringCollection.h"
bool IteratorA5::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall IteratorA5::IsEnd(IteratorA5 *this){
		if ((-1 < this->strIndex) && ((uint)this->strIndex < (uint)this->stringCollection->strCnt)) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

TwinString* IteratorA5::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __fastcall IteratorA5::Get(IteratorA5 *this){
		return this->stringCollection->array + this->strIndex;
		}
		
	*/
	return null;
}

void IteratorA5::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA5::Previous(IteratorA5 *this){
		this->strIndex = this->strIndex + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA5::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA5::SeekEnd(IteratorA5 *this){
		this->strIndex = this->stringCollection->strCnt + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA5::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA5::Iterate(IteratorA5 *this){
		this->strIndex = this->strIndex + 1;
		return;
		}
		
	*/
	return;
}

void IteratorA5::Set(IteratorA5* collection) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA5::Set(IteratorA5 *this,IteratorA5 *collection){
		this->stringCollection = collection->stringCollection;
		this->strIndex = collection->strIndex;
		return;
		}
		
	*/
	return;
}

void IteratorA5::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	IteratorA5 * __thiscall IteratorA5::Construct(IteratorA5 *this,StringCollection *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_5;
		this->stringCollection = param_1;
		this->strIndex = 0;
		return this;
		}
		
	*/
	return;
}

