#include "headers/Known/AgentLab/ActionFactory/Actions/ActionShadowToggle.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionShadowToggle::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionShadowToggle::Dispose(ActionShadowToggle *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionShadowToggle::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionShadowToggle::Construct(ActionShadowToggle *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ShadowToggle;
		this->field1_0xc = 0;
		return;
		}
		
	*/
	return;
}

int ActionShadowToggle::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionShadowToggle::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionShadowToggle::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShadowToggle::UnkMethod(ActionShadowToggle *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x122) {
		*(undefined *)&this->field1_0xc = *(undefined *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionShadowToggle::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShadowToggle::Execute(ActionShadowToggle *this,InstanceContext *ctx){
		InstanceNodeShadow *pIVar1;
		pIVar1 = (InstanceNodeShadow *)InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,Shadow);
		if (pIVar1 != (InstanceNodeShadow *)0x0) {
		*(undefined *)&pIVar1->field1_0x18 = *(undefined *)&this->field1_0xc;
		}
		return;
		}
		
	*/
	return;
}

void ActionShadowToggle::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShadowToggle::ExecuteFromCallContext(ActionShadowToggle *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

