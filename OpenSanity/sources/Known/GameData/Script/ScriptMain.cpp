#include "headers/Known/GameData/Script/ScriptMain.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Script/ScriptMainSub.h"
void ScriptMain::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ScriptMain::Dispose(ScriptMain *this){
		ScriptMainSub *ptr;
		ScriptMainState *state;
		ptr = this->sub;
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Main;
		if (ptr != (ScriptMainSub *)0x0) {
		state = ptr->firstState;
		if (state != (ScriptMainState *)0x0) {
		ScriptMainState::Dispose(state);
		VirtualPool::FreeMemory(state);
		}
		TwinString::Dispose(&ptr->name);
		VirtualPool::FreeMemory(ptr);
		}
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Abstract;
		TwinString::Dispose(&(this->parent).name);
		return;
		}
		
	*/
	return;
}

void ScriptMain::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptAbstract * __thiscall ScriptMain::Dispose(ScriptMain *this,byte param_1){
		ScriptMainSub *ptr;
		ScriptMainState *this_00;
		ptr = this->sub;
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Main;
		if (ptr != (ScriptMainSub *)0x0) {
		this_00 = ptr->firstState;
		if (this_00 != (ScriptMainState *)0x0) {
		ScriptMainState::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		TwinString::Dispose(&ptr->name);
		VirtualPool::FreeMemory(ptr);
		}
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Abstract;
		TwinString::Dispose(&(this->parent).name);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ScriptMain::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptMain * __fastcall ScriptMain::Construct(ScriptMain *this){
		ScriptAbstract::Construct(&this->parent);
		(this->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Main;
		this->sub = (ScriptMainSub *)0x0;
		return this;
		}
		
	*/
	return;
}

void ScriptMain::SetFlag(ScriptMain* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ScriptMain::SetFlag(ScriptMain *param_1){
		uint uVar1;
		uVar1 = (param_1->parent).flags;
		if ((~(byte)(uVar1 >> 0x18) & 1) != 0) {
		(param_1->parent).flags = uVar1 | 0x1000000;
		}
		return;
		}
		
	*/
	return;
}

void ScriptMain::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMain::Write(ScriptMain *this,MemoryStream *stream){
		ScriptMainSub::Write(this->sub,stream);
		return;
		}
		
	*/
	return;
}

void ScriptMain::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMain::Read(ScriptMain *this,MemoryStream *stream){
		ScriptMainSub *element;
		element = (ScriptMainSub *)VirtualPool::AllocateMemory(0x18);
		if (element != (ScriptMainSub *)0x0) {
		(element->name).value = (char *)0x0;
		(element->name).strLength = 0;
		(element->name).strSize = 0;
		ScriptMainSub::Read(element,stream);
		this->sub = element;
		return;
		}
		this->sub = (ScriptMainSub *)0x0;
		return;
		}
		
	*/
	return;
}

bool ScriptMain::IsA(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ScriptMain::IsA(ScriptMain *this,void **param_1){
		void *pvVar1;
		uint uVar2;
		ScriptMainSub **scriptSub;
		scriptSub = &this->sub;
		pvVar1 = param_1[1];
		if (*(char *)((int)param_1 + 10) == '\0') {
		if (pvVar1 == (void *)0x0) goto LAB_00183ee4;
		if (pvVar1 == (void *)0x1) {
		uVar2 = FUN_00185be0(*param_1,*scriptSub,0x85b,0);
		return (bool)((byte)uVar2 & 1);
		}
		}
		else {
		if (pvVar1 == (void *)0x0) {
		LAB_00183ee4:uVar2 = FUN_00185a10(*param_1,scriptSub,0x85b,0);
		return (bool)((byte)uVar2 & 1);
		}
		if (pvVar1 == (void *)0x1) {
		uVar2 = FUN_00185be0(*param_1,*scriptSub,0x85b,0);
		return (bool)((byte)uVar2 & 1);
		}
		}
		return false;
		}
		
	*/
	return false;
}

uint ScriptMain::GetId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall ScriptMain::GetId(ScriptMain *this){
		return (uint)this->sub & 0xffff0000 | (uint)*(ushort *)&this->sub->field0_0x0;
		}
		
	*/
	return 0;
}

bool ScriptMain::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ScriptMain::IsB(void){
		return false;
		}
		
	*/
	return false;
}

uint ScriptMain::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ScriptMain::GetBuilderIndex(void){
		return 0x1804;
		}
		
	*/
	return 0;
}

