#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B7.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B7::Dispose(Action0x0B7 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B7::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B7 * __fastcall Action0x0B7::Construct(Action0x0B7 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B7;
		*(undefined *)&this->unlabelled12 = 0xff;
		return this;
		}
		
	*/
	return;
}

void Action0x0B7::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B7::UnkMethod(Action0x0B7 *this,int *param_1){
		char cVar1;
		undefined *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar2;
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B7::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B7::ExecuteFromCallContext(Action0x0B7 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceContext *pIVar1;
		InstanceNodeInstance *pIVar3;
		this_00 = (ctx->parent).ctx;
		if (*(byte *)&this->unlabelled12 != 0xff) {
		pIVar1 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)&this->unlabelled12);
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar3 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar1->nodes,Instance);
		(pIVar3->body).field56_0x94 = this_00;
		}
		}
		return;
		}
		
	*/
	return;
}

int Action0x0B7::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B7::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

