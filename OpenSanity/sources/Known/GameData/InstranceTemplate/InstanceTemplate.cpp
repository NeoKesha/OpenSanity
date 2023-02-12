#include "headers/Known/GameData/InstranceTemplate/InstanceTemplate.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void InstanceTemplate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTemplate * __fastcall InstanceTemplate::Construct(InstanceTemplate *this){
		(this->objectName).value = (char *)0x0;
		(this->objectName).strLength = 0;
		(this->objectName).strSize = 0;
		this->unkByte3 = 0;
		this->unkByte4 = 0;
		this->objectId = -1;
		InstanceTemplateIdList::Construct(&this->idList,(uint *)&DAT_0000000a);
		(this->unkStruct).unkInt = 0;
		(this->unkStruct).vtable = &ParameterTable_VT;
		(this->unkStruct).fractions.fractionCnt = 0;
		(this->unkStruct).fractions.fraction = (uint *)0x0;
		(this->unkStruct).floats.floatsCnt = 0;
		(this->unkStruct).floats.floats = (float *)0x0;
		(this->unkStruct).ints.intsCnt = 0;
		(this->unkStruct).ints.ints = (int *)0x0;
		(this->unkStruct).instancePropsHeader = 0;
		*(undefined *)&(this->unkStruct).instancePropsHeader = 0;
		*(undefined *)((int)&(this->unkStruct).instancePropsHeader + 1) = 0;
		*(undefined *)((int)&(this->unkStruct).instancePropsHeader + 2) = 0;
		return this;
		}
		
	*/
	return;
}

void InstanceTemplate::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTemplate::Read(InstanceTemplate *this,MemoryStream *stream){
		TwinString::ReadFromFile(&this->objectName,stream);
		(*stream->vtable->ReadShort2)(stream,&this->objectId);
		(*stream->vtable->ReadByte3)(stream,&this->unkByte1);
		(*stream->vtable->ReadByte3)(stream,&this->unkByte2);
		InstanceTemplateIdList::Read(&this->idList,stream);
		(*stream->vtable->ReadByte3)(stream,&this->unkByte3);
		(*stream->vtable->ReadByte3)(stream,&this->unkByte4);
		(*stream->vtable->ReadUInt)(stream,(uint *)&(this->unkStruct).instancePropsHeader);
		(*stream->vtable->ReadUInt)(stream,(uint *)&(this->unkStruct).unkInt);
		CollectionFractions::Read(&(this->unkStruct).fractions,stream);
		CollectionFloats::Read(&(this->unkStruct).floats,stream);
		CollectionInts::Read(&(this->unkStruct).ints,stream);
		return;
		}
		
	*/
	return;
}

