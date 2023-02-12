#include "headers/Unknown/Families/Families1X/Family15/UnkFamily15Abstract.h"

void UnkFamily15Abstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily15Abstract::Construct(UnkFamily15Abstract *this){
		this->vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily15Abstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily15Abstract::Unroll(UnkFamily15Abstract *this){
		this->vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily15Abstract::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily15Abstract::Init(UnkFamily15Abstract *this){
		int cnt;
		int *array;
		cnt = (*(code *)this->vtable->GetArrayLength)();
		array = (int *)(*(code *)this->vtable->GetArray1)();
		if (cnt != 0) {
		for (;
		 cnt != 0;
		 cnt = cnt + -1) {
		*array = 0;
		array = array + 1;
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily15Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily15Abstract * __thiscall UnkFamily15Abstract::Dispose(UnkFamily15Abstract *this,byte param_1){
		this->vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

