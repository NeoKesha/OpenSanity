#include "headers/Known/AgentLab/ActionFactory/Actions/ActionTriggerLinkedObjects.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionTriggerLinkedObjects::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionTriggerLinkedObjects::Dispose(ActionTriggerLinkedObjects *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionTriggerLinkedObjects::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionTriggerLinkedObjects * __fastcall ActionTriggerLinkedObjects::Construct(ActionTriggerLinkedObjects *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_TriggerLinkedObjects;
		this->unlabelled12 = uVar1 & 0xfffffffe;
		return this;
		}
		
	*/
	return;
}

int ActionTriggerLinkedObjects::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionTriggerLinkedObjects::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionTriggerLinkedObjects::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionTriggerLinkedObjects::UnkMethod(ActionTriggerLinkedObjects *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(int *)(psVar2 + 2) == 0x85)) {
		this->unlabelled12 = this->unlabelled12 | 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionTriggerLinkedObjects::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionTriggerLinkedObjects::ExecuteFromCallContext(ActionTriggerLinkedObjects *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeObjectLink *pIVar3;
		InstanceNodeInstance *pIVar2;
		uint uVar1;
		InstanceContext *pIVar4;
		InstanceContextRefCounter *pIVar5;
		pIVar4 = (ctx->parent).ctx;
		pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar4->parent).ctx)->nodes,ObjectLink);
		if (pIVar3 != (InstanceNodeObjectLink *)0x0) {
		uVar1 = pIVar3->field7_0x18 & 0x1f;
		if ((*(byte *)&this->unlabelled12 & 1) == 0) {
		pIVar4 = (pIVar4->parent).ctx;
		}
		else {
		pIVar4 = (ctx->parent).field14_0x20.ctx;
		}
		if (uVar1 != 0) {
		pIVar5 = &pIVar3->field9_0x20;
		do {
		pIVar2 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar5->ctx->nodes,Instance);
		if (pIVar2 != (InstanceNodeInstance *)0x0) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)(pIVar2->body).field49_0x80,1,(InstanceContextRefCounter *)pIVar4,false,false);
		}
		pIVar5 = (InstanceContextRefCounter *)&pIVar5->refCount;
		uVar1 = uVar1 - 1;
		}
		 while (uVar1 != 0);
		}
		}
		return;
		}
		
	*/
	return;
}

