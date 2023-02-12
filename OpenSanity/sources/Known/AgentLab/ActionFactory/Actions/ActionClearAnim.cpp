#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearAnim.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionClearAnim::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionClearAnim * __fastcall ActionClearAnim::Construct(ActionClearAnim *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ClearAnim;
		FUN_00180380(&this->unlabelled16,0);
		this->unlabelled12 = 0;
		this->unlabelled12 = this->unlabelled12 | 0xff;
		return this;
		}
		
	*/
	return;
}

void ActionClearAnim::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearAnim::Dispose(ActionClearAnim *this,byte param_1){
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

void ActionClearAnim::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearAnim::UnkMethod(ActionClearAnim *this,int *param_1){
		char cVar1;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0xc) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		else if (*this_00 == 0x4f) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionClearAnim::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearAnim::ExecuteFromCallContext(ActionClearAnim *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeOGISub *this_00;
		int iVar2;
		InstanceNodeOGI *pIVar3;
		void *pvVar3;
		long lVar4;
		float fVar5;
		byte bVar6;
		pIVar1 = (ctx->parent).ctx;
		pIVar3 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,OGI);
		this_00 = pIVar3->field4_0x24;
		if (this_00 != (InstanceNodeOGISub *)0x0) {
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		fVar5 = FUN_00180490(&this->unlabelled16,pvVar3);
		bVar6 = (byte)this->unlabelled12;
		lVar4 = __ftol2(TicksPerTime * fVar5);
		FUN_001fd740(this_00,lVar4,bVar6);
		}
		return;
		}
		
	*/
	return;
}

int ActionClearAnim::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearAnim::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

