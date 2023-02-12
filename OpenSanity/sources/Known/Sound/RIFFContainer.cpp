#include "headers/Known/Sound/RIFFContainer.h"

uint RIFFContainer::Check() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall RIFFContainer::Check(RIFFContainer *this){
		uint uVar1;
		uint offset;
		RIFFContainer *riff;
		byte *streamData;
		riff = this->parentRiff;
		streamData = this->streamDataPtr;
		offset = 0;
		if ((riff != (RIFFContainer *)0x0) && (offset = riff->waveOffset, riff->fourcc == 0x46464952)) {
		offset = offset + 4;
		}
		uVar1 = *(uint *)(streamData + offset);
		while (this->fourcc != uVar1) {
		offset = offset + 8 + *(int *)(streamData + offset + 4);
		uVar1 = *(uint *)(streamData + offset);
		}
		this->waveOffset = offset + 8;
		this->wave = *(uint *)(streamData + offset + 4);
		this->field5_0x14 = this->field5_0x14 | 1;
		return 1;
		}
		
	*/
	return 0;
}

void RIFFContainer::GetShort(int offset, short* outVal) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall RIFFContainer::GetShort(RIFFContainer *this,int offset,short *outVal){
		*outVal = *(short *)(this->streamDataPtr + offset + this->waveOffset);
		return;
		}
		
	*/
	return;
}

void RIFFContainer::GetInt(int offset, int* outVal) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall RIFFContainer::GetInt(RIFFContainer *this,int offset,int *outVal){
		*outVal = *(int *)(this->streamDataPtr + offset + this->waveOffset);
		return;
		}
		
	*/
	return;
}

