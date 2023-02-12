#include "headers/Known/GameData/AiPosition/AiPosition.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
bool AiPosition::FUN_00176890(UnkFamily27Wrapper* wrapper) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AiPosition::FUN_00176890(AiPosition *this,UnkFamily27Wrapper *wrapper){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		bVar1 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar1 == false) {
		LAB_001768d5:bVar2 = UnkFamily27Wrapper::FUN_000f3500(wrapper,this,0x861,0);
		}
		else {
		if (wrapper->field1_0x4 == 0) {
		bVar2 = UnkFamily27A::FUN_000f3360(wrapper->ptr,this,0x873,0);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001768d5;
		bVar2 = UnkFamily27A::FUN_000f33b0(wrapper->ptr,this,0x873,0);
		}
		if (bVar2 == 0) goto LAB_001768d5;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar1 != false) {
		if (wrapper->field1_0x4 == 0) {
		bVar3 = (*(code *)((wrapper->ptr->parent).vtable)->field30_0x78)(0x874,&this->nodeType);
		goto LAB_00176926;
		}
		if (wrapper->field1_0x4 == 1) {
		bVar3 = (*(code *)((wrapper->ptr->parent).vtable)->field10_0x28)(0x874,this->nodeType);
		goto LAB_00176926;
		}
		}
		bVar3 = 0;
		LAB_00176926:if (wrapper->field1_0x4 == 0) {
		this->field1_0x10 = this->field1_0x10 ^ (this->field1_0x10 ^ DAT_004958a0) & 0x7fff;
		}
		return (bool)(bVar2 & bVar3);
		}
		
	*/
	return false;
}

void AiPosition::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AiPosition::Construct(AiPosition *this,MemoryStream *stream){
		this->field1_0x10 = 0;
		this->field2_0x14 = 0;
		(*stream->vtable->Read)(stream,(int *)this,0x10,1);
		(*stream->vtable->ReadShort2)(stream,&this->nodeType);
		this->field1_0x10 = this->field1_0x10 ^ (this->field1_0x10 ^ DAT_004958a0) & 0x7fff;
		return;
		}
		
	*/
	return;
}

void AiPosition::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AiPosition::Write(AiPosition *this,MemoryStream *stream){
		(*stream->vtable->Write)(stream,(byte *)this,0x10);
		(*stream->vtable->WriteShort2)(stream,this->nodeType);
		return;
		}
		
	*/
	return;
}

