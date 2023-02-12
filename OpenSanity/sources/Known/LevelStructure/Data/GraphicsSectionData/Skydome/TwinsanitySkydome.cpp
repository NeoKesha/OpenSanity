#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/TwinsanitySkydome.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Graphics/Assets/TwinsanityRigidModel2.h"
void TwinsanitySkydome::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkydome::Read(TwinsanitySkydome *this,MemoryStream *stream){
		TwinsanityRigidModel2 **ppTVar1;
		TwinsanityRigidModel2 *model;
		uint i;
		TwinsanitySkydome *_this;
		uint *cnt;
		_this = this;
		(*stream->vtable->ReadInt2)(stream,(int *)&_this);
		cnt = &this->cnt;
		(*stream->vtable->ReadUInt)(stream,cnt);
		ppTVar1 = (TwinsanityRigidModel2 **)VirtualPool::AllocateMemory(*cnt << 2);
		this->rigidModels = ppTVar1;
		i = 0;
		if (*cnt != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		model = (TwinsanityRigidModel2 *)(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)&stream,0);
		this->rigidModels[i] = model;
		i = i + 1;
		}
		 while (i < *cnt);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanitySkydome::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanitySkydome * __thiscall TwinsanitySkydome::Construct(TwinsanitySkydome *this,uint *param_1){
		*(undefined2 *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 & 0xfffcffff;
		this->id = *param_1;
		this->cnt = 0;
		this->rigidModels = (TwinsanityRigidModel2 **)0x0;
		return this;
		}
		
	*/
	return;
}

void TwinsanitySkydome::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanitySkydome::Dispose(TwinsanitySkydome *this){
		TwinsanityRigidModel2 *this_00;
		uint uVar1;
		uVar1 = 0;
		if (this->cnt != 0) {
		do {
		this_00 = this->rigidModels[uVar1];
		if (this_00->id == 0xffffffff) {
		TwinsanityRigidModel2::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		else {
		(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Method4)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)this_00);
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->cnt);
		}
		VirtualPool::FreeMemory(this->rigidModels);
		this->cnt = 0;
		return;
		}
		
	*/
	return;
}

