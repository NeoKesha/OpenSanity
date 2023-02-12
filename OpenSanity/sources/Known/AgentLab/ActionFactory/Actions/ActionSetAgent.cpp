#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetAgent.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetAgent::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetAgent::Dispose(ActionSetAgent *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetAgent::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetAgent * __fastcall ActionSetAgent::Construct(ActionSetAgent *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		*(undefined2 *)&this->unlabelled12 = 0;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetAgent;
		return this;
		}
		
	*/
	return;
}

int ActionSetAgent::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetAgent::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetAgent::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetAgent::ExecuteFromCallContext(ActionSetAgent *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceContext *this_01;
		uint uVar1;
		ushort uVar2;
		int iVar3;
		undefined4 unaff_EDI;
		bool bVar4;
		this_00 = (ctx->parent).ctx;
		this_01 = (this_00->parent).ctx;
		iVar3 = 0;
		do {
		uVar2 = (ushort)(1 << ((byte)iVar3 & 0x1f));
		if ((*(ushort *)&this->unlabelled12 & uVar2) != 0) {
		bVar4 = (*(ushort *)((int)&this->unlabelled12 + 2) & uVar2) != 0;
		switch(iVar3) {
		case 0:if (bVar4) {
		(*((this_01->parent).vtable)->Method1)(this_01);
		}
		else {
		(*(this_00->parent).vtable[2].Dispose)(this_00,(byte)unaff_EDI);
		unaff_EDI = 0x4624a;
		(*((this_01->parent).vtable)->Method2)(this_01);
		}
		break;
		case 1:uVar1 = (this_01->parent).flags;
		if (bVar4) {
		(this_01->parent).flags = uVar1 | 0x400;
		}
		else {
		(this_01->parent).flags = uVar1 & 0xfffffbff;
		}
		break;
		case 2:uVar1 = (this_01->parent).flags;
		if (bVar4) {
		(this_01->parent).flags = uVar1 | 0x10;
		}
		else {
		(this_01->parent).flags = uVar1 & 0xffffffef;
		}
		break;
		case 3:uVar1 = (this_01->parent).flags;
		if (bVar4) {
		(this_01->parent).flags = uVar1 | 8;
		}
		else {
		(this_01->parent).flags = uVar1 & 0xfffffff7;
		}
		break;
		case 4:uVar1 = (this_01->parent).flags;
		if (bVar4) {
		(this_01->parent).flags = uVar1 | 0x1000;
		}
		else {
		(this_01->parent).flags = uVar1 & 0xffffefff;
		}
		break;
		case 5:thunk_FUN_0003a220(bVar4,(int)this_01);
		break;
		case 6:thunk_FUN_0003a180(bVar4,(int)this_01);
		break;
		case 7:thunk_FUN_0003a1b0(bVar4,(int)this_01);
		break;
		case 8:thunk_FUN_0003a1f0(bVar4,(int)this_01);
		break;
		case 9:thunk_FUN_0003a260(bVar4,(int)this_01);
		}
		}
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < 10);
		return;
		}
		
	*/
	return;
}

