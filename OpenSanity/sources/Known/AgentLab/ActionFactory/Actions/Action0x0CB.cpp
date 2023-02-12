#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0CB.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0CB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0CB::Dispose(Action0x0CB *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0CB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0CB * __fastcall Action0x0CB::Construct(Action0x0CB *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CB;
		this->unlabelled12 = fVar1;
		return this;
		}
		
	*/
	return;
}

int Action0x0CB::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0CB::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x0CB::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CB::UnkMethod(Action0x0CB *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xfd) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0CB::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CB::ExecuteFromCallContext(Action0x0CB *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodePhysics *this_00;
		this_00 = (InstanceNodePhysics *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Physics);
		if (this_00 != (InstanceNodePhysics *)0x0) {
		InstanceNodePhysics::InitStuff(this_00,this->unlabelled12,1.0,1.0,1.0);
		}
		return;
		}
		
	*/
	return;
}

