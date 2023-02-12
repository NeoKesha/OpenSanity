#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C6.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C6::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C6::Dispose(Action0x0C6 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C6::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C6::ExecuteFromCallContext(Action0x0C6 *this,undefined4 time_clock,InstanceContext *ctx){
		AutoClass2 *this_00;
		Vector4 local_20;
		this_00 = &(((((ctx->parent).ctx)->parent).ctx)->parent).field14_0x20;
		local_20.w = FLOAT_0038639c;
		local_20.x = this->unlabelled12 * FLOAT_00386ab4;
		local_20.y = this->unlabelled16 * FLOAT_00386ab4;
		local_20.z = this->unlabelled20 * FLOAT_00386ab4;
		FUN_0013a510((int)this_00,&local_20,'\x01','\0');
		FUN_0013e0c0(this_00);
		return;
		}
		
	*/
	return;
}

void Action0x0C6::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0C6 * __fastcall Action0x0C6::Construct(Action0x0C6 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C6;
		this->unlabelled12 = fVar1;
		this->unlabelled16 = fVar1;
		this->unlabelled20 = fVar1;
		return this;
		}
		
	*/
	return;
}

void Action0x0C6::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C6::UnkMethod(Action0x0C6 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0xe6) {
		this->unlabelled12 = *(float *)(psVar3 + 2);
		}
		else if (sVar1 == 0xe7) {
		this->unlabelled16 = *(float *)(psVar3 + 2);
		}
		else if (sVar1 == 0xe8) {
		this->unlabelled20 = *(float *)(psVar3 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

int Action0x0C6::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C6::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

