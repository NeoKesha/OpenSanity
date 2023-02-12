#include "headers/Known/Graphics/VideoPlayer/VideoPlayer.h"
#include "headers/Global.h"

VideoPlayer::VideoPlayer() : VideoPlayerAbstract() {
	void* pointer;
	this->field1_0x1c = null;
	this->field2_0x20 = null;
	this->field3_0x24 = 0;
	this->field4_0x28 = 0;
	this->res1 = null;
	this->res2 = null;
	this->field7_0x34 = (void*)0x0;
	this->field20_0x68 = 0;
	this->field12_0x48 = 0;
	this->field13_0x4c = 0;
	this->field14_0x50 = 0;
	this->field15_0x54 = 0;
	this->field16_0x58 = 0;
	this->field17_0x5c = 0;
	this->width = 0;
	this->height = 0;
	this->field8_0x38 = 0;
	this->field9_0x3c = 0;
	this->field10_0x40 = 0;
	this->field11_0x44 = 0;
	
	Global* GLOBAL = Global::Get();
	GLOBAL->D3D_DEVICE->CreateImageSurface(640, 480, D3DFORMAT::D3DFMT_X8R8G8B8, &this->fullScreenTexture1);
	GLOBAL->D3D_DEVICE->CreateImageSurface(640, 480, D3DFORMAT::D3DFMT_X8R8G8B8, &this->fullScreenTexture2);
}

