#include "headers/Known/Iterators/TypeA/Iterator6/IteratorA6.h"

#include "headers/Known/Game/GameContext/StringCollection.h"
int IteratorA6::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorA6::Get(IteratorA6 *this){
		return (int)(&this->stringCollection->array->value + this->strIndex);
		}
		
	*/
	return 0;
}

void IteratorA6::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA6::Rewind(IteratorA6 *this){
		this->strIndex = 0;
		return;
		}
		
	*/
	return;
}

uint IteratorA6::IsEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorA6::IsEnd(IteratorA6 *this){
		if ((-1 < this->strIndex) && ((uint)this->strIndex < (uint)this->stringCollection->strCnt)) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void IteratorA6::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA6::Iterate(IteratorA6 *this){
		this->strIndex = this->strIndex + 1;
		return;
		}
		
	*/
	return;
}

void IteratorA6::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA6::SeekEnd(IteratorA6 *this){
		this->strIndex = this->stringCollection->strCnt + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA6::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorA6::Previous(IteratorA6 *this){
		this->strIndex = this->strIndex + -1;
		return;
		}
		
	*/
	return;
}

void IteratorA6::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA6::Set(IteratorA6 *this,int param_1){
		this->stringCollection = *(StringCollection **)(param_1 + 4);
		this->strIndex = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

void IteratorA6::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorA6::Dispose(IteratorA6 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_6_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void IteratorA6::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorA6::Construct(IteratorA6 *this,StringCollection *param_1){
		(this->parent).parent.vtable = (IteratorTypeABase_VTable *)&IteratorA_VT_6;
		this->stringCollection = param_1;
		this->strIndex = 0;
		return;
		}
		
	*/
	return;
}

