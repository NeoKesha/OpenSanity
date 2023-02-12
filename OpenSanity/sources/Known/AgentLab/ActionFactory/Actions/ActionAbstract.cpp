#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionAbstract::CleanUp(ActionAbstract *this){
		ActionAbstract *this_00;
		this->vtable = (ActionAbstract_VTable *)&Action_VT_Abstract;
		this_00 = this->nextAction;
		if (this_00 != (ActionAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		return;
		}
		
	*/
	return;
}

void ActionAbstract::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAbstract::Write(ActionAbstract *this,MemoryStream *stream){
		int length;
		while( true ) {
		length = (*this->vtable->GetSize)();
		(*stream->vtable->WriteInt3)(stream,this->field1_0x4);
		if (length - 0xcU != 0) {
		(*stream->vtable->Write)(stream,(byte *)(this + 1),length - 0xcU);
		}
		if ((*(byte *)((int)&this->field1_0x4 + 3) & 1) == 0) break;
		this = this->nextAction;
		}
		return;
		}
		
	*/
	return;
}

ActionAbstract* ActionAbstract::BuildAction(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __cdecl ActionAbstract::BuildAction(MemoryStream *stream){
		ObjectBuilderStorage *this;
		ActionAbstract *action;
		int actionLength;
		ActionAbstract *actionNext;
		uint actionId;
		if (ObjectBuilderStorage == (ObjectBuilderStorage *)0x0) {
		ObjectBuilderStorage = (ObjectBuilderStorage *)VirtualPool::AllocateMemory(0x10);
		if (ObjectBuilderStorage == (ObjectBuilderStorage *)0x0) {
		ObjectBuilderStorage = (ObjectBuilderStorage *)0x0;
		}
		else {
		ObjectBuilderStorage->lastBuilder = (ObjectBuilder *)0x0;
		ObjectBuilderStorage->firstBuilder = (ObjectBuilder *)0x0;
		ObjectBuilderStorage->amount = 0;
		ObjectBuilderStorage->capacity = 0;
		}
		}
		this = ObjectBuilderStorage;
		(*stream->vtable->ReadUInt)(stream,&actionId);
		action = (ActionAbstract *)ObjectBuilderStorage::BuildObject(this,actionId & 0xffffff);
		actionLength = (*action->vtable->GetSize)();
		if (actionLength - 0xcU != 0) {
		(*stream->vtable->Read)(stream,(int *)(action + 1),actionLength - 0xcU,1);
		}
		if ((actionId & 0x1000000) == 0) {
		action->field1_0x4 = action->field1_0x4 & 0xfeffffff;
		action->nextAction = (ActionAbstract *)0x0;
		return action;
		}
		actionNext = BuildAction(stream);
		action->nextAction = actionNext;
		action->field1_0x4 =action->field1_0x4 ^((uint)(actionNext != (ActionAbstract *)0x0) << 0x18 ^ action->field1_0x4) & 0x1000000;
		return action;
		}
		
	*/
	return null;
}

void ActionAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAbstract::Dispose(ActionAbstract *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void ActionAbstract::CleanUp_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionAbstract::CleanUp(ActionAbstract *this){
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		CleanUp(this);
		return;
		}
		
	*/
	return;
}

void ActionAbstract::EmptyFunction(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAbstract::EmptyFunction(ActionAbstract *this,InstanceContext *ctx){
		return;
		}
		
	*/
	return;
}

bool ActionAbstract::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ActionAbstract::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

void ActionAbstract::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ActionAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionAbstract::Construct(ActionAbstract *this){
		this->vtable = (ActionAbstract_VTable *)&Action_VT_Abstract;
		this->nextAction = (ActionAbstract *)0x0;
		this->field1_0x4 = 0xffffff;
		return;
		}
		
	*/
	return;
}

