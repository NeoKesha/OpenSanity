#include "headers/Known/GameData/Script/ScriptMainState.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Script/ScriptMainAgrumentsWrapper.h"
#include "headers/Known/GameData/Script/ScriptMainStateBody.h"
void ScriptMainState::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ScriptMainState::Dispose(ScriptMainState *this){
		ActionAbstract *action;
		ScriptMainAgrumentsWrapper *arguments;
		ScriptMainState *nextState;
		ScriptMainStateBody *stateBody;
		arguments = this->arguments;
		if (arguments != (ScriptMainAgrumentsWrapper *)0x0) {
		VirtualPool::FreeMemory(arguments->arguments);
		VirtualPool::FreeMemory(arguments);
		}
		stateBody = this->stateBody;
		if (stateBody != (ScriptMainStateBody *)0x0) {
		if (stateBody->next != (ScriptMainStateBody *)0x0) {
		ScriptMainStateBody::Dispose(stateBody->next,1);
		}
		action = stateBody->action;
		if (action != (ActionAbstract *)0x0) {
		(*action->vtable->Dispose)(action,1);
		}
		if (stateBody->percept != (PerceptAbstract *)0x0) {
		(*(code *)*stateBody->percept->vtable)(1);
		}
		VirtualPool::FreeMemory(stateBody);
		}
		nextState = this->nextState;
		if (nextState != (ScriptMainState *)0x0) {
		Dispose(nextState);
		VirtualPool::FreeMemory(nextState);
		}
		return;
		}
		
	*/
	return;
}

void ScriptMainState::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMainState::Construct(ScriptMainState *this,MemoryStream *stream){
		ScriptMainAgrumentsWrapper *arguments;
		ScriptMainState *this_00;
		ScriptMainStateBody *stateBody;
		char in_stack_00000008;
		(&DAT_00495d50)[DAT_004961b8] = this;
		DAT_004961b8 = DAT_004961b8 + 1;
		(*stream->vtable->ReadUInt)(stream,&this->flags);
		if ((this->flags & 0x4000) == 0) {
		LAB_001829fb:arguments = (ScriptMainAgrumentsWrapper *)0x0;
		}
		else {
		arguments = (ScriptMainAgrumentsWrapper *)VirtualPool::AllocateMemory(0xc);
		if (arguments == (ScriptMainAgrumentsWrapper *)0x0) goto LAB_001829fb;
		arguments->arguments = (byte *)0x0;
		ScriptMainAgrumentsWrapper::Construct(arguments,stream);
		}
		this->arguments = arguments;
		if ((char)(this->flags >> 8) < '\0') {
		this_00 = (ScriptMainState *)VirtualPool::AllocateMemory(0x10);
		if (this_00 != (ScriptMainState *)0x0) {
		Construct(this_00,stream);
		goto LAB_00182a24;
		}
		}
		this_00 = (ScriptMainState *)0x0;
		LAB_00182a24:this->nextState = this_00;
		if (in_stack_00000008 == '\0') {
		this->stateBody = (ScriptMainStateBody *)0x0;
		return;
		}
		if ((*(byte *)&this->flags & 0x1f) != 0) {
		stateBody = (ScriptMainStateBody *)VirtualPool::AllocateMemory(0x14);
		if (stateBody != (ScriptMainStateBody *)0x0) {
		ScriptMainStateBody::Construct(stateBody,stream);
		this->stateBody = stateBody;
		return;
		}
		}
		this->stateBody = (ScriptMainStateBody *)0x0;
		return;
		}
		
	*/
	return;
}

