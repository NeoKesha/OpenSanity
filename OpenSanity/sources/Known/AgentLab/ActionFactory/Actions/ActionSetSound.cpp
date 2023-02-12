#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetSound.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetSound::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetSound::Dispose(ActionSetSound *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetSound::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetSound * __fastcall ActionSetSound::Construct(ActionSetSound *this){
		float fVar1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetSound;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		fVar1 = FLOAT_0038639c;
		this->unlabelled12 = this->unlabelled12 & 0xfffffcffU | 0xff;
		this->unlabelled24 = (int)fVar1;
		this->unlabelled36 = this->unlabelled36 & 0xfffffffe;
		return this;
		}
		
	*/
	return;
}

int ActionSetSound::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetSound::GetSize(void){
		return 0x28;
		}
		
	*/
	return 0;
}

void ActionSetSound::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetSound::UnkMethod(ActionSetSound *this,int *param_1){
		float fVar1;
		ushort uVar2;
		float fVar3;
		char cVar4;
		ushort *puVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		while (cVar4 == '\0') {
		puVar5 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		fVar3 = FLOAT_00386394;
		uVar2 = *puVar5;
		if (uVar2 < 0x120) {
		if (uVar2 == 0x11f) {
		this->unlabelled24 = *(int *)(puVar5 + 2);
		}
		else if (uVar2 == 0x2f) {
		fVar1 = *(float *)(puVar5 + 2);
		this->unlabelled16 = (int)fVar1;
		this->unlabelled12 =this->unlabelled12 ^ ((uint)(fVar3 < fVar1) << 8 ^ this->unlabelled12) & 0x100;
		}
		else if (uVar2 == 0x11e) {
		fVar1 = *(float *)(puVar5 + 2);
		this->unlabelled20 = (int)fVar1;
		this->unlabelled12 =this->unlabelled12 ^ ((uint)(fVar3 < fVar1) << 9 ^ this->unlabelled12) & 0x200;
		}
		}
		else if ((uVar2 == 0xffff) && (*(char *)(puVar5 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar5 + 2)) {
		case 0xfe:*(undefined *)&this->unlabelled12 = 0;
		break;
		case 0xff:*(undefined *)&this->unlabelled12 = 1;
		break;
		case 0x100:*(undefined *)&this->unlabelled12 = 2;
		break;
		case 0x101:*(undefined *)&this->unlabelled12 = 3;
		break;
		case 0x102:*(undefined *)&this->unlabelled12 = 4;
		break;
		case 0x103:*(undefined *)&this->unlabelled12 = 5;
		break;
		case 0x104:*(undefined *)&this->unlabelled12 = 6;
		break;
		case 0x105:*(undefined *)&this->unlabelled12 = 7;
		break;
		case 0x106:*(undefined *)&this->unlabelled12 = 8;
		break;
		case 0x10a:this->unlabelled36 = this->unlabelled36 | 1;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetSound::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetSound::ExecuteFromCallContext(ActionSetSound *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		ChunkData *this_00;
		this_00 = (((((ctx->parent).ctx)->parent).ctx)->parent).chunkData;
		if (this_00 != (ChunkData *)0x0) {
		if ((*(byte *)&this->unlabelled36 & 1) != 0) {
		FUN_00138590((int)this_00,(uint *)&this->unlabelled12);
		return;
		}
		FUN_00138530((int)this_00,(uint *)&this->unlabelled12);
		}
		return;
		}
		
	*/
	return;
}

