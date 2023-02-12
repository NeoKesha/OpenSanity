#include "headers/Unknown/ParameterTable.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
uint ParameterTable::GetInt(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ParameterTable::GetInt(ParameterTable *this,int index){
		return (this->ints).ints[index];
		}
		
	*/
	return 0;
}

void ParameterTable::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ParameterTable * __thiscall ParameterTable::Construct(ParameterTable *this,int param_1){
		float *pfVar1;
		int *piVar2;
		uint uVar3;
		this->vtable = &ParameterTable_VT;
		this->unkInt = *(int *)(param_1 + 8);
		FUN_001ad7d0(&this->fractions,(void *)(*(uint *)(param_1 + 4) & 0xff));
		pfVar1 = (float *)(uint)*(byte *)(param_1 + 5);
		(this->floats).floatsCnt = (uint)pfVar1;
		if (pfVar1 != (float *)0x0) {
		pfVar1 = (float *)VirtualPool::AllocateMemory((int)pfVar1 * 4);
		}
		(this->floats).floats = pfVar1;
		piVar2 = (int *)(uint)*(byte *)(param_1 + 6);
		(this->ints).intsCnt = (uint)piVar2;
		if (piVar2 != (int *)0x0) {
		piVar2 = (int *)VirtualPool::AllocateMemory((int)piVar2 << 2);
		}
		(this->ints).ints = piVar2;
		this->instancePropsHeader = 0;
		*(undefined *)&this->instancePropsHeader = *(undefined *)(param_1 + 4);
		*(undefined *)((int)&this->instancePropsHeader + 1) = *(undefined *)(param_1 + 5);
		*(undefined *)((int)&this->instancePropsHeader + 2) = *(undefined *)(param_1 + 6);
		uVar3 = 0;
		if ((this->instancePropsHeader & 0xffU) != 0) {
		do {
		(this->fractions).fraction[uVar3] = *(uint *)(*(int *)(param_1 + 0xc) + uVar3 * 4);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < (this->instancePropsHeader & 0xffU));
		}
		uVar3 = 0;
		if (*(char *)((int)&this->instancePropsHeader + 1) != '\0') {
		do {
		(this->floats).floats[uVar3] = *(float *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < *(byte *)((int)&this->instancePropsHeader + 1));
		}
		uVar3 = 0;
		if (*(char *)((int)&this->instancePropsHeader + 2) != '\0') {
		do {
		(this->ints).ints[uVar3] = *(int *)(*(int *)(param_1 + 0x1c) + uVar3 * 4);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < *(byte *)((int)&this->instancePropsHeader + 2));
		}
		return this;
		}
		
	*/
	return;
}

void ParameterTable::Construct_2(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ParameterTable * __thiscall ParameterTable::Construct(ParameterTable *this,MemoryStream *stream){
		this->vtable = &ParameterTable_VT;
		(this->fractions).fractionCnt = 0;
		(this->fractions).fraction = (uint *)0x0;
		(this->floats).floatsCnt = 0;
		(this->floats).floats = (float *)0x0;
		(this->ints).intsCnt = 0;
		(this->ints).ints = (int *)0x0;
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->instancePropsHeader);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->unkInt);
		CollectionFractions::Read(&this->fractions,stream);
		CollectionFloats::Read(&this->floats,stream);
		CollectionInts::Read(&this->ints,stream);
		return this;
		}
		
	*/
	return;
}

void ParameterTable::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ParameterTable * __thiscall ParameterTable::Dispose(ParameterTable *this,byte param_1){
		this->vtable = &ParameterTable_VT;
		VirtualPool::FreeMemory((this->ints).ints);
		VirtualPool::FreeMemory((this->floats).floats);
		VirtualPool::FreeMemory((this->fractions).fraction);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

