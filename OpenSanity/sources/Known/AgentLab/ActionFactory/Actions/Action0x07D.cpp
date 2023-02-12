#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x07D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x07D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x07D::Dispose(Action0x07D *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x07D::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07D::ExecuteFromCallContext(Action0x07D *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		Matrix4 *pMVar3;
		float fVar4;
		float fVar5;
		InstanceContext *pIVar6;
		pIVar6 = (ctx->parent).ctx;
		if ((*(byte *)&(pIVar6->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		fVar1 = (float)(pIVar6->parent).field14_0x20.field5_0x14;
		fVar2 = (float)(pIVar6->parent).field14_0x20.field6_0x18;
		pMVar3 = (pIVar6->parent).field14_0x20.matrix1;
		fVar4 = this->unlabelled20;
		fVar5 = this->unlabelled24;
		(pIVar6->parent).field14_0x20.field4_0x10 =(InstanceContext *)(this->unlabelled16 + (float)(pIVar6->parent).field14_0x20.field4_0x10);
		(pIVar6->parent).field14_0x20.field5_0x14 = fVar4 + fVar1;
		(pIVar6->parent).field14_0x20.field6_0x18 = fVar5 + fVar2;
		(pIVar6->parent).field14_0x20.matrix1 = pMVar3;
		(pIVar6->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar6->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		}
		return;
		}
		
	*/
	return;
}

void Action0x07D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x07D * __fastcall Action0x07D::Construct(Action0x07D *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07D;
		this->unlabelled16 = 0.0;
		this->unlabelled20 = 0.0;
		this->unlabelled24 = 0.0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void Action0x07D::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07D::UnkMethod(Action0x07D *this,int *param_1){
		bool bVar1;
		undefined *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		bVar1 = IteratorE2::IsEnd(&local_10);
		if (bVar1 == false) {
		do {
		this_00 = (*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		IteratorE2::Iterate(&local_10);
		bVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar1 == false);
		}
		return;
		}
		
	*/
	return;
}

int Action0x07D::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x07D::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

