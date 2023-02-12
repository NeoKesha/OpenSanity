#include "headers/Known/GameData/Script/ScriptAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ScriptAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptAbstract * __fastcall ScriptAbstract::Construct(ScriptAbstract *this){
		*(undefined2 *)&this->field1_0x4 = 0;
		this->index = -1;
		this->field1_0x4 = this->field1_0x4 & 0xfffcffff;
		this->vtable = (ScriptAbstract_VTable *)&Script_VT_Abstract;
		(this->name).value = (char *)0x0;
		(this->name).strLength = 0;
		(this->name).strSize = 0;
		this->flags = 0xffff;
		*(undefined *)((int)&this->flags + 2) = 0x32;
		return this;
		}
		
	*/
	return;
}

bool ScriptAbstract::IsA(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall ScriptAbstract::IsA(ScriptAbstract *this,int **param_1){
		int **this_00;
		bool bVar1;
		byte bVar2;
		uint uVar3;
		byte local_9;
		undefined4 local_8;
		uint local_4;
		this_00 = param_1;
		if (param_1[1] != (int *)0x0) {
		local_9 = *(byte *)((int)&this->flags + 2);
		local_4 = this->flags & 0xffff;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (this_00[1] == (int *)0x0) {
		bVar2 = (**(code **)(**this_00 + 0x74))(0x856,&local_4);
		goto LAB_00180cfa;
		}
		if (this_00[1] == (int *)0x1) {
		bVar2 = (**(code **)(**this_00 + 0x24))(0x856,local_4);
		goto LAB_00180cfa;
		}
		}
		bVar2 = 0;
		LAB_00180cfa:uVar3 = FUN_001845b0(this_00,&local_9,0x857);
		return (bool)((byte)uVar3 & bVar2 & 1);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (this_00[1] == (int *)0x0) {
		bVar2 = (**(code **)(**this_00 + 0x74))(0x856,&local_8);
		goto LAB_00180c75;
		}
		if (this_00[1] == (int *)0x1) {
		bVar2 = (**(code **)(**this_00 + 0x24))(0x856,local_8);
		goto LAB_00180c75;
		}
		}
		bVar2 = 0;
		LAB_00180c75:uVar3 = FUN_001845b0(this_00,(byte *)&param_1,0x857);
		*(undefined2 *)&this->flags = (undefined2)local_8;
		*(undefined *)((int)&this->flags + 2) = param_1._0_1_;
		return (bool)((byte)uVar3 & bVar2 & 1);
		}
		
	*/
	return false;
}

void ScriptAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptAbstract * __thiscall ScriptAbstract::Dispose(ScriptAbstract *this,byte param_1){
		this->vtable = (ScriptAbstract_VTable *)&Script_VT_Abstract;
		TwinString::Dispose(&this->name);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void ScriptAbstract::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptAbstract::Read(ScriptAbstract *this,MemoryStream *stream){
		uint *val;
		val = &this->flags;
		(*stream->vtable->ReadUInt)(stream,val);
		*val = *val & 0xfeffffff;
		return;
		}
		
	*/
	return;
}

void ScriptAbstract::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptAbstract::Write(ScriptAbstract *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->flags);
		return;
		}
		
	*/
	return;
}

void ScriptAbstract::SetFlag(ScriptAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ScriptAbstract::SetFlag(ScriptAbstract *param_1){
		param_1->flags = param_1->flags | 0x1000000;
		return;
		}
		
	*/
	return;
}

ushort ScriptAbstract::GetId(ScriptAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ushort __fastcall ScriptAbstract::GetId(ScriptAbstract *param_1){
		return *(ushort *)&param_1->flags;
		}
		
	*/
	return 0;
}

int ScriptAbstract::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ScriptAbstract::GetBuilderIndex(void){
		return 0x1802;
		}
		
	*/
	return 0;
}

