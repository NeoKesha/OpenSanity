#include "headers/Known/AgentLab/ActionFactory/Actions/ActionForceAnimUpdate.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionForceAnimUpdate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionForceAnimUpdate::Dispose(ActionForceAnimUpdate *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionForceAnimUpdate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionForceAnimUpdate * __fastcall ActionForceAnimUpdate::Construct(ActionForceAnimUpdate *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ForceAnimUpdate;
		this->unlabelled12 = uVar1 & 0xfffffff0;
		return this;
		}
		
	*/
	return;
}

int ActionForceAnimUpdate::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionForceAnimUpdate::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionForceAnimUpdate::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionForceAnimUpdate::UnkMethod(ActionForceAnimUpdate *this,int *param_1){
		int iVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar3 == -1) {
		iVar1 = *(int *)(psVar3 + 2);
		if (iVar1 == 0x6d) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff2U | 2;
		}
		else if (iVar1 == 0xb6) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff1U | 1;
		}
		else if (iVar1 == 0xb7) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff0;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionForceAnimUpdate::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionForceAnimUpdate::ExecuteFromCallContext(ActionForceAnimUpdate *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeOGI *pIVar1;
		uint uVar1;
		pIVar1 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,OGI);
		if (pIVar1 != (InstanceNodeOGI *)0x0) {
		uVar1 = this->unlabelled12 & 0xf;
		if (uVar1 != 1) {
		if (uVar1 != 2) {
		pIVar1->field1_0x18 = pIVar1->field1_0x18 & 0xfdffffff;
		return;
		}
		pIVar1->field1_0x18 = pIVar1->field1_0x18 | 0x2000000;
		return;
		}
		pIVar1->field1_0x18 = pIVar1->field1_0x18 | 0x1000000;
		}
		return;
		}
		
	*/
	return;
}

