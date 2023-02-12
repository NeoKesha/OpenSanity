#include "headers/Known/AgentLab/ActionFactory/Actions/ActionStartWhackaworm.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionStartWhackaworm::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionStartWhackaworm * __fastcall ActionStartWhackaworm::Construct(ActionStartWhackaworm *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_WhackawormStart;
		this->unlabelled12 = -1;
		FUN_00180380(&this->unlabelled16,0);
		FUN_001803a0(&this->unlabelled20,0);
		return this;
		}
		
	*/
	return;
}

void ActionStartWhackaworm::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionStartWhackaworm::Dispose(ActionStartWhackaworm *this,byte param_1){
		::EmptyFunction();
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

int ActionStartWhackaworm::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionStartWhackaworm::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionStartWhackaworm::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionStartWhackaworm::UnkMethod(ActionStartWhackaworm *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		US002 *other;
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
		if (sVar1 == 0xc) {
		other = (US002 *)&this->unlabelled16;
		LAB_00041c23:FUN_00180840(this_00,other);
		}
		else if (sVar1 == 0x11) {
		this->unlabelled12 = *(int *)(this_00 + 2);
		}
		else if (sVar1 == 0x204) {
		other = (US002 *)&this->unlabelled20;
		goto LAB_00041c23;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionStartWhackaworm::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionStartWhackaworm::ExecuteFromCallContext(ActionStartWhackaworm *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		GameObject *this_00;
		void *pvVar3;
		uint uVar4;
		long lVar5;
		ushort *puVar6;
		float fVar7;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		this_00 = (GameObject *)(pIVar1->parent).field14_0x20.matrix2.m33;
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		this_00 = (GameObject *)FUN_00015286(iVar2);
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		uVar4 = FUN_001804d0(&this->unlabelled20,pvVar3);
		fVar7 = FUN_00180490(&this->unlabelled16,pvVar3);
		lVar5 = __ftol2(TicksPerTime * fVar7);
		puVar6 = (ushort *)CONCAT22((short)((uint)lVar5 >> 0x10),0xffff);
		if (this->unlabelled12 != -1) {
		GameObject::GetOGIId(this_00,(ushort *)&ctx,this->unlabelled12);
		puVar6 = (ushort *)(uint)*puVar6;
		}
		GameController::WhackawormStart(GameController1,lVar5,uVar4,(ushort)puVar6);
		return;
		}
		
	*/
	return;
}

