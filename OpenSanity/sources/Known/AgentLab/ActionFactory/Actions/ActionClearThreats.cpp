#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearThreats.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearThreats::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearThreats::Dispose(ActionClearThreats *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearThreats::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearThreats::UnkMethod(ActionClearThreats *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x5e) {
		*(bool *)&this->unlabelled12 = *(int *)(psVar2 + 2) == 0;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionClearThreats::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearThreats::ExecuteFromCallContext(ActionClearThreats *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int iVar1;
		uint uVar2;
		iVar1 = (ctx->parent).flags;
		uVar2 = *(uint *)(iVar1 + 0x28);
		*(uint *)(iVar1 + 0x28) = uVar2 ^ ((uint)*(byte *)&this->unlabelled12 << 7 ^ uVar2) & 0x80;
		return;
		}
		
	*/
	return;
}

int ActionClearThreats::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearThreats::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionClearThreats::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearThreats::Construct(ActionClearThreats *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearThreats;
		*(undefined *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