bool InstanceTemplate::FUN_001ace00(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTemplate::FUN_001ace00(InstanceTemplate *this,UnkFamily27Wrapper *param_1){
		UnkFamily27A **ppUVar1;
		UnkFamily27Wrapper *pUVar2;
		byte bVar3;
		bool bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		byte bVar9;
		byte bVar10;
		uint uVar11;
		pUVar2 = param_1;
		bVar3 = FUN_0020f490((int **)param_1,0x924,&this->objectName);
		bVar4 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar4 == false) {
		LAB_001ace59:bVar5 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		uVar11 = FUN_001af310(param_1->ptr,&this->objectId,0x925,0);
		bVar5 = (byte)uVar11;
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001ace59;
		uVar11 = FUN_001af360(param_1->ptr,&this->objectId,0x925,0);
		bVar5 = (byte)uVar11;
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar4 == false) {
		LAB_001ace9e:bVar6 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar6 = (*(code *)((param_1->ptr->parent).vtable)->field31_0x7c)(0x926,&this->unkByte1);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001ace9e;
		ppUVar1 = &param_1->ptr;
		param_1 = (UnkFamily27Wrapper *)((uint)param_1 & 0xffffff00 | (uint)(byte)this->unkByte1);
		bVar6 = (*(code *)(((*ppUVar1)->parent).vtable)->field11_0x2c)(0x926,param_1);
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar2->ptr);
		if (bVar4 == false) {
		LAB_001acee3:bVar7 = 0;
		}
		else if (pUVar2->field1_0x4 == 0) {
		bVar7 = (*(code *)((pUVar2->ptr->parent).vtable)->field31_0x7c)(0x927,&this->unkByte2);
		}
		else {
		if (pUVar2->field1_0x4 != 1) goto LAB_001acee3;
		param_1 = (UnkFamily27Wrapper *)((uint)param_1 & 0xffffff00 | (uint)(byte)this->unkByte2);
		bVar7 = (*(code *)((pUVar2->ptr->parent).vtable)->field11_0x2c)(0x927,param_1);
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar2->ptr);
		if (bVar4 == false) {
		LAB_001acf22:bVar8 = 0;
		}
		else if (pUVar2->field1_0x4 == 0) {
		uVar11 = FUN_001b1070(pUVar2->ptr,&this->idList,0x928,0);
		bVar8 = (byte)uVar11;
		}
		else {
		if (pUVar2->field1_0x4 != 1) goto LAB_001acf22;
		uVar11 = FUN_001b10c0(pUVar2->ptr,&this->idList,0x928,0);
		bVar8 = (byte)uVar11;
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar2->ptr);
		if (bVar4 == false) {
		LAB_001acf61:bVar9 = 0;
		}
		else if (pUVar2->field1_0x4 == 0) {
		uVar11 = FUN_001b14c0(pUVar2->ptr,&this->unkStruct,0x939,0);
		bVar9 = (byte)uVar11;
		}
		else {
		if (pUVar2->field1_0x4 != 1) goto LAB_001acf61;
		uVar11 = FUN_001b1510(pUVar2->ptr,&this->unkStruct,0x939,0);
		bVar9 = (byte)uVar11;
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar2->ptr);
		if (bVar4 != false) {
		if (pUVar2->field1_0x4 == 0) {
		bVar10 = (*(code *)((pUVar2->ptr->parent).vtable)->field31_0x7c)(0x950,&this->unkByte3);
		goto LAB_001acfa8;
		}
		if (pUVar2->field1_0x4 == 1) {
		param_1 = (UnkFamily27Wrapper *)((uint)param_1 & 0xffffff00 | (uint)(byte)this->unkByte3);
		bVar10 = (*(code *)((pUVar2->ptr->parent).vtable)->field11_0x2c)(0x950,param_1);
		goto LAB_001acfa8;
		}
		}
		bVar10 = 0;
		LAB_001acfa8:bVar10 = bVar3 & 1 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10;
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar2->ptr);
		if (bVar4 != false) {
		if (pUVar2->field1_0x4 == 0) {
		bVar3 = (*(code *)((pUVar2->ptr->parent).vtable)->field31_0x7c)(0x951,&this->unkByte4);
		return (bool)(bVar3 & bVar10);
		}
		if (pUVar2->field1_0x4 == 1) {
		param_1 = (UnkFamily27Wrapper *)((uint)param_1 & 0xffffff00 | (uint)(byte)this->unkByte4);
		bVar3 = (*(code *)((pUVar2->ptr->parent).vtable)->field11_0x2c)(0x951,param_1);
		return (bool)(bVar3 & bVar10);
		}
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceTemplate::Construct_3(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTemplate * __thiscall InstanceTemplate::Construct(InstanceTemplate *this,MemoryStream *stream){
		(this->objectName).value = (char *)0x0;
		(this->objectName).strLength = 0;
		(this->objectName).strSize = 0;
		this->objectId = -1;
		InstanceTemplateIdList::Construct(&this->idList,(uint *)&DAT_0000000a);
		(this->unkStruct).vtable = &ParameterTable_VT;
		(this->unkStruct).unkInt = 0;
		(this->unkStruct).fractions.fractionCnt = 0;
		(this->unkStruct).fractions.fraction = (uint *)0x0;
		(this->unkStruct).floats.floatsCnt = 0;
		(this->unkStruct).floats.floats = (float *)0x0;
		(this->unkStruct).ints.intsCnt = 0;
		(this->unkStruct).ints.ints = (int *)0x0;
		(this->unkStruct).instancePropsHeader = 0;
		*(undefined *)&(this->unkStruct).instancePropsHeader = 0;
		*(undefined *)((int)&(this->unkStruct).instancePropsHeader + 1) = 0;
		*(undefined *)((int)&(this->unkStruct).instancePropsHeader + 2) = 0;
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

void InstanceTemplate::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTemplate::Write(InstanceTemplate *this,MemoryStream *stream){
		TwinString::Write(&this->objectName,stream);
		(*stream->vtable->WriteShort2)(stream,this->objectId);
		(*stream->vtable->WriteByte3)(stream,this->unkByte1);
		(*stream->vtable->WriteByte3)(stream,this->unkByte2);
		InstanceTemplateIdList::Write(&this->idList,stream);
		(*stream->vtable->WriteByte3)(stream,this->unkByte3);
		(*stream->vtable->WriteByte3)(stream,this->unkByte4);
		(*stream->vtable->WriteInt3)(stream,(this->unkStruct).instancePropsHeader);
		(*stream->vtable->WriteInt3)(stream,(this->unkStruct).unkInt);
		CollectionFractions::Write(&(this->unkStruct).fractions,stream);
		CollectionFloats::Write(&(this->unkStruct).floats,stream);
		CollectionInts::Write(&(this->unkStruct).ints,stream);
		return;
		}
		
	*/
	return;
}

