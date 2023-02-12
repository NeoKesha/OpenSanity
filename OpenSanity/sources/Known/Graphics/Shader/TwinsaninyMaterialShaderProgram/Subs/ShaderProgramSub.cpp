#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/Subs/ShaderProgramSub.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Animation/AnimationBlob.h"
void ShaderProgramSub::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramSub * __fastcall ShaderProgramSub::Construct(ShaderProgramSub *this){
		(this->blob).animationBuffer = -1;
		(this->blob).size = 0;
		(this->blob).parameter = 0;
		*(undefined2 *)&this->field0_0x0 = 0;
		this->animArray = (AnimationBlob (*) [5])0x0;
		*(undefined4 *)&this->field_0x14 = 0;
		*(undefined4 *)&this->field_0x18 = 0;
		this->time = 0;
		this->field0_0x0 = this->field0_0x0 & 0xffe0ffff;
		*(undefined4 *)&this->field_0x24 = 0;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramSub::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramSub::Write(ShaderProgramSub *this,MemoryStream *stream){
		(*stream->vtable->Write)(stream,(byte *)this,4);
		AnimationBlob::Write(&this->blob,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramSub::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x001fb061)  WARNING: Removing unreachable block (ram,0x001fb079) void __thiscall ShaderProgramSub::Read(ShaderProgramSub *this,MemoryStream *stream){
		AnimationBlob *this_00;
		uint length;
		PhysicalPool *pool;
		AnimationBlob (*animArray) [5];
		long lVar1;
		int *animBuffer;
		(*stream->vtable->Read)(stream,&this->field0_0x0,4,1);
		this_00 = &this->blob;
		(*stream->vtable->ReadUInt)(stream,&this_00->size);
		(*stream->vtable->ReadShort2)(stream,(short *)&(this->blob).parameter);
		length = AnimationBlob::CalculateAnimationLength(this_00);
		if (length != 0) {
		animBuffer = &(this->blob).animationBuffer;
		pool = PhysicalPool::GetPool();
		animBuffer = PhysicalPool::GetBufferPointerByIndex(pool,animBuffer);
		(*stream->vtable->Read)(stream,animBuffer,length,1);
		}
		animArray = (AnimationBlob (*) [5])VirtualPool::AllocateMemory(0x14);
		if (animArray == (AnimationBlob (*) [5])0x0) {
		animArray = (AnimationBlob (*) [5])0x0;
		}
		else {
		(*animArray)[0].size = (uint)this_00;
		}
		this->animArray = animArray;
		lVar1 = __ftol2(((float)(this->field0_0x0 & 0xffff) /(float)((uint)this->field0_0x0 >> 0x10 & 0x1f)) * TicksPerTime);
		this->time = lVar1;
		return;
		}
		
	*/
	return;
}

