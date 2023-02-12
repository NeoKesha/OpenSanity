#include "headers/Known/Sound/WaveHeader.h"

void WaveHeader::Construct1(WaveHeader* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall WaveHeader::Construct1(WaveHeader *param_1){
		param_1->streamData1 = (byte *)0x0;
		(param_1->riff).fourcc = 0;
		(param_1->riff).parentRiff = (RIFFContainer *)0x0;
		(param_1->riff).streamDataPtr = (byte *)0x0;
		(param_1->riff).waveOffset = 0;
		(param_1->riff).wave = 0;
		(param_1->riff).field5_0x14 = 0;
		(param_1->fmt).fourcc = 0;
		(param_1->fmt).parentRiff = (RIFFContainer *)0x0;
		(param_1->fmt).streamDataPtr = (byte *)0x0;
		(param_1->fmt).waveOffset = 0;
		(param_1->fmt).wave = 0;
		(param_1->fmt).field5_0x14 = 0;
		(param_1->data).fourcc = 0;
		(param_1->data).parentRiff = (RIFFContainer *)0x0;
		(param_1->data).streamDataPtr = (byte *)0x0;
		(param_1->data).waveOffset = 0;
		(param_1->data).wave = 0;
		(param_1->data).field5_0x14 = 0;
		return;
		}
		
	*/
	return;
}

uint WaveHeader::Construct2(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall WaveHeader::Construct2(WaveHeader *this,byte *param_1){
		uint uVar1;
		uint uVar2;
		uint uVar3;
		RIFFContainer *riff;
		byte *streamData;
		this->streamData1 = param_1;
		(this->riff).fourcc = 0x46464952;
		(this->riff).parentRiff = (RIFFContainer *)0x0;
		(this->riff).streamDataPtr = param_1;
		streamData = this->streamData1;
		riff = &this->riff;
		(this->fmt).fourcc = 0x20746d66;
		(this->fmt).parentRiff = riff;
		(this->fmt).streamDataPtr = streamData;
		streamData = this->streamData1;
		(this->data).fourcc = 0x61746164;
		(this->data).parentRiff = riff;
		(this->data).streamDataPtr = streamData;
		uVar1 = RIFFContainer::Check(riff);
		uVar2 = RIFFContainer::Check(&this->fmt);
		uVar3 = RIFFContainer::Check(&this->data);
		if (*(int *)((this->riff).streamDataPtr + (this->riff).waveOffset) != 0x45564157) {
		return 0;
		}
		return uVar1 & uVar2 & uVar3;
		}
		
	*/
	return 0;
}