bool VideoPlayer::SetVideoInfo(char* fname, uint audioTrackIndex, byte param_3, uint param_4, uint param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall VideoPlayer::SetVideoInfo(VideoPlayer *this,char *fname,uint audioTrackIndex,byte param_3,undefined4 param_4,undefined4 param_5){
		if (((this->parent).flags & 0xf000) == 0) {
		TwinString::Copy(&(this->parent).fmvName,fname);
		*(undefined4 *)&(this->parent).field_0x8 = param_4;
		*(undefined4 *)&(this->parent).field_0xc = param_5;
		(this->parent).flags =(param_3 & 1 | 4) << 6 | (this->parent).flags & 0xfffff180 | audioTrackIndex & 0x3f;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool VideoPlayer::FUN_002097f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall VideoPlayer::FUN_002097f0(VideoPlayer *this){
		uint uVar1;
		uVar1 = (this->parent).flags;
		if ((uVar1 & 0xf000) == 0x2000) {
		(this->parent).flags = uVar1 & 0xfffff3ff | 0x300;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool VideoPlayer::NextFrame() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall VideoPlayer::NextFrame(VideoPlayer *this){
		bool bVar1;
		undefined3 extraout_var;
		if ((this->field20_0x68 != 2) && (this->field20_0x68 != 3)) {
		if (this->field7_0x34 != (void *)0x0) {
		bVar1 = _D3DDevice_GetOverlayUpdateStatus@0();
		if (CONCAT31(extraout_var,bVar1) != 0) {
		this->res2 = this->res1;
		this->res1 = (D3DSurfaceResource *)this->field7_0x34;
		this->field7_0x34 = (void *)0x0;
		}
		}
		_XMVDecoder_GetNextFrame@16(this->field1_0x1c,(uint *)this->res2,(int *)&this->field20_0x68,(uint *)0x0);
		if (this->field20_0x68 == 1) {
		_D3DDevice_UpdateOverlay@20((int)this->res2,&this->field12_0x48,&this->field16_0x58,0,0);
		this->field7_0x34 = this->res2;
		this->res2 = (D3DSurfaceResource *)0x0;
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool VideoPlayer::InitVideo() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall VideoPlayer::InitVideo(VideoPlayer *this){
		ulonglong **ppuVar1;
		undefined4 *puVar2;
		int **ppiVar3;
		TwinString *pTVar4;
		uint uVar5;
		int iVar6;
		D3DSurfaceResource *puVar7;
		D3DSurfaceResource *pDVar7;
		bool bVar8;
		TwinString fname;
		TwinString local_c;
		TwinString::Set(&fname,"d:\\");
		pTVar4 = TwinString::Concatenate(&(this->parent).fmvName,&local_c,".xmv");
		if (pTVar4->strLength != 0) {
		TwinString::Append(&fname,pTVar4->value);
		}
		TwinString::Dispose(&local_c);
		ppuVar1 = &this->field1_0x1c;
		_XMVDecoder_CreateDecoderForFile@12(0,fname.value,(int *)ppuVar1);
		if (*ppuVar1 == (ulonglong *)0x0) {
		TwinString::Dispose(&fname);
		return false;
		}
		puVar2 = &this->field8_0x38;
		_XMVDecoder_GetVideoDescriptor@8((int)*ppuVar1,puVar2);
		if (this->field11_0x44 != 0) {
		uVar5 = _XGetLanguage@0();
		switch(uVar5) {
		default:uVar5 = 0;
		break;
		case 3:uVar5 = 1;
		break;
		case 4:uVar5 = 2;
		break;
		case 6:uVar5 = 3;
		}
		if (this->field11_0x44 - 1 < uVar5) {
		uVar5 = 0;
		}
		ppiVar3 = &this->field2_0x20;
		*ppiVar3 = (int *)0x0;
		_XMVDecoder_EnableAudioStream@20((int)*ppuVar1,uVar5,0,(undefined *)0x0,ppiVar3);
		::GetNum(0);
		iVar6 = FUN_00209120();
		if (*ppiVar3 != (int *)0x0) {
		DSOUND::IDirectSoundStream_SetVolume((int)*ppiVar3,iVar6);
		DSOUND::IDirectSoundStream_SetHeadroom((int)*ppiVar3,0);
		}
		}
		puVar7 = (D3DSurfaceResource *)VirtualPool::AllocateMemory(0x18);
		this->res1 = puVar7;
		_XGSetSurfaceHeader@24(*puVar2,this->field9_0x3c,0x24,puVar7,0,*puVar2 * 4);
		pDVar7 = (D3DSurfaceResource *)VirtualPool::AllocateMemory(0x18);
		this->res2 = pDVar7;
		_XGSetSurfaceHeader@24(*puVar2,this->field9_0x3c,0x24,pDVar7,0,*puVar2 * 4);
		D3DResource::Register((D3DResource *)this->res1,(int)this->fullScreenTexture1);
		D3DResource::Register((D3DResource *)this->res2,(int)this->fullScreenTexture2);
		_D3DDevice_Swap@4(0);
		_D3DDevice_EnableOverlay@4();
		bVar8 = IS_WIDESCREEN != false;
		this->width = 0x280;
		this->field16_0x58 = 0;
		this->field13_0x4c = 0;
		this->field12_0x48 = 0;
		this->field14_0x50 = *puVar2;
		if (bVar8) {
		this->field17_0x5c = 0;
		this->field15_0x54 = this->field9_0x3c;
		this->height = 0x1e0;
		TwinString::Dispose(&fname);
		return true;
		}
		iVar6 = this->field9_0x3c;
		uVar5 = 0x1e0U - iVar6 >> 1;
		this->field15_0x54 = iVar6;
		this->height = iVar6 + uVar5;
		this->field17_0x5c = uVar5;
		TwinString::Dispose(&fname);
		return true;
		}
		
	*/
	return false;
}

void VideoPlayer::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	VideoPlayer * __thiscall VideoPlayer::Dispose(VideoPlayer *this,byte flag){
		VideoPlayerAbstract::Dispose(&this->parent);
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool VideoPlayer::ProcessVideoPlayerFSM() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall VideoPlayer::ProcessVideoPlayerFSM(VideoPlayer *this){
		uint *puVar1;
		uint uVar2;
		bool bVar3;
		int iVar4;
		VideoController *videoStateFlags;
		uVar2 = (this->parent).flags;
		if ((uVar2 & 0xf00) != 0x400) {
		(this->parent).flags = (uVar2 & 0xf00 | 0x40) << 4 | uVar2 & 0xffff04ff;
		}
		videoStateFlags = (VideoController *)(this->parent).flags;
		switch((uint)videoStateFlags >> 0xc & 0xf) {
		default:goto switchD_002096f2_caseD_0;
		case 1:VideoController::Pause(videoStateFlags);
		DAT_004a7a7c = 1;
		GameReaderStorage::ReadStuff();
		iVar4 = (*((this->parent).vtable)->InitVideo)(&this->parent);
		if ((char)iVar4 != '\0') {
		(this->parent).flags = (this->parent).flags & 0xffff2fff | 0x2000;
		return true;
		}
		puVar1 = &(this->parent).flags;
		*puVar1 = *puVar1 & 0xffff0fff;
		break;
		case 2:bVar3 = (*((this->parent).vtable)->NextFrame)(&this->parent);
		if (bVar3 != false) {
		return true;
		}
		puVar1 = &(this->parent).flags;
		*puVar1 = *puVar1 & 0xffff0fff;
		(*((this->parent).vtable)->CleanUp)(&this->parent);
		break;
		case 3:(this->parent).flags = (uint)videoStateFlags & 0xfffff0ff;
		(*((this->parent).vtable)->CleanUp)(&this->parent);
		}
		DAT_004a7a7c = 2;
		SOME_CNT = 0;
		switchD_002096f2_caseD_0:return false;
		}
		
	*/
	return false;
}

int VideoPlayer::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall VideoPlayer::CleanUp(VideoPlayer *this){
		int *piVar1;
		int this_00;
		_D3DDevice_Clear@24(0,(undefined *)0x0,0xf0,(Color)0x0,0.0);
		_D3DDevice_Swap@4(0);
		_D3DDevice_BlockUntilVerticalBlank@0();
		_D3DDevice_Clear@24(0,(undefined *)0x0,0xf0,(Color)0x0,0.0);
		_D3DDevice_Swap@4(0);
		_D3DDevice_BlockUntilVerticalBlank@0();
		_D3DDevice_EnableOverlay@4();
		if (this->field1_0x1c != (ulonglong *)0x0) {
		_XMVDecoder_CloseDecoder@4(this_00,(uint)this->field1_0x1c);
		}
		if (this->res1 != (D3DSurfaceResource *)0x0) {
		VirtualPool::FreeMemory(this->res1);
		}
		if (this->res2 != (D3DSurfaceResource *)0x0) {
		VirtualPool::FreeMemory(this->res2);
		}
		if (this->field7_0x34 != (void *)0x0) {
		VirtualPool::FreeMemory(this->field7_0x34);
		}
		piVar1 = this->field2_0x20;
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 4))(piVar1);
		}
		this->field2_0x20 = (int *)0x0;
		this->field1_0x1c = (ulonglong *)0x0;
		this->res1 = (D3DSurfaceResource *)0x0;
		this->res2 = (D3DSurfaceResource *)0x0;
		this->field7_0x34 = (void *)0x0;
		this->field20_0x68 = 0;
		this->field12_0x48 = 0;
		this->field13_0x4c = 0;
		this->field14_0x50 = 0;
		this->field15_0x54 = 0;
		this->field16_0x58 = 0;
		this->field17_0x5c = 0;
		this->width = 0;
		this->height = 0;
		this->field8_0x38 = 0;
		this->field9_0x3c = 0;
		this->field10_0x40 = 0;
		this->field11_0x44 = 0;
		return 1;
		}
		
	*/
	return 0;
}

void VideoPlayer::Swap() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void VideoPlayer::Swap(void){
		_D3DDevice_Swap@4(0);
		return;
		}
		
	*/
	return;
}

void VideoPlayer::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void VideoPlayer::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void VideoPlayer::EmptyFunction_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void VideoPlayer::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

