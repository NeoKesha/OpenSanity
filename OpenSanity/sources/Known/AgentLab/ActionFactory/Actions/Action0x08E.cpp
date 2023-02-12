#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x08E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x08E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x08E::Dispose(Action0x08E *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x08E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x08E::Construct(Action0x08E *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08E;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int Action0x08E::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x08E::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x08E::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08E::UnkMethod(Action0x08E *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == -1) {
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0xad:this->unlabelled12 = 0;
		break;
		case 0xae:this->unlabelled12 = 1;
		break;
		case 0xaf:this->unlabelled12 = 2;
		break;
		case 0xb3:this->unlabelled12 = 3;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x08E::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08E::ExecuteFromCallContext(Action0x08E *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeShadow *this_00;
		this_00 = (InstanceNodeShadow *)(((ctx->parent).ctx)->nodes).array[10];
		if (this_00 != (InstanceNodeShadow *)0x0) {
		InstanceNodeShadow::FUN_001704d0(this_00,*(byte *)&this->unlabelled12);
		}
		return;
		}
		
	*/
	return;
}

