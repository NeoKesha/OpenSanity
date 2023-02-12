#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAlertWobblePhase.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAlertWobblePhase::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAlertWobblePhase::Dispose(ActionAlertWobblePhase *this,byte param_1){
		thunk_FUN_00055510(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAlertWobblePhase::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAlertWobblePhase::ExecuteFromCallContext(ActionAlertWobblePhase *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *pIVar1;
		int iVar2;
		char cVar3;
		void *pvVar4;
		InstanceNodeAbstract_VTable *pIVar5;
		InstanceContext *pIVar6;
		long lVar7;
		float fVar8;
		pIVar6 = (ctx->parent).ctx;
		cVar3 = (*(pIVar6->parent).vtable[2].Method4)(pIVar6);
		if ((cVar3 != '\0') && (pIVar1 = (pIVar6->nodes).array[8], pIVar1 != (InstanceNodeAbstract *)0x0)){
		pIVar6 = (ctx->parent).ctx;
		iVar2 = (pIVar6->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar4 = (void *)(pIVar6->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar2);
		}
		if ((*(byte *)&this->unlabelled24 & 1) != 0) {
		fVar8 = FUN_00180490(&this->unlabelled12,pvVar4);
		pIVar5 = (InstanceNodeAbstract_VTable *)__ftol2(fVar8 * FLOAT_003863a4);
		pIVar1[10].vtable = pIVar5;
		}
		if ((*(byte *)&this->unlabelled24 & 2) != 0) {
		fVar8 = FUN_00180490(&this->unlabelled16,pvVar4);
		pIVar6 = (InstanceContext *)__ftol2(fVar8 * FLOAT_003863a4);
		pIVar1[10].ctx = pIVar6;
		}
		if ((*(byte *)&this->unlabelled24 & 4) != 0) {
		fVar8 = FUN_00180490(&this->unlabelled20,pvVar4);
		lVar7 = __ftol2(fVar8 * FLOAT_003863a4);
		*(long *)&pIVar1[10].field2_0x8 = lVar7;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionAlertWobblePhase::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAlertWobblePhase * __fastcall ActionAlertWobblePhase::Construct(ActionAlertWobblePhase *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AlertWobblePhase;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = this->unlabelled24 & 0xfffffff8;
		return this;
		}
		
	*/
	return;
}

int ActionAlertWobblePhase::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAlertWobblePhase::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void ActionAlertWobblePhase::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAlertWobblePhase::UnkMethod(ActionAlertWobblePhase *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *this_00;
		if (sVar1 == 0x26) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		uVar3 = this->unlabelled24 | 1;
		LAB_001976dd:this->unlabelled24 = uVar3;
		}
		else {
		if (sVar1 == 0x27) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		uVar3 = this->unlabelled24 | 2;
		goto LAB_001976dd;
		}
		if (sVar1 == 0x28) {
		this->unlabelled20 = this->unlabelled20 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		uVar3 = this->unlabelled24 | 4;
		goto LAB_001976dd;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

