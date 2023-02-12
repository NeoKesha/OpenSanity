#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRequestMessagersFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRequestMessagersFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRequestMessagersFocus::Dispose(ActionRequestMessagersFocus *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRequestMessagersFocus::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestMessagersFocus::ExecuteFromCallContext(ActionRequestMessagersFocus *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_02;
		InstanceNodeInstance *this_01;
		InstanceNodeAbstract *pIVar1;
		undefined4 uVar2;
		undefined4 local_20 [7];
		InstanceContext *iVar1;
		this_02 = (ctx->parent).ctx;
		iVar1 = (InstanceContext *)(this_02->parent).field14_0x20.field25_0x70;
		if (iVar1 != (InstanceContext *)0x0) {
		this_01 = (InstanceNodeInstance *)InstanceDataList::GetNode(&iVar1->nodes,Instance);
		if (this_01 != (InstanceNodeInstance *)0x0) {
		switch(*(byte *)&this->unlabelled12 & 7) {
		case 0:FUN_0018b930((int)this_02,(int)this_01);
		return;
		case 1:pIVar1 = (InstanceNodeAbstract *)thunk_FUN_00054d80((int)this_01);
		(this_02->nodes).array[0xc] = pIVar1;
		return;
		case 2:pIVar1 = (InstanceNodeAbstract *)thunk_FUN_00054db0((int)this_01);
		(this_02->nodes).array[0xd] = pIVar1;
		return;
		case 3:goto switchD_001925ed_caseD_3;
		default:return;
		}
		}
		}
		(*(this_02->parent).vtable[6].Method3)(this_02);
		return;
		switchD_001925ed_caseD_3:uVar2 = InstanceNodeInstance::FUN_0016be20(this_01,local_20);
		if ((char)uVar2 == '\0') {
		return;
		}
		InstanceContext::FUN_0016dda0(this_02,local_20);
		return;
		}
		
	*/
	return;
}

void ActionRequestMessagersFocus::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRequestMessagersFocus * __thiscall ActionRequestMessagersFocus::Construct(ActionRequestMessagersFocus *this,byte param_1){
		byte bVar1;
		bVar1 = *(byte *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RequestMessagersFocus;
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 ^ (bVar1 ^ param_1) & 7;
		return this;
		}
		
	*/
	return;
}

int ActionRequestMessagersFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRequestMessagersFocus::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

