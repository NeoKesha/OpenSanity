#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetContactSpringy.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetContactSpringy::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetContactSpringy * __fastcall ActionSetContactSpringy::Construct(ActionSetContactSpringy *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetContactSpringy;
		AutoClass28::Construct((AutoClass28 *)&this->unlabelled12,'\x01','\0');
		return this;
		}
		
	*/
	return;
}

void ActionSetContactSpringy::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetContactSpringy::Dispose(ActionSetContactSpringy *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionSetContactSpringy::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetContactSpringy::GetSize(void){
		return 0x94;
		}
		
	*/
	return 0;
}

void ActionSetContactSpringy::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetContactSpringy::UnkMethod(ActionSetContactSpringy *this,int *param_1){
		FUN_00181ae0(param_1,&this->unlabelled12);
		this->unlabelled120 = this->unlabelled120 | 0x4000;
		return;
		}
		
	*/
	return;
}

void ActionSetContactSpringy::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetContactSpringy::ExecuteFromCallContext(ActionSetContactSpringy *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *pIVar2;
		pIVar1 = (ctx->parent).ctx;
		(pIVar1->nodes).array[0xe] = (InstanceNodeAbstract *)&this->unlabelled12;
		pIVar2 = (pIVar1->parent).ctx;
		(pIVar2->parent).flags = (pIVar2->parent).flags | 0x8000;
		(pIVar1->nodes).array[0xe][5].time = (uint)pIVar1;
		return;
		}
		
	*/
	return;
}

