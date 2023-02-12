#include "headers/Known/GameData/Script/ScriptHeader.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Script/ScriptHeaderPair.h"
void ScriptHeader::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptHeader * __fastcall ScriptHeader::Construct(ScriptHeader *this){
		*(undefined2 *)&(this->parent).field1_0x4 = 0;
		(this->parent).index = -1;
		(this->parent).field1_0x4 = (this->parent).field1_0x4 & 0xfffcffff;
		(this->parent).name.value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).flags = 0xffff;
		*(undefined *)((int)&(this->parent).flags + 2) = 0x32;
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Header;
		this->amount = 0;
		return this;
		}
		
	*/
	return;
}

void ScriptHeader::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ScriptHeader::CleanUp(ScriptHeader *this){
		uint uVar1;
		ScriptHeaderPair *ptr;
		uint *ptr_00;
		uint uVar2;
		ScriptHeaderPair **local_4;
		uVar1 = this->amount;
		uVar2 = 0;
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Header;
		if ((uVar1 & 0xff) != 0) {
		local_4 = &this->pairArray;
		do {
		ptr = *local_4;
		if (ptr != (ScriptHeaderPair *)0x0) {
		ptr_00 = ptr->key;
		if (ptr_00 != (uint *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr_00);
		}
		VirtualPool::FreeMemory(ptr);
		}
		local_4 = local_4 + 1;
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->amount & 0xff));
		}
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Abstract;
		TwinString::Dispose(&(this->parent).name);
		return;
		}
		
	*/
	return;
}

void ScriptHeader::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptHeader::Read(ScriptHeader *this,MemoryStream *stream){
		ScriptHeaderPair *pair;
		uint *val;
		ScriptHeaderPair **ppSStack8;
		uint uStack4;
		MemoryStream *_stream;
		uint *amount;
		_stream = stream;
		amount = &(this->parent).flags;
		(*stream->vtable->ReadUInt)(stream,amount);
		*amount = *amount & 0xfeffffff;
		amount = &this->amount;
		(*stream->vtable->ReadUInt)(stream,amount);
		stream = (MemoryStream *)0x0;
		if ((*amount & 0xff) != 0) {
		ppSStack8 = &this->pairArray;
		do {
		pair = (ScriptHeaderPair *)VirtualPool::AllocateMemory(8);
		if (pair == (ScriptHeaderPair *)0x0) {
		pair = (ScriptHeaderPair *)0x0;
		}
		else {
		(*_stream->vtable->ReadUInt)(_stream,&uStack4);
		pair->value = uStack4;
		val = (uint *)VirtualPool::AllocateMemory(4);
		if (val == (uint *)0x0) {
		pair->key = (uint *)0x0;
		}
		else {
		(*_stream->vtable->ReadUInt)(_stream,val);
		pair->key = val;
		}
		}
		*ppSStack8 = pair;
		ppSStack8 = ppSStack8 + 1;
		stream = (MemoryStream *)((int)&stream->vtable + 1);
		}
		 while (stream < (MemoryStream *)(*amount & 0xff));
		}
		return;
		}
		
	*/
	return;
}

void ScriptHeader::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptHeader * __thiscall ScriptHeader::Dispose(ScriptHeader *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool ScriptHeader::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ScriptHeader::IsC(void){
		return false;
		}
		
	*/
	return false;
}

void ScriptHeader::SetFlag(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptHeader::SetFlag(ScriptHeader *this,uint param_1){
		uint *puVar1;
		ScriptHeaderPair *pSVar2;
		int iVar3;
		uint uVar4;
		ushort uVar5;
		ScriptHeaderPair **ppSVar6;
		uint uVar7;
		uVar4 = param_1;
		if ((~*(byte *)((int)&(this->parent).flags + 3) & 1) != 0) {
		uVar7 = 0;
		if ((this->amount & 0xff) != 0) {
		ppSVar6 = &this->pairArray;
		do {
		pSVar2 = *ppSVar6;
		if ((int)pSVar2->value < 1) {
		pSVar2->value = 0;
		}
		else {
		uVar5 = (short)pSVar2->value - 1;
		param_1 = (uint)uVar5;
		if ((uVar5 != 0xffff) &&(iVar3 = *(int *)(*(int *)(uVar4 + 8) + (param_1 & 0x7fff) * 4), iVar3 != 0)) {
		pSVar2->value = *(uint *)(iVar3 + 0x1c);
		}
		}
		uVar7 = uVar7 + 1;
		ppSVar6 = ppSVar6 + 1;
		}
		 while (uVar7 < (this->amount & 0xff));
		}
		puVar1 = &(this->parent).flags;
		*puVar1 = *puVar1 | 0x1000000;
		}
		return;
		}
		
	*/
	return;
}

