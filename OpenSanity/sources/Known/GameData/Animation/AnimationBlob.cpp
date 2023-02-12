#include "headers/Known/GameData/Animation/AnimationBlob.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int AnimationBlob::CalculateAnimationLength() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall AnimationBlob::CalculateAnimationLength(AnimationBlob *this){
		PhysicalPool *pPVar1;
		uint streamLength;
		AnimationBlob **bufferOut;
		uint length;
		bool bVar2;
		bool bVar3;
		AnimationBlob *local_4;
		int _length;
		int *bufferIndex;
		local_4 = this;
		if (-1 < this->animationBuffer) {
		bufferIndex = &this->animationBuffer;
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar1,bufferIndex);
		}
		if (this->parameter != 0) {
		streamLength = this->size;
		_length = (streamLength >> 0x16) * (uint)this->parameter + (streamLength >> 0xb & 0x7ff) +(streamLength & 0x7f) * 4;
		streamLength = _length * 2;
		if (_length != 0) {
		bVar3 = false;
		bVar2 = false;
		bufferOut = &local_4;
		length = streamLength;
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar1,(int *)bufferOut,length,bVar2,bVar3);
		this->animationBuffer = (int)pPVar1->alignedStart;
		}
		return streamLength;
		}
		return 0;
		}
		
	*/
	return 0;
}

void AnimationBlob::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AnimationBlob::Write(AnimationBlob *this,MemoryStream *stream){
		int iVar1;
		uint uVar2;
		PhysicalPool *this_00;
		int *piVar3;
		(*stream->vtable->WriteInt3)(stream,this->size);
		(*stream->vtable->WriteShort2)(stream,this->parameter);
		if (this->parameter != 0) {
		uVar2 = this->size;
		iVar1 = (uVar2 >> 0x16) * (uint)this->parameter + (uVar2 >> 0xb & 0x7ff) + (uVar2 & 0x7f) * 4;
		if (iVar1 != 0) {
		piVar3 = &this->animationBuffer;
		this_00 = PhysicalPool::GetPool();
		piVar3 = PhysicalPool::GetBufferPointerByIndex(this_00,piVar3);
		(*stream->vtable->Write)(stream,(byte *)piVar3,iVar1 * 2);
		}
		}
		return;
		}
		
	*/
	return;
}

AnimationBlob* AnimationBlob::Init(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AnimationBlob * __thiscall AnimationBlob::Init(AnimationBlob *this,uint *param_1){
		int iVar1;
		byte bVar2;
		PhysicalPool *pPVar3;
		uint uVar4;
		int *piVar5;
		int *piVar6;
		uint uVar7;
		uint *bufferIndex;
		piVar6 = &this->animationBuffer;
		if (-1 < this->animationBuffer) {
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,piVar6);
		}
		uVar7 = *param_1;
		uVar4 = uVar7 >> 7 & 0xf;
		bVar2 = *(byte *)param_1;
		this->parameter = *(ushort *)(param_1 + 1);
		uVar7 = uVar7 >> 0xb & 0x7ff;
		this->size = (uVar7 << 4 | uVar4) << 7 | (uVar4 * (bVar2 & 0x7f) - uVar7) * 0x400000 |bVar2 & 0x7f;
		CalculateAnimationLength(this);
		if (this->parameter != 0) {
		uVar7 = this->size;
		iVar1 = (uVar7 >> 0x16) * (uint)this->parameter + (uVar7 >> 0xb & 0x7ff) + (uVar7 & 0x7f) * 4;
		uVar7 = iVar1 * 2;
		if (iVar1 != 0) {
		piVar6 = &this->animationBuffer;
		pPVar3 = PhysicalPool::GetPool();
		piVar5 = PhysicalPool::GetBufferPointerByIndex(pPVar3,piVar6);
		bufferIndex = param_1 + 2;
		pPVar3 = PhysicalPool::GetPool();
		piVar6 = PhysicalPool::GetBufferPointerByIndex(pPVar3,(int *)bufferIndex);
		for (uVar4 = uVar7 >> 2;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*piVar5 = *piVar6;
		piVar6 = piVar6 + 1;
		piVar5 = piVar5 + 1;
		}
		for (uVar7 = uVar7 & 3;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*(undefined *)piVar5 = *(undefined *)piVar6;
		piVar6 = (int *)((int)piVar6 + 1);
		piVar5 = (int *)((int)piVar5 + 1);
		}
		}
		}
		return this;
		}
		
	*/
	return null;
}

