#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x084.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x084::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x084::Dispose(Action0x084 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x084::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x084 * __fastcall Action0x084::Construct(Action0x084 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x084;
		this->unlabelled12 = 1;
		return this;
		}
		
	*/
	return;
}

int Action0x084::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x084::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x084::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x084::UnkMethod(Action0x084 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xcf) {
		this->unlabelled12 = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x084::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x084::ExecuteFromCallContext(Action0x084 *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeObjectLink *pIVar2;
		uint uVar2;
		pIVar2 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (pIVar2 != (InstanceNodeObjectLink *)0x0) {
		uVar1 = pIVar2->field7_0x18;
		uVar2 = this->unlabelled12 - 1;
		if (uVar2 < (uVar1 & 0x1f)) {
		pIVar2->field7_0x18 = (uVar2 * 0x80 ^ uVar1) & 0xf80 ^ uVar1;
		}
		}
		return;
		}
		
	*/
	return;
}

