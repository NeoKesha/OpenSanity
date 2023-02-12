#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x07A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x07A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x07A::Dispose(Action0x07A *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x07A::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07A::ExecuteFromCallContext(Action0x07A *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		byte bVar4;
		InstanceContext *this_00;
		InstanceTransform *pIVar5;
		bool bVar6;
		InstanceContext *pIVar7;
		InstanceContext *pIVar8;
		this_00 = (ctx->parent).ctx;
		bVar4 = *(byte *)((int)&this->unlabelled12 + 2);
		pIVar7 = this_00;
		if (bVar4 != 0xf0) {
		pIVar7 = (*(this_00->parent).vtable[7].Dispose)(this_00,bVar4);
		pIVar7 = (InstanceContext *)FUN_0016edc0((int)pIVar7);
		}
		pIVar8 = (*(pIVar7->parent).vtable[7].Dispose)(pIVar7,(byte)this->unlabelled12);
		if (pIVar8 == (InstanceContext *)0x0) {
		bVar6 = (*(pIVar7->parent).vtable[7].Method1)(pIVar7);
		if (bVar6 == false) {
		return;
		}
		}
		else {
		pIVar5 = (pIVar8->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		}
		bVar6 = (*(this_00->parent).vtable[7].Method3)(this_00);
		if (bVar6 == false) {
		(*(this_00->parent).vtable[7].Method2)(this_00);
		}
		return;
		}
		
	*/
	return;
}

void Action0x07A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x07A * __fastcall Action0x07A::Construct(Action0x07A *this){
		this->unlabelled12 = this->unlabelled12 | 0xffff;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07A;
		*(undefined *)((int)&this->unlabelled12 + 2) = 0xf0;
		return this;
		}
		
	*/
	return;
}

void Action0x07A::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07A::UnkMethod(Action0x07A *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *this_00;
		if (sVar1 == 199) {
		uVar3 = FUN_0017f240(this_00,this->unlabelled12 & 0xff);
		*(char *)&this->unlabelled12 = (char)uVar3;
		}
		else if (sVar1 == 200) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 1));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		else if (sVar1 == 0xec) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 2));
		*(char *)((int)&this->unlabelled12 + 2) = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

int Action0x07A::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x07A::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

