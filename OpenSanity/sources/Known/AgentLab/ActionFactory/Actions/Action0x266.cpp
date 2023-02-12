#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x266.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x266::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x266::Dispose(Action0x266 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x266::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x266 * __fastcall Action0x266::Construct(Action0x266 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x266;
		this->unlabelled12 = uVar1 & 0xfffffffe;
		return this;
		}
		
	*/
	return;
}

int Action0x266::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x266::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x266::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x266::UnkMethod(Action0x266 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) && (*(int *)(psVar2 + 2) == 0xfd)) {
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

void Action0x266::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x266::ExecuteFromCallContext(Action0x266 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeI *this_00;
		pIVar1 = (ctx->parent).ctx;
		if ((pIVar1 != (InstanceContext *)0x0) &&(this_00 = (InstanceNodeI *)(pIVar1->nodes).array[0xe], this_00 != (InstanceNodeI *)0x0)) {
		InstanceNodeAbstract::FUN_0016ffc0((InstanceNodeAbstract *)this_00,*(byte *)&this->unlabelled12 & 1);
		}
		return;
		}
		
	*/
	return;
}

