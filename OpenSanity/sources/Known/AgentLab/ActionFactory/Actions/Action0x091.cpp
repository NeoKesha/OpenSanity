#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x091.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x091::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x091::Dispose(Action0x091 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x091::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x091::Construct(Action0x091 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x091;
		*(undefined2 *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int Action0x091::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x091::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x091::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x091::UnkMethod(Action0x091 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6d) {
		*(short *)&this->unlabelled12 = psVar2[2];
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x091::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x091::ExecuteFromCallContext(Action0x091 *this,undefined4 time_clock,InstanceContext *ctx,int param_3){
		if (*(byte *)(param_3 + 0x1c) != 0) {
		*(undefined2 *)((&(ctx->parent).field14_0x20.field2_0x8)[*(byte *)(param_3 + 0x1c)] + 0x1e) =*(undefined2 *)&this->unlabelled12;
		}
		return;
		}
		
	*/
	return;
}

