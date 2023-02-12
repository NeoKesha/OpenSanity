#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0D7.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0D7::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0D7::Dispose(Action0x0D7 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0D7::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0D7 * __fastcall Action0x0D7::Construct(Action0x0D7 *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0D7;
		this->unlabelled12 = uVar1 & 0xfffffffe;
		this->unlabelled16 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int Action0x0D7::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0D7::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x0D7::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0D7::UnkMethod(Action0x0D7 *this,int *param_1){
		float fVar1;
		float fVar2;
		char cVar3;
		short *psVar4;
		uint uVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar3 != '\0') {
		return;
		}
		psVar4 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		fVar2 = FLOAT_0038639c;
		if (*psVar4 == 0xb) {
		fVar1 = *(float *)(psVar4 + 2);
		this->unlabelled20 = (int)fVar1;
		if (fVar2 < fVar1) {
		this->unlabelled20 = (int)fVar2;
		}
		uVar5 = this->unlabelled12 | 2;
		LAB_0019949b:this->unlabelled12 = uVar5;
		}
		else if (*psVar4 == 0x98) {
		this->unlabelled16 = *(int *)(psVar4 + 2);
		uVar5 = this->unlabelled12 | 1;
		goto LAB_0019949b;
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x0D7::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0D7::ExecuteFromCallContext(Action0x0D7 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		char cVar1;
		this_00 = (ctx->parent).ctx;
		cVar1 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar1 != '\0') {
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		FUN_001327a0((uint)*(byte *)&this_00->field36_0x164,this->unlabelled16);
		}
		if ((*(byte *)&this->unlabelled12 & 2) != 0) {
		FUN_00132750((uint)*(byte *)&this_00->field36_0x164,this->unlabelled20);
		}
		}
		return;
		}
		
	*/
	return;
}

