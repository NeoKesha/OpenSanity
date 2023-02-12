#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B8.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B8::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B8::Dispose(Action0x0B8 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B8::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B8 * __fastcall Action0x0B8::Construct(Action0x0B8 *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B8;
		*(undefined *)&this->unlabelled12 = 0xff;
		this->unlabelled16 = uVar1 & 0xfffffffe;
		return this;
		}
		
	*/
	return;
}

void Action0x0B8::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B8::UnkMethod(Action0x0B8 *this,int *param_1){
		char cVar1;
		short *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar2;
		if (((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) && (*(int *)(this_00 + 2) == 0x127)) {
		this->unlabelled16 = this->unlabelled16 | 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B8::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B8::ExecuteFromCallContext(Action0x0B8 *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		InstanceNodeInstance *pIVar2;
		pIVar2 = (InstanceNodeInstance *)(ctx->parent).ctx;
		if (*(byte *)&this->unlabelled12 == 0xff) {
		if ((*(byte *)&this->unlabelled16 & 1) == 0) {
		return;
		}
		}
		else {
		iVar1 = (*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar2)->parent).vtable)->InstanceMethod25)(pIVar2,(uint)*(byte *)&this->unlabelled12);
		pIVar2 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)(iVar1 + 0xe4),Instance);
		}
		if ((InstanceContext *)pIVar2 != (InstanceContext *)0x0) {
		(((InstanceContext *)pIVar2)->parent).field14_0x20.field27_0x78 = 0;
		}
		return;
		}
		
	*/
	return;
}

int Action0x0B8::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B8::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

