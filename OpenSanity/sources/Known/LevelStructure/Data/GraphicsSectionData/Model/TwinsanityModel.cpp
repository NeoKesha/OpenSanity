#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/TwinsanityModel.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TwinsanityModel::ReadFromStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityModel::ReadFromStream(TwinsanityModel *this,MemoryStream *stream){
		D3DVertexBuffer8 **ppDVar1;
		uint i;
		uint *puVar2;
		int **ppiVar3;
		int *arr;
		PhysicalPool *pool;
		int *piVar4;
		D3DVertexBuffer8 *vbuffer;
		uint *puVar5;
		TwinsanityModel **bufferOut;
		bool bVar6;
		bool bVar7;
		TwinsanityModel *pTStack4;
		uint vbLength;
		int *bufferIndex;
		uint *cnt;
		MemoryStream *_stream;
		_stream = stream;
		cnt = &this->submodels;
		pTStack4 = this;
		(*stream->vtable->ReadUInt)(stream,cnt);
		ppDVar1 = (D3DVertexBuffer8 **)VirtualPool::AllocateMemory(*cnt << 2);
		this->vertexBuffer = ppDVar1;
		i = 0;
		if (*cnt != 0) {
		do {
		this->vertexBuffer[i] = (D3DVertexBuffer8 *)0x0;
		i = i + 1;
		}
		 while (i < *cnt);
		}
		puVar2 = (uint *)VirtualPool::AllocateMemory(*cnt << 2);
		this->someCnt2 = puVar2;
		ppiVar3 = (int **)VirtualPool::AllocateMemory(*cnt << 2);
		i = *cnt;
		this->dataArray1 = ppiVar3;
		puVar2 = (uint *)VirtualPool::AllocateMemory(i * 4 + 4);
		if (puVar2 == (uint *)0x0) {
		puVar2 = (uint *)0x0;
		}
		else {
		*puVar2 = i;
		puVar2 = puVar2 + 1;
		puVar5 = puVar2;
		if (-1 < (int)(i - 1)) {
		for (;
		 i != 0;
		 i = i - 1) {
		*puVar5 = 0xffffffff;
		puVar5 = puVar5 + 1;
		}
		}
		}
		this->field9_0x24 = (int *)puVar2;
		puVar2 = (uint *)VirtualPool::AllocateMemory(*cnt << 2);
		this->someCnt1 = puVar2;
		puVar2 = (uint *)VirtualPool::AllocateMemory(*cnt << 2);
		this->vertexBufferLength = puVar2;
		puVar2 = (uint *)VirtualPool::AllocateMemory(*cnt << 2);
		this->someLength = puVar2;
		stream = (MemoryStream *)0x0;
		if (*cnt != 0) {
		do {
		(*_stream->vtable->ReadUInt)(_stream,this->someCnt1 + (int)stream);
		(*_stream->vtable->ReadUInt)(_stream,this->vertexBufferLength + (int)stream);
		(*_stream->vtable->ReadUInt)(_stream,this->someCnt2 + (int)stream);
		arr = (int *)VirtualPool::AllocateMemory(this->someCnt2[(int)stream] << 2);
		this->dataArray1[(int)stream] = arr;
		(*_stream->vtable->Read)(_stream,this->dataArray1[(int)stream],this->someCnt2[(int)stream] << 2,1);
		vbLength = this->vertexBufferLength[(int)stream];
		bVar7 = true;
		bVar6 = false;
		bufferOut = &pTStack4;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,(int *)bufferOut,vbLength,bVar6,bVar7);
		this->field9_0x24[(int)stream] = (int)pool->alignedStart;
		bufferIndex = this->field9_0x24 + (int)stream;
		pool = PhysicalPool::GetPool();
		piVar4 = PhysicalPool::GetBufferPointerByIndex(pool,bufferIndex);
		(*_stream->vtable->Read)(_stream,piVar4,this->vertexBufferLength[(int)stream],1);
		vbuffer = (D3DVertexBuffer8 *)VirtualPool::AllocateMemory(0xc);
		this->vertexBuffer[(int)stream] = vbuffer;
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[(int)stream],0,0,0,this->vertexBuffer[(int)stream],0);
		D3DResource::Register((D3DResource *)this->vertexBuffer[(int)stream],(int)piVar4);
		(*_stream->vtable->ReadUInt)(_stream,this->someLength + (int)stream);
		if (this->someLength[(int)stream] != 0) {
		piVar4 = (int *)VirtualPool::AllocateMemory(this->someLength[(int)stream]);
		(*_stream->vtable->Read)(_stream,piVar4,this->someLength[(int)stream],1);
		VirtualPool::FreeMemory(piVar4);
		}
		stream = (MemoryStream *)((int)&stream->vtable + 1);
		}
		 while (stream < (MemoryStream *)this->submodels);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityModel::Register(int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityModel::Register(TwinsanityModel *this,int index){
		PhysicalPool *this_00;
		int *piVar1;
		_D3DDevice_SetStreamSource@12(0,(D3DVertexBuffer8 *)0x0,0);
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[index],0,0,0,this->vertexBuffer[index],0);
		piVar1 = this->field9_0x24 + index;
		this_00 = PhysicalPool::GetPool();
		piVar1 = PhysicalPool::GetBufferPointerByIndex(this_00,piVar1);
		D3DResource::Register((D3DResource *)this->vertexBuffer[index],(int)piVar1);
		return;
		}
		
	*/
	return;
}

void TwinsanityModel::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityModel::Dispose(TwinsanityModel *this){
		PhysicalPool *pool;
		uint uVar1;
		int *ptr;
		_D3DDevice_SetStreamSource@12(0,(D3DVertexBuffer8 *)0x0,0);
		uVar1 = 0;
		if (this->submodels != 0) {
		do {
		VirtualPool::FreeMemory(this->vertexBuffer[uVar1]);
		VirtualPool::FreeMemory(this->dataArray1[uVar1]);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->submodels);
		}
		uVar1 = 0;
		if (this->submodels != 0) {
		do {
		ptr = this->field9_0x24 + uVar1;
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,ptr);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->submodels);
		}
		if (this->field9_0x24 != (int *)0x0) {
		VirtualPool::FreeMemory(this->field9_0x24 + -1);
		}
		VirtualPool::FreeMemory(this->someCnt1);
		VirtualPool::FreeMemory(this->vertexBufferLength);
		VirtualPool::FreeMemory(this->someLength);
		VirtualPool::FreeMemory(this->vertexBuffer);
		VirtualPool::FreeMemory(this->someCnt2);
		VirtualPool::FreeMemory(this->dataArray1);
		return;
		}
		
	*/
	return;
}

