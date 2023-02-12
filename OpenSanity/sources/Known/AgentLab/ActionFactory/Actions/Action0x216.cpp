#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x216.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x216::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x216 * __fastcall Action0x216::Construct(Action0x216 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x216;
		this->unlabelled12 = -1;
		FUN_001803a0(&this->unlabelled16,0);
		return this;
		}
		
	*/
	return;
}

void Action0x216::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x216::Dispose(Action0x216 *this,byte param_1){
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

int Action0x216::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x216::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x216::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x216::UnkMethod(Action0x216 *this,int *param_1){
		char cVar1;
		short *this_00;
		int iVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0xc3) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (*this_00 == -1) {
		iVar2 = thunk_FUN_000acfb0(*(undefined4 *)(this_00 + 2));
		this->unlabelled12 = iVar2;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x216::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x216::ExecuteFromCallContext(Action0x216 *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		InstanceContext *pIVar2;
		GameController *pGVar3;
		void *pvVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		pGVar3 = GameController1;
		iVar1 = this->unlabelled12;
		if (iVar1 == -1) {
		pIVar2 = (ctx->parent).ctx;
		iVar1 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar4 = (void *)(pIVar2->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar1);
		}
		uVar5 = FUN_001804d0(&this->unlabelled16,pvVar4);
		if ((int)uVar5 < 0x19) {
		uVar6 = (pGVar3->chunkDescriptor).flags;
		uVar7 = (uVar5 & 0x1f) << 0x10;
		(pGVar3->chunkDescriptor).flags = uVar6 & 0xffe0ffff | uVar7;
		if ((int)(uVar6 >> 0x1a & 0x1f) < (int)uVar5) {
		(pGVar3->chunkDescriptor).flags = (uVar5 & 0x1f) << 0x1a | uVar6 & 0x83e0ffff | uVar7;
		return;
		}
		}
		}
		else if (iVar1 < 0x19) {
		uVar5 = (GameController1->chunkDescriptor).flags;
		uVar6 = uVar5 ^ (iVar1 << 0x10 ^ uVar5) & 0x1f0000;
		(GameController1->chunkDescriptor).flags = uVar6;
		if ((int)(uVar5 >> 0x1a & 0x1f) < this->unlabelled12) {
		(pGVar3->chunkDescriptor).flags = (this->unlabelled12 << 0x1a ^ uVar6) & 0x7c000000 ^ uVar6;
		}
		}
		return;
		}
		
	*/
	return;
}

