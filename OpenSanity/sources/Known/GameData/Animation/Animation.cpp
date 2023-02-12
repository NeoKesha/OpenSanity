#include "headers/Known/GameData/Animation/Animation.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Animation::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Animation * __fastcall Animation::Construct(Animation *this){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		this->index = 0xffffffff;
		(this->blob1).animationBuffer = -1;
		(this->blob1).size = 0;
		(this->blob1).parameter = 0;
		(this->blob2).animationBuffer = -1;
		(this->blob2).size = 0;
		(this->blob2).parameter = 0;
		this->flags = 0;
		return this;
		}
		
	*/
	return;
}

void Animation::DisposeBlobs() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Animation::DisposeBlobs(Animation *this){
		PhysicalPool *pPVar1;
		int *piVar2;
		piVar2 = &(this->blob2).animationBuffer;
		if (-1 < (this->blob2).animationBuffer) {
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar1,piVar2);
		}
		piVar2 = &(this->blob1).animationBuffer;
		if (-1 < (this->blob1).animationBuffer) {
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar1,piVar2);
		}
		return;
		}
		
	*/
	return;
}

void Animation::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Animation::Read(Animation *this,MemoryStream *stream){
		uint bufferLength;
		PhysicalPool *pool;
		int *piVar1;
		int *bufferIndex1;
		int *bufferIndex2;
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->flags);
		(*stream->vtable->ReadUInt)(stream,&(this->blob1).size);
		(*stream->vtable->ReadShort2)(stream,(short *)&(this->blob1).parameter);
		bufferLength = AnimationBlob::CalculateAnimationLength(&this->blob1);
		if (bufferLength != 0) {
		bufferIndex1 = &(this->blob1).animationBuffer;
		pool = PhysicalPool::GetPool();
		piVar1 = PhysicalPool::GetBufferPointerByIndex(pool,bufferIndex1);
		(*stream->vtable->Read)(stream,piVar1,bufferLength,1);
		}
		(*stream->vtable->ReadUInt)(stream,&(this->blob2).size);
		(*stream->vtable->ReadShort2)(stream,(short *)&(this->blob2).parameter);
		bufferLength = AnimationBlob::CalculateAnimationLength(&this->blob2);
		if (bufferLength != 0) {
		bufferIndex2 = &(this->blob2).animationBuffer;
		pool = PhysicalPool::GetPool();
		piVar1 = PhysicalPool::GetBufferPointerByIndex(pool,bufferIndex2);
		(*stream->vtable->Read)(stream,piVar1,bufferLength,1);
		}
		return;
		}
		
	*/
	return;
}

void Animation::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Animation::Write(Animation *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->flags);
		AnimationBlob::Write(&this->blob1,stream);
		AnimationBlob::Write(&this->blob2,stream);
		return;
		}
		
	*/
	return;
}

void Animation::Construct_4(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Animation * __thiscall Animation::Construct(Animation *this,MemoryStream *stream){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->index = 0xffffffff;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		(this->blob1).animationBuffer = -1;
		(this->blob1).size = 0;
		(this->blob1).parameter = 0;
		(this->blob2).animationBuffer = -1;
		(this->blob2).size = 0;
		(this->blob2).parameter = 0;
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

