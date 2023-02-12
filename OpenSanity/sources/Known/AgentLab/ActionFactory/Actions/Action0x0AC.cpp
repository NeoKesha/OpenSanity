#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AC.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AC::Dispose(Action0x0AC *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0AC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0AC * __fastcall Action0x0AC::Construct(Action0x0AC *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AC;
		*(undefined *)&this->unlabelled12 = 0xff;
		this->unlabelled16 = uVar1 & 0xfffffffc;
		return this;
		}
		
	*/
	return;
}

void Action0x0AC::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AC::UnkMethod(Action0x0AC *this,int *param_1){
		char cVar1;
		short *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar2;
		if (*this_00 == 0xcb) {
		uVar2 = this->unlabelled16 ^ (*(uint *)(this_00 + 2) ^ this->unlabelled16) & 1;
		LAB_00190b43:this->unlabelled16 = uVar2;
		}
		else if (((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) &&(*(int *)(this_00 + 2) == 0xe6)) {
		uVar2 = this->unlabelled16 | 2;
		goto LAB_00190b43;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x0AC::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AC::ExecuteFromCallContext(Action0x0AC *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeInstance *pIVar4;
		InstanceNodeObjectLink *pIVar2;
		InstanceNodeInstance *pIVar3;
		InstanceContextRefCounter *piVar5;
		uint uVar2;
		pIVar1 = (ctx->parent).ctx;
		if (*(byte *)&this->unlabelled12 == 0xff) {
		if ((((*(byte *)&this->unlabelled16 & 2) != 0) &&(pIVar2 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,ObjectLink),pIVar2 != (InstanceNodeObjectLink *)0x0)) && (uVar2 = 0, (pIVar2->field7_0x18 & 0x1f) != 0)){
		piVar5 = &pIVar2->field9_0x20;
		do {
		if (piVar5->ctx != (InstanceContext *)0x0) {
		pIVar3 = (InstanceNodeInstance *)InstanceDataList::GetNode(&piVar5->ctx->nodes,Instance);
		(pIVar3->body).field56_0x94 = 0;
		}
		uVar2 = uVar2 + 1;
		piVar5 = (InstanceContextRefCounter *)&piVar5->refCount;
		}
		 while (uVar2 < (pIVar2->field7_0x18 & 0x1f));
		}
		}
		else {
		pIVar1 = (*(pIVar1->parent).vtable[7].Dispose)(pIVar1,*(byte *)&this->unlabelled12);
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar4 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar1->nodes,Instance);
		(pIVar4->body).field56_0x94 = 0;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

int Action0x0AC::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AC::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

