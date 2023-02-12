#include "headers/Known/GameData/Trigger/Trigger.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Trigger::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Trigger * __fastcall Trigger::Construct(Trigger *this){
		TriggerAbstract::Construct(this);
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT;
		return this;
		}
		
	*/
	return;
}

void Trigger::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Trigger::Dispose(Trigger *this){
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT;
		TriggerAbstract::Dispose(&this->parent);
		return;
		}
		
	*/
	return;
}

bool Trigger::Check(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Trigger::Check(Trigger *this,int **param_1){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		uVar4 = TriggerAbstract::FUN_001c5ae0(&this->parent,param_1);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		(**(code **)(**param_1 + 0x78))(0x882,&this->arg1);
		}
		else if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x28))(0x882,this->arg1);
		}
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001819b8:bVar2 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x78))(0x87e,&this->arg2);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001819b8;
		bVar2 = (**(code **)(**param_1 + 0x28))(0x87e,this->arg2);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar3 = (**(code **)(**param_1 + 0x78))(0x87f,&this->arg3);
		goto LAB_001819f8;
		}
		if (param_1[1] == (int *)0x1) {
		bVar3 = (**(code **)(**param_1 + 0x28))(0x87f,this->arg3);
		goto LAB_001819f8;
		}
		}
		bVar3 = 0;
		LAB_001819f8:bVar3 = (byte)uVar4 & bVar2 & bVar3;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x78))(0x880,&this->arg4);
		return (bool)(bVar2 & bVar3);
		}
		if (param_1[1] == (int *)0x1) {
		bVar2 = (**(code **)(**param_1 + 0x28))(0x880,this->arg4);
		return (bool)(bVar2 & bVar3);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void Trigger::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Trigger * __thiscall Trigger::Dispose(Trigger *this,byte param_1){
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT;
		TriggerAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Trigger::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Trigger::Read(Trigger *this,MemoryStream *stream){
		TriggerAbstract::Read(&this->parent,stream);
		(*stream->vtable->ReadShort2)(stream,&this->arg1);
		(*stream->vtable->ReadShort2)(stream,&this->arg2);
		(*stream->vtable->ReadShort2)(stream,&this->arg3);
		(*stream->vtable->ReadShort2)(stream,&this->arg4);
		return;
		}
		
	*/
	return;
}

void Trigger::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Trigger::Write(Trigger *this,MemoryStream *stream){
		TriggerAbstract::Write(&this->parent,stream);
		(*stream->vtable->WriteShort2)(stream,this->arg1);
		(*stream->vtable->WriteShort2)(stream,this->arg2);
		(*stream->vtable->WriteShort2)(stream,this->arg3);
		(*stream->vtable->WriteShort2)(stream,this->arg4);
		return;
		}
		
	*/
	return;
}

int Trigger::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int Trigger::GetBuilderIndex(void){
		return 0x1813;
		}
		
	*/
	return 0;
}

