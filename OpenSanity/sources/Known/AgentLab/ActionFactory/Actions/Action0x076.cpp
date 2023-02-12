#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x076.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x076::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x076::Dispose(Action0x076 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x076::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x076::ExecuteFromCallContext(Action0x076 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceNodeAbstract *this_01;
		uint uVar1;
		InstanceContext *pIVar2;
		pIVar2 = ctx;
		this_00 = (ctx->parent).ctx;
		this_01 = (this_00->nodes).array[9];
		if (this_01 != (InstanceNodeAbstract *)0x0) {
		uVar1 = this->unlabelled12;
		ctx = (InstanceContext *)0x0;
		if ((char)uVar1 == -1) {
		if ((uVar1 & 0x400) == 0) {
		if ((uVar1 & 0x100) == 0) {
		if ((uVar1 & 0x200) == 0) {
		return;
		}
		pIVar2 = (InstanceContext *)thunk_FUN_00054db0((int)this_00);
		}
		else {
		pIVar2 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar2 = PTR_00496350->ctx;
		}
		}
		}
		else {
		InstanceContext::thunk_FUN_00054ce0(this_00,(int *)&ctx);
		pIVar2 = ctx;
		}
		}
		else {
		pIVar2 = *(InstanceContext **)((pIVar2->parent).flags + 4 + (uVar1 & 0xff) * 4);
		}
		if (pIVar2 != (InstanceContext *)0x0) {
		FUN_0017c2d0(this_01,(undefined4 *)pIVar2,this->unlabelled16,(int)this_00,(byte)((uint)this->unlabelled12 >> 0xb) & 1);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x076::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x076 * __fastcall Action0x076::Construct(Action0x076 *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x076;
		this->unlabelled12 = uVar1 & 0xfffff0ff | 0xff;
		this->unlabelled16 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int Action0x076::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x076::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x076::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x076::UnkMethod(Action0x076 *this,int *param_1){
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
		if (sVar1 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar3 + 2);
		}
		else if (sVar1 == 0xc2) {
		this->unlabelled16 = *(int *)(psVar3 + 2);
		}
		else if (sVar1 == -1) {
		switch(*(undefined4 *)(psVar3 + 2)) {
		case 0x1c:this->unlabelled12 = this->unlabelled12 | 0x400;
		break;
		case 0x2f:this->unlabelled12 = this->unlabelled12 | 0x800;
		break;
		case 0x75:this->unlabelled12 = this->unlabelled12 | 0x200;
		break;
		case 0x88:this->unlabelled12 = this->unlabelled12 | 0x100;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

