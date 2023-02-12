#include "headers/Known/GameData/CollisionSurface/CollisionSurface.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CollisionSurface::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall CollisionSurface::Construct(CollisionSurface *this){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_00386ab4;
		fVar1 = FLOAT_0038639c;
		this->floatParam6 = FLOAT_00386ab4;
		this->floatParam7 = fVar2;
		this->floatParam8 = fVar2;
		this->floatParam9 = fVar2;
		this->floatParam10 = fVar2;
		*(undefined4 *)&this->field_0x4 = 0xffffffff;
		this->unkFloat1 = fVar1;
		this->unkFloat2 = fVar1;
		*(undefined2 *)this = 0;
		*(uint *)this = *(uint *)this & 0xfffcffff;
		this->unkVector = 0;
		*(undefined4 *)&this->field_0x34 = 0;
		*(undefined4 *)&this->field_0x38 = 0;
		*(float *)&this->field_0x3c = fVar1;
		(this->boundingBox).v2.x = 0.0;
		*(undefined *)&(this->boundingBox).v2.y = 0;
		(this->boundingBox).v1.x = Vector4_0039ef70.x;
		(this->boundingBox).v1.y = Vector4_0039ef70.y;
		(this->boundingBox).v1.z = Vector4_0039ef70.z;
		(this->boundingBox).v1.w = Vector4_0039ef70.w;
		fVar1 = FLOAT_003869d8;
		this->landSoundId1 = -1;
		this->unkSoundId2 = -1;
		this->stepSoundId1 = -1;
		this->stepSoundId2 = -1;
		this->landSoundId2 = -1;
		this->particleId1 = -1;
		this->particleId2 = -1;
		this->particleId3 = -1;
		this->floatParam1 = fVar1;
		this->floatParam2 = fVar1;
		this->floatParam3 = fVar1;
		this->floatParam4 = fVar1;
		this->floatParam5 = fVar1;
		(this->boundingBox).v2.x = 0.0;
		*(undefined *)&(this->boundingBox).v2.y = 0;
		(this->boundingBox).v1.x = Vector4_0039ef70.x;
		(this->boundingBox).v1.y = Vector4_0039ef70.y;
		(this->boundingBox).v1.z = Vector4_0039ef70.z;
		(this->boundingBox).v1.w = Vector4_0039ef70.w;
		this->flags = 0xff000;
		return;
		}
		
	*/
	return;
}

void CollisionSurface::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollisionSurface::Read(CollisionSurface *this,MemoryStream *stream){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		this->unkFloat1 = FLOAT_0038639c;
		this->unkFloat2 = fVar1;
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->flags);
		(*stream->vtable->ReadShort2)(stream,&this->surfaceId);
		(*stream->vtable->ReadShort2)(stream,&this->stepSoundId1);
		(*stream->vtable->ReadShort2)(stream,&this->stepSoundId2);
		(*stream->vtable->ReadShort2)(stream,&this->particleId1);
		(*stream->vtable->ReadShort2)(stream,&this->particleId2);
		(*stream->vtable->ReadShort2)(stream,&this->landSoundId1);
		(*stream->vtable->ReadShort2)(stream,&this->unkSoundId2);
		(*stream->vtable->ReadShort2)(stream,&this->particleId3);
		(*stream->vtable->ReadShort2)(stream,&this->landSoundId2);
		(*stream->vtable->ReadShort2)(stream,&this->unkSoundId);
		(*stream->vtable->ReadShort2)(stream,(short *)&stream);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam1);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam2);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam3);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam4);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam5);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam6);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam7);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam8);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam9);
		(*stream->vtable->ReadFloat)(stream,&this->floatParam10);
		(*stream->vtable->Read)(stream,&this->unkVector,0x10,1);
		(*stream->vtable->Read)(stream,(int *)&this->boundingBox,0x20,1);
		return;
		}
		
	*/
	return;
}

