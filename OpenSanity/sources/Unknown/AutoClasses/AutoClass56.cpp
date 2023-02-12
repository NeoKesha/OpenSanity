#include "headers/Unknown/AutoClasses/AutoClass56.h"

#include "headers/Unknown/AutoClasses/AutoClass53.h"
#include "headers/Known/Game/Chunks/ChunkDesc.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Base.h"
void AutoClass56::WriteDataToStream(ChunkDesc* chunkDesc, UnkFamily16A* defaultRm, AutoClass53* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass56::WriteDataToStream(AutoClass56 *this,ChunkDesc *chunkDesc,UnkFamily16A *defaultRm,AutoClass53 *param_3){
		short uVar1;
		TwinString *chunkName;
		int deltaTicks;
		int i;
		uint flags;
		uint *data;
		float fVar1;
		MemoryStream stream;
		MemoryStream::Construct(&stream,this->rmDataPool,0xf000,0,1);
		if (WORLD->currentChunk == (WorldChunk *)0x0) {
		chunkName = &chunkDesc->chunkName;
		}
		else {
		chunkName = &WORLD->currentChunk->chunkName;
		}
		TwinString::Copy(&this->chunkName,chunkName->value);
		if (param_3 == (AutoClass53 *)0x0) {
		uVar1 = -1;
		}
		else {
		uVar1 = param_3->index;
		}
		this->field4_0x18 = uVar1;
		flags = this->flags ^ (chunkDesc->flags2 >> 7 ^ this->flags) & 0x7f;
		this->flags = flags;
		deltaTicks = ChunkDesc::CountSomething1(chunkDesc);
		flags = (deltaTicks << 7 ^ flags) & 0x1f80 ^ flags;
		this->flags = flags;
		deltaTicks = ChunkDesc::CountSomething2(chunkDesc);
		this->flags = (deltaTicks << 0xd ^ flags) & 0xfe000 ^ flags;
		flags = this->field1_0x4 ^((uint)*(ushort *)((int)&chunkDesc->flags + 2) ^ this->field1_0x4) & 0x1f;
		this->field1_0x4 = flags;
		flags = (*(ushort *)((int)&chunkDesc->flags + 2) ^ flags) & 0x3e0 ^ flags;
		this->field1_0x4 = flags;
		this->field1_0x4 = (*(ushort *)((int)&chunkDesc->flags + 2) ^ flags) & 0x7c00 ^ flags;
		flags = this->flags ^ (chunkDesc->flags << 0x10 ^ this->flags) & 0xf00000;
		this->flags = flags;
		flags = (chunkDesc->flags << 0x10 ^ flags) & 0xf000000 ^ flags;
		this->flags = flags;
		this->flags = (chunkDesc->flags << 0x10 ^ flags) & 0xfffffff ^ chunkDesc->flags << 0x10;
		if (chunkDesc->someTime == 0) {
		deltaTicks = 0;
		}
		else {
		deltaTicks = GlobalClock->timeArray[2].time1 - chunkDesc->someTime;
		}
		this->someTicks = chunkDesc->ticks + deltaTicks;
		data = chunkDesc->uintArray;
		i = 0x10;
		do {
		(*(stream.vtable)->Write)(&stream,(byte *)data,4);
		data = data + 1;
		i = i + -1;
		}
		 while (i != 0);
		UnkFamily16A::Write(defaultRm,&stream);
		this->field1_0x4 =this->field1_0x4 ^ ((InputController->flags >> 1 & 0xff) << 0xf ^ this->field1_0x4) & 0x8000;
		fVar1 = ::GetNum(0);
		this->field12_0x24 = fVar1;
		fVar1 = ::GetNum(2);
		this->field13_0x28 = fVar1;
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void AutoClass56::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass56::Write(AutoClass56 *this,MemoryStream *stream){
		(*stream->vtable->Write)(stream,(byte *)this,8);
		(*stream->vtable->WriteInt1)(stream,this->someTicks);
		TwinString::Write(&this->chunkName,stream);
		(*stream->vtable->WriteShort2)(stream,this->field4_0x18);
		(*stream->vtable->Write)(stream,(byte *)&this->field7_0x1c,8);
		(*stream->vtable->WriteFloat)(stream,this->field12_0x24);
		(*stream->vtable->WriteFloat)(stream,this->field13_0x28);
		(*stream->vtable->Write)(stream,(byte *)this->rmDataPool,0xf000);
		return;
		}
		
	*/
	return;
}

void AutoClass56::ReadToChunkDesc(bool flag, ChunkDesc* chunkDesc, UnkFamily16Base* level) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass56::ReadToChunkDesc(AutoClass56 *this,bool flag,ChunkDesc *chunkDesc,UnkFamily16Base *level){
		uint uVar1;
		int i;
		uint *chunkDescDataArray;
		MemoryStream stream;
		Clock *clock;
		InputController *inputController;
		inputController = InputController;
		chunkDesc->flags2 = chunkDesc->flags2 ^ (this->flags << 7 ^ chunkDesc->flags2) & 0x3f80;
		uVar1 = chunkDesc->flags ^ (this->field1_0x4 << 0x10 ^ chunkDesc->flags) & 0x1f0000;
		chunkDesc->flags = uVar1;
		uVar1 = (this->field1_0x4 << 0x10 ^ uVar1) & 0x3e00000 ^ uVar1;
		chunkDesc->flags = uVar1;
		uVar1 = (this->field1_0x4 << 0x10 ^ uVar1) & 0x7c000000 ^ uVar1;
		chunkDesc->flags = uVar1;
		uVar1 = (*(ushort *)((int)&this->flags + 2) ^ uVar1) & 0xf0 ^ uVar1;
		chunkDesc->flags = uVar1;
		uVar1 = ((uint)*(byte *)((int)&this->flags + 3) << 8 ^ uVar1) & 0xf00 ^ uVar1;
		chunkDesc->flags = uVar1;
		chunkDesc->flags = (*(ushort *)((int)&this->flags + 2) ^ uVar1) & 0xf000 ^ uVar1;
		clock = GlobalClock;
		chunkDesc->ticks = this->someTicks;
		chunkDesc->someTime = clock->timeArray[2].time1;
		if (flag != false) {
		MemoryStream::Construct(&stream,this->rmDataPool,0xf000,0,1);
		chunkDescDataArray = chunkDesc->uintArray;
		i = 0x10;
		do {
		(*(stream.vtable)->Read)(&stream,(int *)chunkDescDataArray,4,1);
		chunkDescDataArray = chunkDescDataArray + 1;
		i = i + -1;
		}
		 while (i != 0);
		UnkFamily16Base::FUN_001b9260(level,&stream);
		MemoryStream::Dispose(&stream);
		}
		if ((char)(this->field1_0x4 >> 8) < '\0') {
		chunkDescDataArray = &inputController->flags;
		*chunkDescDataArray = *chunkDescDataArray | 2;
		}
		else {
		InputController::FUN_0020a270(inputController);
		}
		SoundBufferRelated(0,this->field12_0x24,this->field12_0x24);
		SoundBufferRelated(1,this->field12_0x24,this->field12_0x24);
		SoundBufferRelated(3,this->field12_0x24,this->field12_0x24);
		SoundBufferRelated(2,this->field13_0x28,this->field13_0x28);
		return;
		}
		
	*/
	return;
}

void AutoClass56::Read(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass56::Read(AutoClass56 *this,MemoryStream *param_1){
		(*param_1->vtable->Read)(param_1,(int *)this,8,1);
		(*param_1->vtable->ReadInt2)(param_1,(int *)&this->someTicks);
		TwinString::ReadFromFile(&this->chunkName,param_1);
		(*param_1->vtable->ReadShort2)(param_1,&this->field4_0x18);
		(*param_1->vtable->Read)(param_1,&this->field7_0x1c,8,1);
		(*param_1->vtable->ReadFloat)(param_1,&this->field12_0x24);
		(*param_1->vtable->ReadFloat)(param_1,&this->field13_0x28);
		(*param_1->vtable->Read)(param_1,(int *)this->rmDataPool,0xf000,1);
		return;
		}
		
	*/
	return;
}

