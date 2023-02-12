#include "headers/Known/AgentLab/ActionFactory/Actions/ActionCreateCrateContents.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionCreateCrateContents::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionCreateCrateContents::Dispose(ActionCreateCrateContents *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionCreateCrateContents::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionCreateCrateContents * __fastcall ActionCreateCrateContents::Construct(ActionCreateCrateContents *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CreateCrateContents;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0xffff;
		this->unlabelled16 = this->unlabelled16 & 0xffffffa1U | 0xa1;
		return this;
		}
		
	*/
	return;
}

void ActionCreateCrateContents::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionCreateCrateContents::UnkMethod(ActionCreateCrateContents *this,int *param_1){
		char cVar1;
		undefined2 *puVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		puVar2 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = *(uint *)(puVar2 + 2);
		switch(*puVar2) {
		case 0x201:*(short *)&this->unlabelled12 = (short)uVar3;
		break;
		case 0x202:*(short *)((int)&this->unlabelled12 + 2) = (short)uVar3;
		break;
		case 0x218:uVar3 = this->unlabelled16 ^ (this->unlabelled16 ^ uVar3) & 0xf;
		goto LAB_0003fd64;
		case 0x219:uVar3 = this->unlabelled16 ^ (uVar3 << 4 ^ this->unlabelled16) & 0xf0;
		LAB_0003fd64:this->unlabelled16 = uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionCreateCrateContents::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionCreateCrateContents::ExecuteFromCallContext(ActionCreateCrateContents *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		pIVar2 = InstanceDataList::GetNode(&pIVar1->nodes,Crate);
		thunk_FUN_0003fa00((int)this,pIVar2[1].vtable,(int)pIVar1);
		return;
		}
		
	*/
	return;
}

int ActionCreateCrateContents::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionCreateCrateContents::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

