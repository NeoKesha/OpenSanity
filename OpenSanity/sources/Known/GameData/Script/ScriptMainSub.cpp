#include "headers/Known/GameData/Script/ScriptMainSub.h"

#include "headers/Known/GameData/Script/ScriptMainState.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ScriptMainSub::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMainSub::Write(ScriptMainSub *this,MemoryStream *stream){
		ScriptMainAgrumentsWrapper *pSVar1;
		ScriptMainState *pSVar2;
		uint uVar3;
		uint value;
		bool bVar4;
		pSVar2 = this->firstState;
		value = 0;
		uVar3 = 0;
		if (pSVar2 != (ScriptMainState *)0x0) {
		do {
		bVar4 = pSVar2 == this->currentState;
		pSVar2 = pSVar2->nextState;
		if (bVar4) {
		uVar3 = value;
		}
		value = value + 1;
		}
		 while (pSVar2 != (ScriptMainState *)0x0);
		}
		DAT_004961b8 = 0;
		(*stream->vtable->WriteInt3)(stream,this->field0_0x0);
		TwinString::Write(&this->name,stream);
		(*stream->vtable->WriteInt3)(stream,value);
		(*stream->vtable->WriteInt3)(stream,uVar3);
		pSVar2 = this->firstState;
		(&DAT_00495d50)[DAT_004961b8] = pSVar2;
		DAT_004961b8 = DAT_004961b8 + 1;
		(*stream->vtable->WriteInt3)(stream,pSVar2->flags);
		if ((pSVar2->flags & 0x4000) != 0) {
		pSVar1 = pSVar2->arguments;
		(*stream->vtable->WriteInt3)(stream,pSVar1->flags);
		(*stream->vtable->WriteInt3)(stream,pSVar1->unkInt);
		uVar3 = (pSVar1->flags & 0xff) + (uint)*(byte *)((int)&pSVar1->flags + 1) * 4;
		if (uVar3 != 0) {
		(*stream->vtable->Write)(stream,pSVar1->arguments,uVar3);
		}
		}
		if ((char)(pSVar2->flags >> 8) < '\0') {
		FUN_00184c20(stream,pSVar2->nextState);
		}
		for (pSVar2 = this->firstState;
		 pSVar2 != (ScriptMainState *)0x0;
		 pSVar2 = pSVar2->nextState) {
		if ((*(byte *)&pSVar2->flags & 0x1f) != 0) {
		FUN_00180ae0(pSVar2->stateBody,(int *)stream);
		}
		}
		return;
		}
		
	*/
	return;
}

void ScriptMainSub::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMainSub::Read(ScriptMainSub *this,MemoryStream *stream){
		ScriptMainState *state;
		ScriptMainStateBody *stateBody;
		MemoryStream *local_8;
		uint stateAmount;
		DAT_004961b8 = 0;
		local_8 = (MemoryStream *)0x0;
		(*stream->vtable->ReadUInt)(stream,&this->field0_0x0);
		TwinString::ReadFromFile(&this->name,stream);
		(*stream->vtable->ReadUInt)(stream,&stateAmount);
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		state = (ScriptMainState *)VirtualPool::AllocateMemory(0x10);
		if (state == (ScriptMainState *)0x0) {
		state = (ScriptMainState *)0x0;
		}
		else {
		ScriptMainState::Construct(state,stream);
		}
		this->currentState = (ScriptMainState *)0x0;
		this->firstState = state;
		for (;
		 state != (ScriptMainState *)0x0;
		 state = state->nextState) {
		if (((*(byte *)&state->flags & 0x1f) == 0) ||(stateBody = (ScriptMainStateBody *)VirtualPool::AllocateMemory(0x14),stateBody == (ScriptMainStateBody *)0x0)) {
		stateBody = (ScriptMainStateBody *)0x0;
		}
		else {
		ScriptMainStateBody::Construct(stateBody,stream);
		}
		state->stateBody = stateBody;
		for (;
		 stateBody != (ScriptMainStateBody *)0x0;
		 stateBody = stateBody->next) {
		if ((stateBody->flags & 0x400) != 0) {
		stateBody->stateToJump = (&DAT_00495d50)[stateBody->stateToJump];
		}
		}
		if (local_8 == stream) {
		this->currentState = state;
		}
		local_8 = (MemoryStream *)((int)&local_8->vtable + 1);
		}
		return;
		}
		
	*/
	return;
}