void ScriptHeader::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptHeader::Write(ScriptHeader *this,MemoryStream *stream){
		MemoryStream_VTable *pMVar1;
		MemoryStream *this_00;
		ushort *value;
		uint uVar2;
		this_00 = stream;
		(*stream->vtable->WriteInt3)(stream,(this->parent).flags);
		(*stream->vtable->WriteInt3)(stream,this->amount);
		uVar2 = 0;
		if ((this->amount & 0xff) != 0) {
		stream = (MemoryStream *)&this->pairArray;
		do {
		pMVar1 = stream->vtable;
		value = (ushort *)pMVar1->Read;
		if (value != (ushort *)0x0) {
		value = (ushort *)(*value + 1);
		}
		(*this_00->vtable->WriteInt3)(this_00,(uint)value);
		(*this_00->vtable->WriteInt3)(this_00,*(uint *)pMVar1->Dispose);
		uVar2 = uVar2 + 1;
		stream = (MemoryStream *)&stream->flags;
		}
		 while (uVar2 < (this->amount & 0xff));
		}
		return;
		}
		
	*/
	return;
}

bool ScriptHeader::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall ScriptHeader::IsA(ScriptHeader *this,int **param_1){
		int **ppiVar1;
		int **ppiVar2;
		bool bVar3;
		byte bVar4;
		uint uVar5;
		uint uVar6;
		ScriptHeaderPair **ppSVar7;
		ScriptHeader *local_4;
		ppiVar2 = param_1;
		local_4 = this;
		bVar3 = ScriptAbstract::IsA(&this->parent,param_1);
		param_1._0_1_ = bVar3 & 1;
		if (param_1[1] == (int *)0x0) {
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**param_1 + 0x74))(0x85c,&local_4);
		param_1._0_1_ = (byte)param_1 & bVar4;
		*(undefined *)&this->amount = local_4._0_1_;
		goto LAB_00182cd9;
		}
		if (param_1[1] == (int *)0x1) {
		bVar4 = (**(code **)(**param_1 + 0x24))(0x85c,local_4);
		param_1._0_1_ = (byte)param_1 & bVar4;
		*(undefined *)&this->amount = local_4._0_1_;
		goto LAB_00182cd9;
		}
		}
		param_1._0_1_ = false;
		*(undefined *)&this->amount = local_4._0_1_;
		goto LAB_00182cd9;
		}
		local_4 = (ScriptHeader *)(this->amount & 0xff);
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 == false) {
		LAB_00182cd1:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**param_1 + 0x74))(0x85c,&local_4);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_00182cd1;
		bVar4 = (**(code **)(**param_1 + 0x24))(0x85c,local_4);
		}
		param_1._0_1_ = (byte)param_1 & bVar4;
		LAB_00182cd9:ppiVar1 = param_1 + 1;
		uVar6 = 0;
		param_1 = (int **)(uint)(byte)param_1;
		if (*ppiVar1 == (int *)0x0) {
		if ((this->amount & 0xff) != 0) {
		ppSVar7 = &this->pairArray;
		do {
		if (ppiVar2[1] == (int *)0x0) {
		uVar5 = FUN_001851c0(*ppiVar2,ppSVar7,0x85d,0);
		bVar4 = (byte)uVar5;
		}
		else if (ppiVar2[1] == (int *)0x1) {
		uVar5 = FUN_00184f80(*ppiVar2,*ppSVar7,0x85d,0);
		bVar4 = (byte)uVar5;
		}
		else {
		bVar4 = 0;
		}
		uVar6 = uVar6 + 1;
		ppSVar7 = ppSVar7 + 1;
		param_1 = (int **)(uint)((byte)param_1 & bVar4);
		}
		 while (uVar6 < (this->amount & 0xff));
		return (bool)((byte)param_1 & bVar4);
		}
		}
		else if ((this->amount & 0xff) != 0) {
		ppSVar7 = &this->pairArray;
		do {
		if (ppiVar2[1] == (int *)0x0) {
		uVar5 = FUN_001851c0(*ppiVar2,ppSVar7,0x85d,0);
		bVar4 = (byte)uVar5;
		}
		else if (ppiVar2[1] == (int *)0x1) {
		uVar5 = FUN_00184f80(*ppiVar2,*ppSVar7,0x85d,0);
		bVar4 = (byte)uVar5;
		}
		else {
		bVar4 = 0;
		}
		param_1._0_1_ = (byte)param_1 & bVar4;
		uVar6 = uVar6 + 1;
		ppSVar7 = ppSVar7 + 1;
		param_1 = (int **)(uint)(byte)param_1;
		}
		 while (uVar6 < (this->amount & 0xff));
		}
		return (bool)(byte)param_1;
		}
		
	*/
	return false;
}

bool ScriptHeader::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ScriptHeader::IsB(void){
		return true;
		}
		
	*/
	return false;
}

uint ScriptHeader::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ScriptHeader::GetBuilderIndex(void){
		return 0x1803;
		}
		
	*/
	return 0;
}

