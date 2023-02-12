#include "headers/Known/GameData/Script/ScriptMainStateBody.h"

#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"
void ScriptMainStateBody::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMainStateBody::Construct(ScriptMainStateBody *this,MemoryStream *stream){
		PerceptAbstract *percept;
		ActionAbstract *action;
		ScriptMainStateBody *next;
		(*stream->vtable->ReadUInt)(stream,&this->flags);
		if ((this->flags & 0x400) != 0) {
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		this->stateToJump = (uint)stream;
		}
		if ((this->flags & 0x200) == 0) {
		percept = (PerceptAbstract *)0x0;
		}
		else {
		percept = PerceptAbstract::BuildPercept(stream);
		}
		this->percept = percept;
		if ((this->flags & 0xff) == 0) {
		action = (ActionAbstract *)0x0;
		}
		else {
		action = ActionAbstract::BuildAction(stream);
		}
		this->action = action;
		if ((this->flags & 0x800) != 0) {
		next = (ScriptMainStateBody *)VirtualPool::AllocateMemory(0x14);
		if (next != (ScriptMainStateBody *)0x0) {
		Construct(next,stream);
		this->next = next;
		return;
		}
		this->next = (ScriptMainStateBody *)0x0;
		return;
		}
		this->next = (ScriptMainStateBody *)0x0;
		return;
		}
		
	*/
	return;
}

void ScriptMainStateBody::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptMainStateBody * __thiscall ScriptMainStateBody::Dispose(ScriptMainStateBody *this,byte param_1){
		ActionAbstract *action;
		if (this->next != (ScriptMainStateBody *)0x0) {
		Dispose(this->next,1);
		}
		action = this->action;
		if (action != (ActionAbstract *)0x0) {
		(*action->vtable->Dispose)(action,1);
		}
		if (this->percept != (PerceptAbstract *)0x0) {
		(*(code *)*this->percept->vtable)(1);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

