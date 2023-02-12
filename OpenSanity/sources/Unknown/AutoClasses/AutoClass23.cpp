#include "headers/Unknown/AutoClasses/AutoClass23.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void AutoClass23::Construct(AutoClass23* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass23::Construct(AutoClass23 *param_1){
		param_1->stream = (MemoryStream *)0x0;
		param_1->dataStream = (short *)0x0;
		param_1->waveFcc = 0;
		return;
		}
		
	*/
	return;
}

void AutoClass23::ReadWaveHeader(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass23::ReadWaveHeader(AutoClass23 *this,byte *param_1){
		short local_54 [2];
		int local_50;
		WaveHeader local_4c;
		WaveHeader::Construct1(&local_4c);
		WaveHeader::Construct2(&local_4c,param_1);
		this->dataStream = (short *)param_1;
		RIFFContainer::GetShort(&local_4c.fmt,0,local_54);
		this->dataStream[10] = local_54[0];
		RIFFContainer::GetShort(&local_4c.fmt,2,local_54);
		this->dataStream[0xb] = local_54[0];
		RIFFContainer::GetInt(&local_4c.fmt,4,&local_50);
		*(int *)(this->dataStream + 0xc) = local_50;
		RIFFContainer::GetInt(&local_4c.fmt,8,&local_50);
		*(int *)(this->dataStream + 0xe) = local_50;
		RIFFContainer::GetShort(&local_4c.fmt,0xc,local_54);
		this->dataStream[0x10] = local_54[0];
		RIFFContainer::GetShort(&local_4c.fmt,0xe,local_54);
		this->dataStream[0x11] = local_54[0];
		*(uint *)(this->dataStream + 0x16) = local_4c.data.wave;
		this->waveOffset = local_4c.data.waveOffset;
		this->waveFcc = (int)this->dataStream + local_4c.data.waveOffset;
		::EmptyFunction();
		return;
		}
		
	*/
	return;
}

bool AutoClass23::ReadWavFile(TwinString* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass23::ReadWavFile(AutoClass23 *this,TwinString *fname){
		MemoryStream *pMVar1;
		undefined4 uVar2;
		size_t sVar3;
		pMVar1 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (pMVar1 == (MemoryStream *)0x0) {
		pMVar1 = (MemoryStream *)0x0;
		}
		else {
		pMVar1 = MemoryStream::Contruct2(pMVar1,0x10000,1,1);
		}
		this->stream = pMVar1;
		uVar2 = MemoryStream::OpenFile(pMVar1,fname->value,'\0');
		pMVar1 = this->stream;
		if ((char)uVar2 == '\0') {
		if (pMVar1 != (MemoryStream *)0x0) {
		(*pMVar1->vtable->Dispose)(pMVar1,1);
		}
		this->stream = (MemoryStream *)0x0;
		}
		else {
		sVar3 = (*pMVar1->vtable->GetLength)(pMVar1);
		if (0 < (int)sVar3) {
		ReadWaveHeader(this,this->stream->startPtr);
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