uint CollisionSurface::FUN_001eb1b0(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall CollisionSurface::FUN_001eb1b0(CollisionSurface *this,UnkFamily27Wrapper *param_1){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		byte bVar9;
		byte bVar10;
		byte bVar11;
		byte bVar12;
		byte bVar13;
		byte bVar14;
		byte bVar15;
		byte bVar16;
		byte bVar17;
		byte bVar18;
		byte bVar19;
		byte bVar20;
		byte bVar21;
		byte bVar22;
		uint uVar23;
		undefined3 extraout_var;
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb1f6:bVar2 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar2 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd00,&this->surfaceId);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb1f6;
		bVar2 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd00,this->surfaceId);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb235:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar3 = (*(code *)((param_1->ptr->parent).vtable)->somethingTemplate)(0xd08,&this->flags);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb235;
		bVar3 = (*(code *)((param_1->ptr->parent).vtable)->field9_0x24)(0xd08,this->flags);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb27a:bVar4 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar4 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd01,&this->floatParam6);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb27a;
		bVar4 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd01,this->floatParam6);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb2bb:bVar5 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar5 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd02,&this->floatParam7);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb2bb;
		bVar5 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd02,this->floatParam7);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb2fc:bVar6 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar6 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd03,&this->floatParam8);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb2fc;
		bVar6 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd03,this->floatParam8);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb33d:bVar7 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar7 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd04,&this->floatParam9);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb33d;
		bVar7 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd04,this->floatParam9);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb37e:bVar8 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar8 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd05,&this->floatParam10);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb37e;
		bVar8 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd05,this->floatParam10);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb3c5:bVar9 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar9 = UnkFamily27A::FUN_000f3360(param_1->ptr,(AiPosition *)&this->unkVector,0xd06,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb3c5;
		bVar9 = UnkFamily27A::FUN_000f33b0(param_1->ptr,&this->unkVector,0xd06,0);
		}
		uVar23 = FUN_001824a0((int)&this->boundingBox,(int **)param_1);
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb412:bVar10 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar10 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0d,&this->landSoundId1);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb412;
		bVar10 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0d,this->landSoundId1);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb450:bVar11 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar11 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0e,&this->unkSoundId2);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb450;
		bVar11 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0e,this->unkSoundId2);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb48e:bVar12 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar12 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd11,&this->unkSoundId);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb48e;
		bVar12 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd11,this->unkSoundId);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb4cc:bVar13 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar13 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd09,&this->stepSoundId1);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb4cc;
		bVar13 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd09,this->stepSoundId1);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb50a:bVar14 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar14 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0a,&this->stepSoundId2);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb50a;
		bVar14 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0a,this->stepSoundId2);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb548:bVar15 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar15 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd10,&this->landSoundId2);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb548;
		bVar15 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd10,this->landSoundId2);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb589:bVar16 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar16 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd14,&this->floatParam1);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb589;
		bVar16 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd14,this->floatParam1);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb5ca:bVar17 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar17 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd15,&this->floatParam2);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb5ca;
		bVar17 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd15,this->floatParam2);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb60b:bVar18 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar18 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd16,&this->floatParam3);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb60b;
		bVar18 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd16,this->floatParam3);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb64f:bVar19 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar19 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd17,&this->floatParam4);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb64f;
		bVar19 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd17,this->floatParam4);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb693:bVar20 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar20 = (*(code *)((param_1->ptr->parent).vtable)->field26_0x68)(0xd18,&this->floatParam5);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb693;
		bVar20 = (*(code *)((param_1->ptr->parent).vtable)->field6_0x18)(0xd18,this->floatParam5);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001eb6d1:bVar21 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar21 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0b,&this->particleId1);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001eb6d1;
		bVar21 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0b,this->particleId1);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 != false) {
		if (param_1->field1_0x4 == 0) {
		bVar22 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0c,&this->particleId2);
		goto LAB_001eb711;
		}
		if (param_1->field1_0x4 == 1) {
		bVar22 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0c,this->particleId2);
		goto LAB_001eb711;
		}
		}
		bVar22 = 0;
		LAB_001eb711:bVar22 = bVar2 & 1 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & (byte)uVar23 & bVar9 & bVar10& bVar11 & bVar12 & bVar13 & bVar14 & bVar15 & bVar16 & bVar17 & bVar18 & bVar19 & bVar20& bVar21 & bVar22;
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		uVar23 = CONCAT31(extraout_var,bVar1);
		if (bVar1 != false) {
		if (param_1->field1_0x4 == 0) {
		uVar23 = (*(code *)((param_1->ptr->parent).vtable)->field30_0x78)(0xd0f,&this->particleId3);
		return uVar23 & 0xffffff00 | (uint)((byte)uVar23 & bVar22);
		}
		uVar23 = param_1->field1_0x4 - 1;
		if (uVar23 == 0) {
		uVar23 = (*(code *)((param_1->ptr->parent).vtable)->field10_0x28)(0xd0f,this->particleId3);
		return uVar23 & 0xffffff00 | (uint)((byte)uVar23 & bVar22);
		}
		}
		return uVar23 & 0xffffff00;
		}
		
	*/
	return 0;
}

void CollisionSurface::Construct_3(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CollisionSurface * __thiscall CollisionSurface::Construct(CollisionSurface *this,MemoryStream *stream){
		*(undefined2 *)this = 0;
		*(uint *)this = *(uint *)this & 0xfffcffff;
		*(undefined4 *)&this->field_0x4 = 0xffffffff;
		thunk_FUN_00055a20((float *)&this->boundingBox);
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

void CollisionSurface::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollisionSurface::Write(CollisionSurface *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->flags);
		(*stream->vtable->WriteShort2)(stream,this->surfaceId);
		(*stream->vtable->WriteShort2)(stream,this->stepSoundId1);
		(*stream->vtable->WriteShort2)(stream,this->stepSoundId2);
		(*stream->vtable->WriteShort2)(stream,this->particleId1);
		(*stream->vtable->WriteShort2)(stream,this->particleId2);
		(*stream->vtable->WriteShort2)(stream,this->landSoundId1);
		(*stream->vtable->WriteShort2)(stream,this->unkSoundId2);
		(*stream->vtable->WriteShort2)(stream,this->particleId3);
		(*stream->vtable->WriteShort2)(stream,this->landSoundId2);
		(*stream->vtable->WriteShort2)(stream,this->unkSoundId);
		(*stream->vtable->WriteShort2)(stream,-1);
		(*stream->vtable->WriteFloat)(stream,this->floatParam1);
		(*stream->vtable->WriteFloat)(stream,this->floatParam2);
		(*stream->vtable->WriteFloat)(stream,this->floatParam3);
		(*stream->vtable->WriteFloat)(stream,this->floatParam4);
		(*stream->vtable->WriteFloat)(stream,this->floatParam5);
		(*stream->vtable->WriteFloat)(stream,this->floatParam6);
		(*stream->vtable->WriteFloat)(stream,this->floatParam7);
		(*stream->vtable->WriteFloat)(stream,this->floatParam8);
		(*stream->vtable->WriteFloat)(stream,this->floatParam9);
		(*stream->vtable->WriteFloat)(stream,this->floatParam10);
		(*stream->vtable->Write)(stream,(byte *)&this->unkVector,0x10);
		(*stream->vtable->Write)(stream,(byte *)&this->boundingBox,0x20);
		return;
		}
		
	*/
	return;
}

