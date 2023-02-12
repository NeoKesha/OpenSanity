#include "headers/Known/GameData/GameObject/GameObjectScriptPack.h"

#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstance.h"
void GameObjectScriptPack::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameObjectScriptPack::Construct(GameObjectScriptPack *this){
		this->actionList = (ActionAbstract *)0x0;
		this->cnt = 0;
		return;
		}
		
	*/
	return;
}

void GameObjectScriptPack::Execute(InstanceNodeInstance* node) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectScriptPack::Execute(GameObjectScriptPack *this,InstanceNodeInstance *node){
		ActionAbstract *this_00;
		for (this_00 = this->actionList;
		 this_00 != (ActionAbstract *)0x0;
		 this_00 = this_00->nextAction){
		(*this_00->vtable->Execute)(this_00,(InstanceContext *)node);
		}
		return;
		}
		
	*/
	return;
}

void GameObjectScriptPack::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectScriptPack::Read(GameObjectScriptPack *this,MemoryStream *stream){
		ActionAbstract *action;
		(*stream->vtable->ReadUInt)(stream,(uint *)this);
		if ((this->cnt & 0xffU) != 0) {
		action = ActionAbstract::BuildAction(stream);
		this->actionList = action;
		}
		return;
		}
		
	*/
	return;
}

void GameObjectScriptPack::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectScriptPack::Write(GameObjectScriptPack *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->cnt);
		if ((this->cnt & 0xffU) != 0) {
		ActionAbstract::Write(this->actionList,stream);
		}
		return;
		}
		
	*/
	return;
}

