#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"

#include "headers/DirectX/Resource/D3DTexture.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TwinsanityTexture::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityTexture::Dispose(TwinsanityTexture *this){
		uint *local_8;
		void *local_4;
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		_D3DTexture_LockRect@20(this->d3dTexture,0,&local_8,(int *)0x0,(uint *)&DAT_000000a0);
		XMemFree(local_4);
		if (this->d3dTexture != (D3DTexture *)0x0) {
		VirtualPool::FreeMemory(this->d3dTexture);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityTexture::FreeTexture() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityTexture::FreeTexture(TwinsanityTexture *this){
		D3DLOCKED_RECT local_8;
		if (this->id == 0xffffffff) {
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		_D3DTexture_LockRect@20(this->d3dTexture,0,(uint **)&local_8,(int *)0x0,(uint *)&DAT_000000a0);
		XMemFree(local_8.bits);
		if (this->d3dTexture != (D3DTexture *)0x0) {
		VirtualPool::FreeMemory(this->d3dTexture);
		}
		VirtualPool::FreeMemory(this);
		return;
		}
		(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Method4)(&ENV_CLASS_183_SECTION_TEXTURES.parent,(undefined *)this);
		return;
		}
		
	*/
	return;
}

void TwinsanityTexture::ReadFromStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityTexture::ReadFromStream(TwinsanityTexture *this,MemoryStream *stream){
		int aiStack132 [32];
		int local_4;
		local_4 = SECURITY_COOKIE;
		(*stream->vtable->ReadInt2)(stream,&this->size);
		(*stream->vtable->Read)(stream,(int *)&this->field_0xc,0x68,1);
		this->field92_0x6c = 0;
		this->field94_0x72 = 0;
		(*stream->vtable->Read)(stream,aiStack132,0x18,1);
		TextureDesc::ReadTextureFromStream((TextureDesc *)&this->field_0xc,stream);
		@__security_check_cookie@4(local_4);
		return;
		}
		
	*/
	return;
}

void TwinsanityTexture::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityTexture::Write(TwinsanityTexture *this,MemoryStream *stream){
		int iVar1;
		uint *puStack140;
		byte *pbStack136;
		byte abStack132 [128];
		int local_4;
		local_4 = SECURITY_COOKIE;
		(*stream->vtable->WriteInt1)(stream,this->size);
		(*stream->vtable->Write)(stream,&this->field_0xc,0x68);
		(*stream->vtable->Write)(stream,abStack132,0x18);
		iVar1 = this->size;
		(*stream->vtable->WriteInt3)(stream,1);
		_D3DTexture_LockRect@20(this->d3dTexture,0,&puStack140,(int *)0x0,(uint *)&DAT_000000a0);
		(*stream->vtable->Write)(stream,pbStack136,iVar1 - 0x80);
		@__security_check_cookie@4(local_4);
		return;
		}
		
	*/
	return;
}

