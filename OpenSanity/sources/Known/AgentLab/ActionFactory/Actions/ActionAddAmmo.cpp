#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAddAmmo.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAddAmmo::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAddAmmo::Dispose(ActionAddAmmo *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAddAmmo::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionAddAmmo::Construct(ActionAddAmmo *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AddAmmo;
		return;
		}
		
	*/
	return;
}

int ActionAddAmmo::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAddAmmo::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionAddAmmo::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddAmmo::UnkMethod(ActionAddAmmo *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x200) {
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

bool ActionAddAmmo::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ActionAddAmmo::Execute(ActionAddAmmo *this,InstanceContext *ctx){
		bool result;
		if (GLOBAL_CHARACTER_R2->data != (US001 *)0x0) {
		result = US001::AddAmmo(GLOBAL_CHARACTER_R2->data,this->unlabelled12);
		return result;
		}
		return false;
		}
		
	*/
	return false;
}

void ActionAddAmmo::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddAmmo::ExecuteFromCallContext(ActionAddAmmo *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

