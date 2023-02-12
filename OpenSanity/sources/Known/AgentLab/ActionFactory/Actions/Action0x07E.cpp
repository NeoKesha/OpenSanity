#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x07E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x07E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x07E::Dispose(Action0x07E *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x07E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x07E::Construct(Action0x07E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07E;
		return;
		}
		
	*/
	return;
}

int Action0x07E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x07E::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x07E::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07E::ExecuteFromCallContext(Action0x07E *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeObjectLink *pIVar2;
		uint uVar2;
		pIVar2 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (pIVar2 != (InstanceNodeObjectLink *)0x0) {
		uVar1 = pIVar2->field7_0x18;
		uVar2 = uVar1 >> 7 & 0x1f;
		if (uVar2 == (uVar1 & 0x1f) - 1) {
		pIVar2->field7_0x18 = uVar1 & 0xf80 ^ uVar1;
		return;
		}
		pIVar2->field7_0x18 = ((uVar2 + 1) * 0x80 ^ uVar1) & 0xf80 ^ uVar1;
		}
		return;
		}
		
	*/
	return;
}

