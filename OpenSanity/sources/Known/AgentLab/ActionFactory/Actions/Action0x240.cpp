#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x240.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x240::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x240::Dispose(Action0x240 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int Action0x240::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x240::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x240::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x240::UnkMethod(Action0x240 *this,int *param_1){
		char cVar1;
		short *psVar2;
		undefined4 uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x239) {
		uVar3 = thunk_FUN_00066f00(*(undefined4 *)(psVar2 + 2));
		*(char *)&this->unlabelled12 = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x240::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x240::ExecuteFromCallContext(Action0x240 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		float fVar1;
		char cVar2;
		InstanceContext *pIVar3;
		this_00 = (ctx->parent).ctx;
		cVar2 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar2 != '\0') {
		if (*(byte *)&this->unlabelled12 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[*(byte *)&this->unlabelled12];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = (InstanceContext *)(pIVar3->parent).vtable;
		}
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		fVar1 = (this_00->parent).field14_0x20.matrix2.m43;
		(this_00->parent).field14_0x20.field4_0x10 = pIVar3;
		(this_00->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar1 & 0xfffffffd | 1);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x240::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x240::Construct(Action0x240 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x240;
		*(undefined *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

