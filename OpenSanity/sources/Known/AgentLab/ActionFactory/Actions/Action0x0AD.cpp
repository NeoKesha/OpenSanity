#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AD.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AD::Dispose(Action0x0AD *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0AD::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AD::UnkMethod(Action0x0AD *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x01')) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0AD::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AD::ExecuteFromCallContext(Action0x0AD *this,undefined4 time_clock,InstanceContext *ctx){
		*(undefined *)((int)&(((ctx->parent).ctx)->nodes).array[0xf][2].field5_0x10 + 3) =*(undefined *)&this->unlabelled12;
		return;
		}
		
	*/
	return;
}

int Action0x0AD::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AD::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x0AD::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0AD::Construct(Action0x0AD *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AD;
		*(undefined *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

