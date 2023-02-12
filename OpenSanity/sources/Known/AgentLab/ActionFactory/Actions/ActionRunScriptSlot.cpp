#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRunScriptSlot.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRunScriptSlot::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRunScriptSlot::Dispose(ActionRunScriptSlot *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRunScriptSlot::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRunScriptSlot * __fastcall ActionRunScriptSlot::Construct(ActionRunScriptSlot *this){
		uint uVar1;
		*(undefined2 *)&this->unlabelled12 = 0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		uVar1 = this->unlabelled12;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_RunScriptSlot;
		this->unlabelled12 = uVar1 & 0xfffeffff;
		return this;
		}
		
	*/
	return;
}

void ActionRunScriptSlot::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRunScriptSlot::UnkMethod(ActionRunScriptSlot *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x70) {
		*(short *)&this->unlabelled12 = psVar2[2];
		}
		else if (*psVar2 == 0xcb) {
		this->unlabelled12 =this->unlabelled12 ^ (*(int *)(psVar2 + 2) << 0x10 ^ this->unlabelled12) & 0x10000U;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionRunScriptSlot::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRunScriptSlot::ExecuteFromCallContext(ActionRunScriptSlot *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		int iVar1;
		float this_01;
		this_00 = (ctx->parent).ctx;
		iVar1 = (this_00->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		this_01 = (this_00->parent).field14_0x20.matrix2.m33;
		}
		else {
		this_01 = (float)FUN_00015286(iVar1);
		}
		FUN_001a80c0((int)this_01,(undefined2 *)&ctx,this->unlabelled12 & 0xffff);
		if (((short)ctx != -1) &&(((GameResources->parent).scripts)->elements[(uint)ctx & 0x7fff] != (ScriptAbstract *)0x0)) {
		(*(this_00->parent).vtable[3].Method2)(this_00);
		}
		return;
		}
		
	*/
	return;
}

int ActionRunScriptSlot::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRunScriptSlot::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

