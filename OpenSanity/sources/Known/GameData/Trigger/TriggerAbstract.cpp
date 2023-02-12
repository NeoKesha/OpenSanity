#include "headers/Known/GameData/Trigger/TriggerAbstract.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TriggerAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Trigger * __fastcall TriggerAbstract::Construct(Trigger *this){
		UNV018 *pUVar1;
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT_Abstract;
		(this->parent).objectActivatorMask = 0;
		(this->parent).idList.cnt = 0;
		(this->parent).idList.allocation = 10;
		(this->parent).idList.related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->parent).idList.list = pUVar1;
		(this->parent).header = 0;
		return this;
		}
		
	*/
	return;
}

void TriggerAbstract::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TriggerAbstract::Dispose(TriggerAbstract *this){
		this->vtable = (TriggerAbstract_VTable *)&Trigger_VT_Abstract;
		VirtualPool::FreeMemory((this->idList).list);
		return;
		}
		
	*/
	return;
}

uint TriggerAbstract::FUN_001c5ae0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall TriggerAbstract::FUN_001c5ae0(TriggerAbstract *this,int **param_1){
		Vector4 *aiPos;
		bool bVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		char cVar6;
		undefined3 extraout_var;
		uint uVar7;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c5b23:bVar2 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x74))(0x98d,&this->header);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5b23;
		bVar2 = (**(code **)(**param_1 + 0x24))(0x98d,this->header);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c5b64:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar7 = FUN_001c63e0(*param_1,&this->objectActivatorMask,0x98e,0);
		bVar3 = (byte)uVar7;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5b64;
		uVar7 = FUN_001c6430(*param_1,&this->objectActivatorMask,0x98e,0);
		bVar3 = (byte)uVar7;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c5ba3:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar7 = FUN_000f3400(*param_1,&this->Rotation,0x98f,0);
		bVar4 = (byte)uVar7;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5ba3;
		uVar7 = FUN_000f3450(*param_1,&this->Rotation,0x98f,0);
		bVar4 = (byte)uVar7;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c5be2:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar5 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->Position,0x990,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5be2;
		bVar5 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->Position,0x990,0);
		}
		bVar5 = bVar2 & 1 & bVar3 & bVar4 & bVar5;
		aiPos = &this->Scale;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c5c23:bVar1 = UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)param_1,aiPos,0x99e,0);
		bVar5 = bVar5 & bVar1;
		}
		else {
		if (param_1[1] == (int *)0x0) {
		cVar6 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)aiPos,0x991,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5c23;
		cVar6 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,aiPos,0x991,0);
		}
		if (cVar6 == '\0') goto LAB_001c5c23;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar7 = FUN_001afea0(*param_1,&this->idList,0x992,0);
		bVar2 = (byte)uVar7;
		goto LAB_001c5c71;
		}
		if (param_1[1] == (int *)0x1) {
		uVar7 = FUN_001afef0(*param_1,&this->idList,0x992,0);
		bVar2 = (byte)uVar7;
		goto LAB_001c5c71;
		}
		}
		bVar2 = 0;
		LAB_001c5c71:bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar7 = CONCAT31(extraout_var,bVar1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar7 = (**(code **)(**param_1 + 0x68))(0x99c,&this->unkFloat);
		return uVar7 & 0xffffff00 | (uint)(byte)((byte)uVar7 & bVar5 & bVar2);
		}
		uVar7 = (int)param_1[1] - 1;
		if (uVar7 == 0) {
		uVar7 = (**(code **)(**param_1 + 0x18))(0x99c,this->unkFloat);
		return uVar7 & 0xffffff00 | (uint)(byte)((byte)uVar7 & bVar5 & bVar2);
		}
		}
		return uVar7 & 0xffffff00;
		}
		
	*/
	return 0;
}

void TriggerAbstract::MatrixRelated(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TriggerAbstract::MatrixRelated(TriggerAbstract *this,Matrix4 *param_1){
		Matrix4 local_90;
		Matrix4 local_50;
		Matrix4::FUN_000d9f80(&local_90,&this->Rotation);
		local_90.m41 = (this->Position).x;
		local_90.m42 = (this->Position).y;
		local_90.m43 = (this->Position).z;
		local_90.m44 = (this->Position).w;
		Matrix4::Multiply4443(&local_90,param_1,&local_50);
		Vector4::FUN_000db0d0(&this->Rotation,&local_50);
		(this->Position).x = local_50.m41;
		(this->Position).y = local_50.m42;
		(this->Position).z = local_50.m43;
		(this->Position).w = local_50.m44;
		return;
		}
		
	*/
	return;
}

void TriggerAbstract::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TriggerAbstract * __thiscall TriggerAbstract::Dispose(TriggerAbstract *this,byte param_1){
		this->vtable = (TriggerAbstract_VTable *)&Trigger_VT_Abstract;
		VirtualPool::FreeMemory((this->idList).list);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void TriggerAbstract::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TriggerAbstract::Read(TriggerAbstract *this,MemoryStream *stream){
		(*stream->vtable->Read)(stream,&this->header,4,1);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->objectActivatorMask);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat);
		(*stream->vtable->Read)(stream,(int *)&this->Rotation,0x10,1);
		(*stream->vtable->Read)(stream,(int *)&this->Position,0x10,1);
		(*stream->vtable->Read)(stream,(int *)&this->Scale,0x10,1);
		InstanceIdList::Read(&this->idList,stream);
		return;
		}
		
	*/
	return;
}

void TriggerAbstract::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TriggerAbstract::Write(TriggerAbstract *this,MemoryStream *stream){
		(*stream->vtable->Write)(stream,(byte *)&this->header,4);
		(*stream->vtable->WriteInt3)(stream,this->objectActivatorMask);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat);
		(*stream->vtable->Write)(stream,(byte *)&this->Rotation,0x10);
		(*stream->vtable->Write)(stream,(byte *)&this->Position,0x10);
		(*stream->vtable->Write)(stream,(byte *)&this->Scale,0x10);
		InstanceIdList::Write(&this->idList,stream);
		return;
		}
		
	*/
	return;
}

TriggerAbstract* TriggerAbstract::Copy(TriggerAbstract* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TriggerAbstract * __thiscall TriggerAbstract::Copy(TriggerAbstract *this,TriggerAbstract *other){
		this->header = other->header;
		this->objectActivatorMask = other->objectActivatorMask;
		this->unkFloat = other->unkFloat;
		(this->Rotation).x = (other->Rotation).x;
		(this->Rotation).y = (other->Rotation).y;
		(this->Rotation).z = (other->Rotation).z;
		(this->Rotation).w = (other->Rotation).w;
		(this->Position).x = (other->Position).x;
		(this->Position).y = (other->Position).y;
		(this->Position).z = (other->Position).z;
		(this->Position).w = (other->Position).w;
		(this->Scale).x = (other->Scale).x;
		(this->Scale).y = (other->Scale).y;
		(this->Scale).z = (other->Scale).z;
		(this->Scale).w = (other->Scale).w;
		InstanceIdList::Copy(&this->idList,&other->idList);
		return this;
		}
		
	*/
	return null;
}

