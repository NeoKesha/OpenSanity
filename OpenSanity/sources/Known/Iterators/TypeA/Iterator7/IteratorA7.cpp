#include "headers/Known/Iterators/TypeA/Iterator7/IteratorA7.h"

#include "headers/Known/Game/GameContext/StringCollection.h"
int IteratorA7::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorA7::Get(IteratorA7 *this){
		return (int)&this->stringCollection->array->value + this->strIndex * 2;
		}
		
	*/
	return 0;
}

void IteratorA7::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA7::Rewind(IteratorA7 *this){
		this->strIndex = 0;
		return;
		}
		
	*/
	return;
}

uint IteratorA7::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorA7::IsEnd(IteratorA7 *this){
		if ((-1 < this->strIndex) && ((uint)this->strIndex < (uint)this->stringCollection->strCnt)) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorA7::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA7::Iterate(IteratorA7 *this){
		this->strIndex = this->strIndex + 1;
		return;
		}
		
	*/
	return;
}

void IteratorA7::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA7::SeekEnd(IteratorA7 *this){
		this->strIndex = this->stringCollection->strCnt + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA7::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA7::Previous(IteratorA7 *this){
		this->strIndex = this->strIndex + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA7::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA7::Set(IteratorA7 *this,int param_1){
		this->stringCollection = *(StringCollection **)(param_1 + 4);
		this->strIndex = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorA7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorA7::Dispose(IteratorA7 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_7_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorA7::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA7::Construct(IteratorA7 *this,StringCollection *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_7;
		this->stringCollection = param_1;
		this->strIndex = 0;
		return;
		}
		
	*/
	return;
}

