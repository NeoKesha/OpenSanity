#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x09E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x09E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x09E::Dispose(Action0x09E *this,byte param_1){
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

void Action0x09E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x09E * __fastcall Action0x09E::Construct(Action0x09E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x09E;
		this->unlabelled12 = 0;
		AutoClass28::Construct((AutoClass28 *)&this->unlabelled16,'\0','\0');
		return this;
		}
		
	*/
	return;
}

int Action0x09E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x09E::GetSize(void){
		return 0x98;
		}
		
	*/
	return 0;
}

void Action0x09E::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09E::UnkMethod(Action0x09E *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6d) {
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

void Action0x09E::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09E::ExecuteFromCallContext(Action0x09E *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		uint uVar2;
		InstanceNodeAbstract *pIVar3;
		int *piVar4;
		pIVar1 = (ctx->parent).ctx;
		pIVar3 = (pIVar1->nodes).array[0xe];
		if (pIVar3 == (InstanceNodeAbstract *)0x0) {
		piVar4 = &(((pIVar1->parent).ctx)->parent).flags;
		pIVar3 = (InstanceNodeAbstract *)&this->unlabelled16;
		(pIVar1->nodes).array[0xe] = pIVar3;
		*piVar4 = *piVar4 | 0x8000;
		(pIVar1->nodes).array[0xe][5].time = (uint)pIVar1;
		}
		if ((InstanceNodeAbstract_VTable *)this->unlabelled12 != (InstanceNodeAbstract_VTable *)0x0) {
		uVar2 = pIVar3[4].time;
		pIVar3[5].vtable = (InstanceNodeAbstract_VTable *)this->unlabelled12;
		pIVar3[4].time = uVar2 | 0x10000;
		}
		return;
		}
		
	*/
	return;
}

