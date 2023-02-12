#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRequestMessSourceAsFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRequestMessSourceAsFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRequestMessSourceAsFocus::Dispose(ActionRequestMessSourceAsFocus *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRequestMessSourceAsFocus::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestMessSourceAsFocus::ExecuteFromCallContext(ActionRequestMessSourceAsFocus *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceNodeCharacter *this_01;
		Vector4 local_20;
		this_00 = (ctx->parent).ctx;
		this_01 = (InstanceNodeCharacter *)(this_00->parent).field14_0x20.field25_0x70;
		if (this_01 == (InstanceNodeCharacter *)0x0) {
		(*(this_00->parent).vtable[6].Method3)(this_00);
		}
		else {
		switch(*(byte *)&this->unlabelled12 & 7) {
		case 0:thunk_FUN_00027370((int)this_00,(int)this_01);
		return;
		case 1:(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)this_01;
		return;
		case 2:(this_00->nodes).array[0xd] = (InstanceNodeAbstract *)this_01;
		return;
		case 3:InstanceNodeCharacter::GetPosition(this_01,&local_20);
		InstanceContext::FUN_0016dda0(this_00,&local_20.x);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionRequestMessSourceAsFocus::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRequestMessSourceAsFocus * __thiscall ActionRequestMessSourceAsFocus::Construct(ActionRequestMessSourceAsFocus *this,byte param_1){
		byte bVar1;
		bVar1 = *(byte *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RequestMessSourceAsFocus;
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 ^ (bVar1 ^ param_1) & 7;
		return this;
		}
		
	*/
	return;
}

int ActionRequestMessSourceAsFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRequestMessSourceAsFocus::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

