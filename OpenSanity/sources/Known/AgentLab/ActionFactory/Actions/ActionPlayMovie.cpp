#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPlayMovie.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPlayMovie::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionPlayMovie * __fastcall ActionPlayMovie::Construct(ActionPlayMovie *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PlayMovie;
		FUN_001803a0(&this->unlabelled12,0);
		this->unlabelled16 = (int)FLOAT_00386618;
		return this;
		}
		
	*/
	return;
}

void ActionPlayMovie::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPlayMovie::Dispose(ActionPlayMovie *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionPlayMovie::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPlayMovie::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void ActionPlayMovie::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPlayMovie::UnkMethod(ActionPlayMovie *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *this_00;
		if (sVar1 == 0xc) {
		this->unlabelled16 = *(int *)(this_00 + 2);
		}
		else if ((sVar1 == 0xc3) || ((sVar1 == -1 && (*(char *)(this_00 + 1) == '\x01')))) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionPlayMovie::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPlayMovie::ExecuteFromCallContext(ActionPlayMovie *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		void *pvVar2;
		int iVar3;
		pIVar1 = (ctx->parent).ctx;
		iVar3 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar3 == 0) {
		pvVar2 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar2 = (void *)FUN_00017ba8(iVar3);
		}
		iVar3 = FUN_001804d0(&this->unlabelled12,pvVar2);
		GameController::PlayMovie(GameController1,(int)((float)this->unlabelled16 * TicksPerTime),iVar3);
		return;
		}
		
	*/
	return;
}

