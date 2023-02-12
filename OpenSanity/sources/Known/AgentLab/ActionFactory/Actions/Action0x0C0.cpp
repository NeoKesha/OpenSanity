#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C0.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C0::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C0::Dispose(Action0x0C0 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C0::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0C0::Construct(Action0x0C0 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C0;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int Action0x0C0::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C0::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x0C0::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C0::UnkMethod(Action0x0C0 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x122) {
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

void Action0x0C0::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C0::Execute(Action0x0C0 *this,InstanceContext *ctx){
		UNV005 *ptr;
		void *this_00;
		InstanceNodeShadow *pIVar1;
		uint uVar1;
		pIVar1 = (InstanceNodeShadow *)InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,Shadow);
		if (pIVar1 != (InstanceNodeShadow *)0x0) {
		uVar1 = this->unlabelled12 & 0xff;
		ptr = pIVar1->array[uVar1];
		if (ptr != (UNV005 *)0x0) {
		this_00 = (void *)ptr->field2_0x8;
		if (this_00 != (void *)0x0) {
		FUN_001069c0(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		VirtualPool::FreeMemory(ptr);
		}
		pIVar1->array[uVar1] = (UNV005 *)0x0;
		return;
		}
		return;
		}
		
	*/
	return;
}

void Action0x0C0::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C0::ExecuteFromCallContext(Action0x0C0 *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

