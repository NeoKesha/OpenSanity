#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAttachAllLinkedAgents.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAttachAllLinkedAgents::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAttachAllLinkedAgents::Dispose(ActionAttachAllLinkedAgents *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAttachAllLinkedAgents::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAttachAllLinkedAgents * __fastcall ActionAttachAllLinkedAgents::Construct(ActionAttachAllLinkedAgents *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AttachAllLinkedAgents;
		this->unlabelled12 = uVar1 & 0xfffffffe;
		return this;
		}
		
	*/
	return;
}

int ActionAttachAllLinkedAgents::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAttachAllLinkedAgents::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionAttachAllLinkedAgents::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachAllLinkedAgents::UnkMethod(ActionAttachAllLinkedAgents *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x12) {
		this->unlabelled12 =(*(int *)(psVar2 + 2) * 2 ^ this->unlabelled12) & 0x7eU ^ this->unlabelled12 | 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionAttachAllLinkedAgents::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachAllLinkedAgents::ExecuteFromCallContext(ActionAttachAllLinkedAgents *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *this_00;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		this_00 = InstanceDataList::GetNode(&pIVar1->nodes,ObjectLink);
		if (this_00 != (InstanceNodeAbstract *)0x0) {
		if ((this->unlabelled12 & 1U) != 0) {
		FUN_000fc060((int)this_00,(int *)pIVar1,(byte)((uint)this->unlabelled12 >> 1) & 0x3f,'\0');
		return;
		}
		FUN_000fc010((int)this_00,(int *)pIVar1,'\0');
		}
		return;
		}
		
	*/
	return;
}

