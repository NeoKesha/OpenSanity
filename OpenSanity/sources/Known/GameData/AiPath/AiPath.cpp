#include "headers/Known/GameData/AiPath/AiPath.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
uint AiPath::FUN_00160ca0(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __thiscall AiPath::FUN_00160ca0(AiPath *this,UnkFamily27Wrapper *param_1){
		UnkFamily27Wrapper *this_00;
		bool bVar1;
		byte bVar2;
		char cVar3;
		byte bVar4;
		byte bVar5;
		uint uVar6;
		uint uVar7;
		undefined2 extraout_var;
		byte bStack21;
		uint local_14;
		uint local_10;
		uint local_c;
		uint local_8;
		uint local_4;
		this_00 = param_1;
		local_14 = (uint)(ushort)this->node1;
		local_c = (uint)(ushort)this->arg1;
		local_10 = (uint)(ushort)this->node2;
		local_4 = (uint)(ushort)this->arg3;
		local_8 = (uint)(ushort)this->arg2;
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_00160d19:bVar2 = 0;
		}
		else if (this_00->field1_0x4 == 0) {
		bVar2 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x877,&local_c);
		}
		else {
		if (this_00->field1_0x4 != 1) goto LAB_00160d19;
		bVar2 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x877,local_c);
		}
		bVar2 = bVar2 & 1;
		if (this_00->field1_0x4 == 0) {
		bVar1 = UnkFamily27A::FUN_0020c0a0(this_00->ptr);
		if (bVar1 != false) {
		if (this_00->field1_0x4 == 0) {
		cVar3 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x883,&local_14);
		}
		else {
		if (this_00->field1_0x4 != 1) goto LAB_00160d68;
		cVar3 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x883,local_14);
		}
		if (cVar3 != '\0') {
		uVar6 = FUN_00119610(this_00,(undefined2 *)&local_10,0x884);
		bVar4 = (byte)uVar6;
		goto LAB_00160e3c;
		}
		}
		LAB_00160d68:uVar6 = FUN_0016c650(this_00,(byte *)&param_1,0x875);
		uVar7 = FUN_0016c650(this_00,&bStack21,0x876);
		local_10 = CONCAT22(extraout_var,(ushort)bStack21);
		bVar2 = bVar2 & (byte)uVar6 & (byte)uVar7;
		local_14 = uVar7 & 0xffff0000 | (uint)param_1 & 0xff;
		}
		else {
		bVar1 = UnkFamily27A::FUN_0020c0a0(this_00->ptr);
		if (bVar1 == false) {
		LAB_00160dfa:bVar4 = 0;
		}
		else if (this_00->field1_0x4 == 0) {
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x883,&local_14);
		}
		else {
		if (this_00->field1_0x4 != 1) goto LAB_00160dfa;
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x883,local_14);
		}
		bVar2 = bVar2 & bVar4;
		bVar1 = UnkFamily27A::FUN_0020c0a0(this_00->ptr);
		if (bVar1 == false) {
		LAB_00160e3a:bVar4 = 0;
		}
		else if (this_00->field1_0x4 == 0) {
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x884,&local_10);
		}
		else {
		if (this_00->field1_0x4 != 1) goto LAB_00160e3a;
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x884,local_10);
		}
		LAB_00160e3c:bVar2 = bVar2 & bVar4;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(this_00->ptr);
		if (bVar1 == false) {
		LAB_00160e7a:bVar4 = 0;
		}
		else if (this_00->field1_0x4 == 0) {
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x878,&local_8);
		}
		else {
		if (this_00->field1_0x4 != 1) goto LAB_00160e7a;
		bVar4 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x878,local_8);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(this_00->ptr);
		if (bVar1 != false) {
		if (this_00->field1_0x4 == 0) {
		bVar5 = (*(code *)((this_00->ptr->parent).vtable)->field30_0x78)(0x879,&local_4);
		goto LAB_00160ebc;
		}
		if (this_00->field1_0x4 == 1) {
		bVar5 = (*(code *)((this_00->ptr->parent).vtable)->field10_0x28)(0x879,local_4);
		goto LAB_00160ebc;
		}
		}
		bVar5 = 0;
		LAB_00160ebc:uVar6 = this_00->field1_0x4;
		if (uVar6 == 0) {
		this->arg1 = (short)local_c;
		uVar6 = local_8 & 0xffff;
		this->node1 = (short)local_14;
		this->node2 = (short)local_10;
		this->arg2 = (short)uVar6;
		this->arg3 = (short)local_4;
		}
		return uVar6 & 0xffffff00 | (uint)(bVar2 & bVar4 & bVar5);
		}
		
	*/
	return 0;
}

void AiPath::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AiPath::Construct(AiPath *this,MemoryStream *stream){
		(*stream->vtable->ReadShort2)(stream,&this->node1);
		(*stream->vtable->ReadShort2)(stream,&this->node2);
		(*stream->vtable->ReadShort2)(stream,&this->arg1);
		(*stream->vtable->ReadShort2)(stream,&this->arg2);
		(*stream->vtable->ReadShort2)(stream,&this->arg3);
		return;
		}
		
	*/
	return;
}

void AiPath::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AiPath::Write(AiPath *this,MemoryStream *stream){
		(*stream->vtable->WriteShort2)(stream,this->node1);
		(*stream->vtable->WriteShort2)(stream,this->node2);
		(*stream->vtable->WriteShort2)(stream,this->arg1);
		(*stream->vtable->WriteShort2)(stream,this->arg2);
		(*stream->vtable->WriteShort2)(stream,this->arg3);
		return;
		}
		
	*/
	return;
}

