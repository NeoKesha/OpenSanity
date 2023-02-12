#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x075.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x075::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x075::Dispose(Action0x075 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x075::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x075::ExecuteFromCallContext(Action0x075 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		local_14 = (pIVar1->parent).field14_0x20.matrix2.m24;
		local_20 = (pIVar1->parent).field14_0x20.matrix2.m11 +((pIVar1->parent).field14_0x20.matrix2.m21 - (pIVar1->parent).field14_0x20.matrix2.m11)* FLOAT_00386ab4;
		local_1c = (pIVar1->parent).field14_0x20.matrix2.m12 +((pIVar1->parent).field14_0x20.matrix2.m22 - (pIVar1->parent).field14_0x20.matrix2.m12)* FLOAT_00386ab4;
		local_18 = (pIVar1->parent).field14_0x20.matrix2.m13 +((pIVar1->parent).field14_0x20.matrix2.m23 - (pIVar1->parent).field14_0x20.matrix2.m13)* FLOAT_00386ab4;
		FUN_0018a9d0(pIVar1,&local_20,this->param1,this->param2);
		return;
		}
		
	*/
	return;
}

void Action0x075::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x075 * __fastcall Action0x075::Construct(Action0x075 *this){
		float fVar1;
		this->param1 = FLOAT_00387520;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x075;
		this->param2 = fVar1;
		return this;
		}
		
	*/
	return;
}

int Action0x075::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x075::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x075::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x075::UnkMethod(Action0x075 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x65) {
		this->param1 = *(float *)(psVar2 + 2);
		}
		else if (*psVar2 == 0xc2) {
		this->param2 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

