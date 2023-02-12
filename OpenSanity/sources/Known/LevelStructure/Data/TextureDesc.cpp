#include "headers/Known/LevelStructure/Data/TextureDesc.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TextureDesc::ReadTextureFromStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TextureDesc::ReadTextureFromStream(TextureDesc *this,MemoryStream *stream){
		int *piVar1;
		int (*paiVar2) [5];
		uint size;
		byte *outArray;
		uint width;
		uint height;
		uint in_stack_00000008;
		uint formatId;
		int pitch;
		int *piStack4;
		width = 1 << (this->widthPower & 0x1f);
		height = 1 << (this->heightPower & 0x1f);
		paiVar2 = (int (*) [5])VirtualPool::AllocateMemory(0x14);
		this->texture = paiVar2;
		(*paiVar2)[0] = 0;
		(*paiVar2)[1] = 0;
		(*paiVar2)[2] = 0;
		(*paiVar2)[3] = 0;
		(*paiVar2)[4] = 0;
		(*stream->vtable->ReadUInt)(stream,&formatId);
		if (formatId == 2) {
		this->format = 0xf;
		}
		else {
		this->format = 6;
		}
		pitch = width * 4;
		size = _XGSetTextureHeader@36(width,height,1,0,this->format,0,this->texture,0,pitch);
		outArray = (byte *)_D3D_AllocContiguousMemory@8(size,0x80);
		D3DResource::Register((D3DResource *)this->texture,(int)outArray);
		if (formatId == 0) {
		piStack4 = (int *)_D3D_AllocContiguousMemory@8(in_stack_00000008,0x80);
		(*stream->vtable->Read)(stream,piStack4,in_stack_00000008 - 4,1);
		piVar1 = piStack4;
		_XGSwizzleRect@32(piStack4,pitch,(int *)0x0,(undefined4 *)outArray,width,height,(uint *)0x0,(undefined8 *)0x4);
		XMemFree(piVar1);
		}
		else if (formatId == 1) {
		this->format = 6;
		(*stream->vtable->Read)(stream,(int *)outArray,in_stack_00000008 - 4,1);
		}
		else if (formatId == 2) {
		this->format = 0xf;
		(*stream->vtable->Read)(stream,(int *)outArray,height * width,1);
		}
		_D3DDevice_SetTexture@8(0,(D3DTexture *)this->texture);
		return;
		}
		
	*/
	return;
}

