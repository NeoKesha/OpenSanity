#include "headers/Unknown/Families/Families1X/Family15/UnkFamily15A.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void UnkFamily15A::SetResetBit(uint index, bool set) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily15A::SetResetBit(UnkFamily15A *this,uint index,bool set){
		int *array;
		uint i;
		uint uVar1;
		i = (*(code *)((this->parent).vtable)->GetSomething)();
		if (index < i) {
		array = (int *)(*(code *)((this->parent).vtable)->GetArray1)();
		uVar1 = 1 << ((byte)index & 0x1f);
		i = index >> 5;
		if (set != false) {
		array[i] = array[i] | uVar1;
		return;
		}
		array[i] = array[i] & ~uVar1;
		}
		return;
		}
		
	*/
	return;
}

bool UnkFamily15A::FUN_001b1fc0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily15A::FUN_001b1fc0(UnkFamily15A *this,uint param_1){
		uint uVar1;
		int iVar2;
		uVar1 = (*(code *)((this->parent).vtable)->GetSomething)();
		if (uVar1 <= param_1) {
		return false;
		}
		iVar2 = (*(code *)((this->parent).vtable)->GetArray2)();
		return (1 << ((byte)param_1 & 0x1f) & *(uint *)(iVar2 + (param_1 >> 5) * 4)) != 0;
		}
		
	*/
	return false;
}

void UnkFamily15A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily15A * __fastcall UnkFamily15A::Construct(UnkFamily15A *this){
		UnkFamily15Abstract::Construct(&this->parent);
		(this->parent).vtable = (UnkFamily15Abstract_VT *)&UnkFamily15_VT_A;
		UnkFamily15Abstract::Init(&this->parent);
		return this;
		}
		
	*/
	return;
}

void UnkFamily15A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily15A * __thiscall UnkFamily15A::Dispose(UnkFamily15A *this,byte param_1){
		UnkFamily15Abstract::Unroll(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int* UnkFamily15A::UnkMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __fastcall UnkFamily15A::UnkMethod1(UnkFamily15A *this){
		return this->array;
		}
		
	*/
	return null;
}

int* UnkFamily15A::UnkMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __fastcall UnkFamily15A::UnkMethod2(UnkFamily15A *this){
		return this->array;
		}
		
	*/
	return null;
}

int UnkFamily15A::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int UnkFamily15A::UnkMethod3(void){
		return 8;
		}
		
	*/
	return 0;
}

int UnkFamily15A::UnkMethod4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int UnkFamily15A::UnkMethod4(void){
		return 0x100;
		}
		
	*/
	return 0;
}

void UnkFamily15A::UnkMethod6(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily15A::UnkMethod6(UnkFamily15A *this,MemoryStream *stream){
		(*stream->vtable->Read)(stream,this->array,0x20,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily15A::UnkMethod7(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily15A::UnkMethod7(UnkFamily15A *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(this->array,0x20);
		return;
		}
		
	*/
	return;
}

int* UnkFamily15A::GetArray() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __fastcall UnkFamily15A::GetArray(UnkFamily15B *this){
		return this->array;
		}
		
	*/
	return null;
}

int* UnkFamily15A::GetArray_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __fastcall UnkFamily15A::GetArray(UnkFamily15B *this){
		return this->array;
		}
		
	*/
	return null;
}

int UnkFamily15A::GetArrayLength() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int UnkFamily15A::GetArrayLength(void){
		return 8;
		}
		
	*/
	return 0;
}

int UnkFamily15A::GetSomething() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int UnkFamily15A::GetSomething(void){
		return 0x100;
		}
		
	*/
	return 0;
}

