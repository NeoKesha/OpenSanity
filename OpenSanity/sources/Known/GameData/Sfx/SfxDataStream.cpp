#include "headers/Known/GameData/Sfx/SfxDataStream.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Sfx/Sfx.h"
void SfxDataStream::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SfxDataStream::Write(SfxDataStream *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->header);
		(*stream->vtable->WriteInt3)(stream,this->unkField1);
		(*stream->vtable->WriteInt3)(stream,this->unkField2);
		(*stream->vtable->WriteInt4)(stream,this->unkField3);
		(*stream->vtable->WriteInt4)(stream,this->unkField4);
		(*stream->vtable->Write)(stream,(byte *)&this->someData,0x28);
		(*stream->vtable->WriteInt3)(stream,this->streamLength);
		(*stream->vtable->Write)(stream,(byte *)this->buffer,this->streamLength);
		return;
		}
		
	*/
	return;
}

uint SfxDataStream::LoadAudio(Sfx* sfx, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SfxDataStream::LoadAudio(SfxDataStream *this,Sfx *sfx,MemoryStream *stream){
		ushort uVar1;
		ushort uVar2;
		uint size;
		GameReaderStorage *this_00;
		bool bVar3;
		astruct *pSVar3;
		FileResourceDescG *pFVar4;
		undefined4 *puVar5;
		int iVar6;
		uint uVar7;
		TwinString fname;
		AutoClass23 local_10;
		fname.value = (char *)0x0;
		fname.strLength = 0;
		fname.strSize = 0;
		TwinString::Copy(&fname,(sfx->soundPath).value);
		this->unkField1 = 1;
		this->unkField2 = 1;
		this->unkField3 = 0;
		this->unkField4 = 0;
		TwinString::Append(&fname,".wav");
		this_00 = GAME_READER_STORAGE[0];
		if (stream != (MemoryStream *)0x0) {
		AutoClass23::Construct(&local_10);
		bVar3 = AutoClass23::ReadWavFile(&local_10,&fname);
		if (bVar3 != false) {
		size = *(uint *)(local_10.dataStream + 0x16);
		this->header = *(int *)(local_10.dataStream + 0xc);
		puVar5 = (undefined4 *)VirtualPool::AllocateMemory(size);
		this->buffer = puVar5;
		for (uVar7 = size >> 2;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*puVar5 = *(undefined4 *)local_10.waveFcc;
		local_10.waveFcc = (int)(local_10.waveFcc + 4);
		puVar5 = puVar5 + 1;
		}
		for (uVar7 = size & 3;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*(undefined *)puVar5 = *(undefined *)local_10.waveFcc;
		local_10.waveFcc = (int)(local_10.waveFcc + 1);
		puVar5 = (undefined4 *)((int)puVar5 + 1);
		}
		this->streamLength = size;
		this->someData = 0;
		this->field4_0x10 = 0;
		this->field5_0x14 = 0;
		*(undefined4 *)&this->field6_0x18 = 0;
		*(undefined4 *)&this->field8_0x1c = 0;
		this->field11_0x20 = 0;
		this->soundStream = (byte *)0x0;
		this->soundStreamLength = 0;
		this->field14_0x2c = 0;
		this->field15_0x30 = 0;
		*(short *)&this->someData = local_10.dataStream[10];
		*(short *)((int)&this->someData + 2) = local_10.dataStream[0xb];
		this->field4_0x10 = *(int *)(local_10.dataStream + 0xc);
		this->field8_0x1c = 0;
		uVar1 = local_10.dataStream[0x11];
		uVar2 = *(ushort *)((int)&this->someData + 2);
		this->field7_0x1a = uVar1;
		iVar6 = (uint)uVar2 * (uint)uVar1;
		uVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
		this->field6_0x18 = (short)uVar7;
		this->field5_0x14 = (uVar7 & 0xffff) * this->field4_0x10;
		FUN_00135cd0((int *)&local_10);
		TwinString::Dispose(&fname);
		return size;
		}
		FUN_00135cd0((int *)&local_10);
		TwinString::Dispose(&fname);
		return 0;
		}
		pSVar3 = (astruct *)VirtualPool::AllocateMemory(0x14);
		if (pSVar3 == (astruct *)0x0) {
		pSVar3 = (astruct *)0x0;
		}
		else {
		pSVar3->vtable = &SectionReader_VT_Unknown_W;
		pSVar3->sfx = sfx;
		TwinString::Set(&pSVar3->filename,fname.value);
		}
		pFVar4 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar4 != (FileResourceDescG *)0x0) {
		pFVar4 = FileResourceDescG::Construct(pFVar4,fname.value,(SectionReaderAbstract *)pSVar3,0xd);
		GameReaderStorage::AddFileDesc(this_00,&pFVar4->parent,0);
		TwinString::Dispose(&fname);
		return 0;
		}
		GameReaderStorage::AddFileDesc(this_00,(FileResourceDescAbstract *)0x0,0);
		TwinString::Dispose(&fname);
		return 0;
		}
		
	*/
	return 0;
}

void SfxDataStream::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SfxDataStream::Read(SfxDataStream *this,MemoryStream *stream){
		int *buffer;
		uint *streamLength;
		(*stream->vtable->ReadUInt)(stream,(uint *)this);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->unkField1);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->unkField2);
		(*stream->vtable->ReadInt5)(stream,&this->unkField3);
		(*stream->vtable->ReadInt5)(stream,&this->unkField4);
		(*stream->vtable->Read)(stream,&this->someData,0x28,1);
		streamLength = &this->streamLength;
		(*stream->vtable->ReadUInt)(stream,streamLength);
		buffer = (int *)VirtualPool::AllocateMemory(*streamLength);
		this->buffer = buffer;
		(*stream->vtable->Read)(stream,buffer,*streamLength,1);
		return;
		}
		
	*/
	return;
}

