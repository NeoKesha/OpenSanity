#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
PerceptAbstract* PerceptAbstract::BuildPercept(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __cdecl PerceptAbstract::BuildPercept(MemoryStream *stream){
		ObjectBuilderStorage *this;
		PerceptAbstract *pPVar1;
		uint perceptId;
		if (ObjectBuilderStorage == (ObjectBuilderStorage *)0x0) {
		ObjectBuilderStorage = (ObjectBuilderStorage *)VirtualPool::AllocateMemory(0x10);
		if (ObjectBuilderStorage == (ObjectBuilderStorage *)0x0) {
		ObjectBuilderStorage = (ObjectBuilderStorage *)0x0;
		}
		else {
		ObjectBuilderStorage->lastBuilder = (ObjectBuilder *)0x0;
		ObjectBuilderStorage->firstBuilder = (ObjectBuilder *)0x0;
		ObjectBuilderStorage->amount = 0;
		ObjectBuilderStorage->capacity = 0;
		}
		}
		this = ObjectBuilderStorage;
		(*stream->vtable->ReadUInt)(stream,&perceptId);
		pPVar1 = (PerceptAbstract *)ObjectBuilderStorage::BuildObject(this,perceptId & 0xffff);
		pPVar1->PerceptID = perceptId;
		(*stream->vtable->ReadFloat)(stream,&pPVar1->Interval);
		(*stream->vtable->ReadFloat)(stream,&pPVar1->Threshold);
		(*stream->vtable->ReadFloat)(stream,&pPVar1->ThresholdInverse);
		return pPVar1;
		}
		
	*/
	return null;
}

bool PerceptAbstract::Process(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall PerceptAbstract::Process(PerceptAbstract *this,int **param_1){
		float *pfVar1;
		int **this_00;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		uint uVar6;
		uint local_c;
		uint uStack8;
		float local_4;
		this_00 = param_1;
		local_c = 0xffff;
		if (param_1[1] == (int *)0x0) {
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (this_00[1] == (int *)0x0) {
		bVar3 = (**(code **)(**this_00 + 0x78))(0x84b,&local_c);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_001816d6;
		bVar3 = (**(code **)(**this_00 + 0x28))(0x84b,local_c);
		}
		if (bVar3 != 0) {
		*(undefined2 *)&this->PerceptID = (undefined2)local_c;
		goto LAB_0018173e;
		}
		}
		LAB_001816d6:local_4 = 9.183409e-41;
		uVar6 = FUN_00119660(this_00,&local_4,0x84b);
		bVar3 = (byte)uVar6;
		*(undefined2 *)&this->PerceptID = local_4._0_2_;
		}
		else {
		local_c = (uint)*(ushort *)&this->PerceptID;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_0018173c:bVar3 = 0;
		}
		else if (this_00[1] == (int *)0x0) {
		bVar3 = (**(code **)(**this_00 + 0x78))(0x84b,&local_c);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_0018173c;
		bVar3 = (**(code **)(**this_00 + 0x28))(0x84b,local_c);
		}
		}
		LAB_0018173e:bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar2 == false) {
		LAB_0018177f:bVar4 = 0;
		}
		else if (this_00[1] == (int *)0x0) {
		bVar4 = (**(code **)(**this_00 + 0x68))(0x84c,&this->Interval);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_0018177f;
		local_4 = this->Interval;
		bVar4 = (**(code **)(**this_00 + 0x18))(0x84c,local_4);
		}
		pfVar1 = &this->Threshold;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar2 == false) {
		LAB_001817c0:bVar5 = 0;
		}
		else if (this_00[1] == (int *)0x0) {
		bVar5 = (**(code **)(**this_00 + 0x68))(0x84d,pfVar1);
		}
		else {
		if (this_00[1] != (int *)0x1) goto LAB_001817c0;
		local_4 = *pfVar1;
		bVar5 = (**(code **)(**this_00 + 0x18))(0x84d,local_4);
		}
		bVar5 = bVar3 & 1 & bVar4 & bVar5;
		if ((bVar5 != 0) && (this_00[1] == (int *)0x0)) {
		this->ThresholdInverse = FLOAT_0038639c / *pfVar1;
		}
		param_1 = (int **)((uint)param_1 & 0xffffff00 | *(byte *)((int)&this->PerceptID + 2) & 0xffffff01);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar2 != false) {
		if (this_00[1] == (int *)0x0) {
		bVar3 = (**(code **)(**this_00 + 0x7c))(0x84e,&param_1);
		goto LAB_00181825;
		}
		if (this_00[1] == (int *)0x1) {
		bVar3 = (**(code **)(**this_00 + 0x2c))(0x84e,param_1);
		goto LAB_00181825;
		}
		}
		bVar3 = 0;
		LAB_00181825:uStack8 = this->PerceptID;
		this->PerceptID = uStack8 ^ ((uint)((char)param_1 != '\0') << 0x10 ^ uStack8) & 0x10000;
		uStack8 = uStack8 >> 0x11;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*this_00);
		if (bVar2 != false) {
		if (this_00[1] == (int *)0x0) {
		(**(code **)(**this_00 + 0x74))(0x87d,&uStack8);
		}
		else if (this_00[1] == (int *)0x1) {
		(**(code **)(**this_00 + 0x24))(0x87d,uStack8);
		}
		}
		this->PerceptID = this->PerceptID & 0x1ffffU | uStack8 << 0x11;
		return (bool)(bVar5 & bVar3);
		}
		
	*/
	return false;
}

int PerceptAbstract::Get0x1807() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int PerceptAbstract::Get0x1807(void){
		return 0x1807;
		}
		
	*/
	return 0;
}

void PerceptAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __thiscall PerceptAbstract::Dispose(PerceptAbstract *this,byte param_1){
		this->vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptAbstract::Construct(PerceptAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptAbstract::Construct(PerceptAbstract *param_1){
		param_1->vtable = &Percept_VT_Abstract;
		param_1->PerceptID = 0;
		return;
		}
		
	*/
	return;
}

void PerceptAbstract::Construct_5(ushort param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PerceptAbstract::Construct(PerceptAbstract *this,undefined2 param_1){
		this->PerceptID = 0;
		this->vtable = &Percept_VT_Abstract;
		*(undefined2 *)&this->PerceptID = param_1;
		return;
		}
		
	*/
	return;
}

void PerceptAbstract::Unroll(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptAbstract::Unroll(undefined4 *param_1){
		*param_1 = &Percept_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void PerceptAbstract::Construct_7(ushort param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PerceptAbstract::Construct(PerceptAbstract *this,undefined2 param_1){
		this->PerceptID = 0;
		*(undefined2 *)&this->PerceptID = param_1;
		this->vtable = &PTR_Dispose_00389d24;
		return;
		}
		
	*/
	return;
}

void PerceptAbstract::Unroll_8(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptAbstract::Unroll(undefined4 *param_1){
		*param_1 = &Percept_VT_Abstract;
		return;
		}
		
	*/
	return;
}

