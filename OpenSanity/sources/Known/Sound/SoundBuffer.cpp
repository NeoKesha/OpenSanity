#include "headers/Known/Sound/SoundBuffer.h"

void SoundBuffer::FUN_0012e470(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SoundBuffer::FUN_0012e470(SoundBuffer *this,uint param_1){
		DSDevice *pDVar1;
		undefined4 local_2c;
		undefined4 local_28;
		undefined4 local_24;
		undefined *local_20;
		undefined2 local_1c;
		DSBUFFERDESC desc;
		desc.format = (undefined *)&local_2c;
		local_2c = 0x10001;
		desc.mixBins = (undefined *)0x0;
		desc.flags = param_1 | 0x40000;
		local_28 = 0x5622;
		local_1c = 0;
		local_20 = &UNK_00100002;
		local_24 = 0xac44;
		desc.inputMixBin = 0;
		desc.size = 0x18;
		desc.bufferBytes = 0;
		pDVar1 = GetDSDevice();
		_IDirectSound_CreateSoundBuffer@16((int)pDVar1->dsInterface,&desc,this);
		this->soundBufferFlags = desc.flags;
		return;
		}
		
	*/
	return;
}

