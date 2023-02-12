#include "headers/Known/GameData/Trigger/Camera.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Camera::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Camera::Write(Camera *this,MemoryStream *stream){
		uint value;
		uint value_00;
		if (*(int *)&this->mainCamera1 == 0) {
		value_00 = 3;
		}
		else {
		value_00 = (**(code **)(**(int **)&this->mainCamera1 + 0x10))();
		}
		if (*(int *)&this->mainCamera2 == 0) {
		value = 3;
		}
		else {
		value = (**(code **)(**(int **)&this->mainCamera2 + 0x10))();
		}
		(*stream->vtable->WriteInt3)(stream,this->field0_0x0);
		(*stream->vtable->WriteShort2)(stream,this->field1_0x4);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat1);
		(*stream->vtable->Write)(stream,(byte *)&this->unkVector1,0x10);
		(*stream->vtable->Write)(stream,(byte *)&this->unkVector2,0x10);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat2);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat3);
		MemoryStream::WriteInt(stream,&this->unkInt1);
		MemoryStream::WriteInt(stream,&this->unkInt2);
		MemoryStream::WriteInt(stream,&this->unkInt3);
		MemoryStream::WriteInt(stream,&this->unkInt4);
		MemoryStream::WriteInt(stream,&this->unkInt5);
		MemoryStream::WriteInt(stream,&this->unkInt6);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat4);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat5);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat6);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat7);
		MemoryStream::WriteInt(stream,&this->unkInt7);
		MemoryStream::WriteInt(stream,&this->unkInt8);
		MemoryStream::WriteInt(stream,&this->unkInt9);
		(*stream->vtable->WriteFloat)(stream,this->unkFloat8);
		(*stream->vtable->WriteInt3)(stream,value_00);
		(*stream->vtable->WriteInt3)(stream,value);
		(*stream->vtable->WriteByte3)(stream,*(undefined *)&this->field43_0x80);
		if (*(int **)&this->mainCamera1 != (int *)0x0) {
		(**(code **)(**(int **)&this->mainCamera1 + 0x20))(stream);
		}
		if (*(int **)&this->mainCamera2 != (int *)0x0) {
		(**(code **)(**(int **)&this->mainCamera2 + 0x20))(stream);
		}
		return;
		}
		
	*/
	return;
}

void Camera::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Camera::Construct(Camera *this,MemoryStream *stream){
		int *piVar1;
		uint uStack8;
		uint uStack4;
		ObjectBuilderStorage *builderStorage;
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
		builderStorage = ObjectBuilderStorage;
		(*stream->vtable->ReadUInt)(stream,&this->field0_0x0);
		(*stream->vtable->ReadShort2)(stream,&this->field1_0x4);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat1);
		(*stream->vtable->Read)(stream,(int *)&this->unkVector1,0x10,1);
		(*stream->vtable->Read)(stream,(int *)&this->unkVector2,0x10,1);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat2);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat3);
		MemoryStream::ReadInt2(stream,&this->unkInt1);
		MemoryStream::ReadInt2(stream,&this->unkInt2);
		MemoryStream::ReadInt2(stream,&this->unkInt3);
		MemoryStream::ReadInt2(stream,&this->unkInt4);
		MemoryStream::ReadInt2(stream,&this->unkInt5);
		MemoryStream::ReadInt2(stream,&this->unkInt6);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat4);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat5);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat6);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat7);
		MemoryStream::ReadInt2(stream,&this->unkInt7);
		MemoryStream::ReadInt2(stream,&this->unkInt8);
		MemoryStream::ReadInt2(stream,&this->unkInt9);
		(*stream->vtable->ReadFloat)(stream,&this->unkFloat8);
		(*stream->vtable->ReadUInt)(stream,&uStack8);
		(*stream->vtable->ReadUInt)(stream,&uStack4);
		(*stream->vtable->ReadByte3)(stream,(byte *)&this->field43_0x80);
		if (uStack8 == 3) {
		*(undefined4 *)&this->mainCamera1 = 0;
		}
		else {
		piVar1 = (int *)ObjectBuilderStorage::BuildObject(builderStorage,uStack8);
		*(int **)&this->mainCamera1 = piVar1;
		(**(code **)(*piVar1 + 0x14))(stream);
		}
		if (uStack4 != 3) {
		piVar1 = (int *)ObjectBuilderStorage::BuildObject(builderStorage,uStack4);
		*(int **)&this->mainCamera2 = piVar1;
		(**(code **)(*piVar1 + 0x14))(stream);
		return;
		}
		*(undefined4 *)&this->mainCamera2 = 0;
		return;
		}
		
	*/
	return;
}

