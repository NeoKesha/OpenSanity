#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetBehaviourPriority.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetBehaviourPriority::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetBehaviourPriority::Dispose(ActionSetBehaviourPriority *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetBehaviourPriority::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetBehaviourPriority * __fastcall ActionSetBehaviourPriority::Construct(ActionSetBehaviourPriority *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetBehaviourPriority;
		*(undefined *)&this->unlabelled12 = 0xff;
		return this;
		}
		
	*/
	return;
}

void ActionSetBehaviourPriority::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetBehaviourPriority::UnkMethod(ActionSetBehaviourPriority *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 100) {
		if (*(char *)(psVar2 + 1) == '\x04') {
		if (*(int *)(psVar2 + 2) == 0x2f) {
		*(undefined *)&this->unlabelled12 = 0xff;
		}
		}
		else {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		}
		else if (((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) &&(*(int *)(psVar2 + 2) == 0x2f)) {
		*(undefined *)&this->unlabelled12 = 0xff;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetBehaviourPriority::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetBehaviourPriority::ExecuteFromCallContext(ActionSetBehaviourPriority *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		int *piVar2;
		piVar2 = (int *)(ctx->parent).flags;
		bVar1 = *(byte *)&this->unlabelled12;
		if (100 < bVar1) {
		bVar1 = *(byte *)(*piVar2 + 0xe);
		}
		piVar2[10] = piVar2[10] ^ ((uint)bVar1 ^ piVar2[10]) & 0x7f;
		return;
		}
		
	*/
	return;
}

int ActionSetBehaviourPriority::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetBehaviourPriority::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

