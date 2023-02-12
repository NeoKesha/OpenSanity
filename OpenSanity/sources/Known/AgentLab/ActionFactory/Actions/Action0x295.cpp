#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x295.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x295::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x295::Dispose(Action0x295 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x295::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x295 * __fastcall Action0x295::Construct(Action0x295 *this){
		uint uVar1;
		uVar1 = this->unlabelled100;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x295;
		this->unlabelled100 = uVar1 & 0xfffffc00;
		return this;
		}
		
	*/
	return;
}

int Action0x295::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x295::GetSize(void){
		return 0x68;
		}
		
	*/
	return 0;
}

void Action0x295::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x295::UnkMethod(Action0x295 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		uint uVar4;
		uint uVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0x15) {
		*(short *)((int)&this->unlabelled12 + (this->unlabelled100 & 0xfU) * 2) = psVar3[2];
		uVar4 = this->unlabelled100;
		uVar5 = (uVar4 + 1 ^ uVar4) & 0xf;
		LAB_00045501:this->unlabelled100 = uVar5 ^ uVar4;
		}
		else {
		if (sVar1 == 0x16) {
		*(short *)((int)&this->unlabelled36 + ((uint)this->unlabelled100 >> 4 & 0x1f) * 2) =psVar3[2];
		uVar4 = this->unlabelled100;
		uVar5 = ((uVar4 & 0xfffffff0) + 0x10 ^ uVar4) & 0x1f0;
		goto LAB_00045501;
		}
		if ((sVar1 == -1) && (*(int *)(psVar3 + 2) == 0x128)) {
		this->unlabelled100 = this->unlabelled100 | 0x200;
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

void Action0x295::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x295::ExecuteFromCallContext(Action0x295 *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		GameObject *this_00;
		uint uVar2;
		int *piVar3;
		uint *this_01;
		InstanceNodeAbstract **ppIVar4;
		InstanceContext *local_4;
		InstanceNodeInput *pIVar1;
		local_4 = (ctx->parent).ctx;
		pIVar1 = (InstanceNodeInput *)(local_4->nodes).array[0xb];
		if ((pIVar1 != (InstanceNodeInput *)0x0) && (*(char *)&(pIVar1->parent).ctx == '\x03')) {
		if (((this->unlabelled100 & 0x200U) != 0) || (((pIVar1->parent).time & 0xf00) == 0)) {
		uVar2 = 0;
		if ((this->unlabelled100 & 0xfU) != 0) {
		piVar3 = &this->unlabelled12;
		do {
		*(undefined2 *)((int)&(pIVar1->parent).field5_0x10 + ((pIVar1->parent).time >> 8 & 0xf) * 2) =*(undefined2 *)piVar3;
		uVar1 = (pIVar1->parent).time;
		(pIVar1->parent).time = ((uVar1 & 0xffffff00) + 0x100 ^ uVar1) & 0xf00 ^ uVar1;
		uVar2 = uVar2 + 1;
		piVar3 = (int *)((int)piVar3 + 2);
		}
		 while (uVar2 < (this->unlabelled100 & 0xfU));
		}
		this_01 = &pIVar1[1].parent.time;
		ppIVar4 = &(pIVar1->parent).field5_0x10;
		ctx = (InstanceContext *)&Eight;
		do {
		FUN_0016f280((int)this_01,*(undefined2 *)ppIVar4);
		ppIVar4 = (InstanceNodeAbstract **)((int)ppIVar4 + 2);
		this_01 = this_01 + 0x1c;
		ctx = (InstanceContext *)&ctx[-1].field_0x16f;
		}
		 while (ctx != (InstanceContext *)0x0);
		}
		if (((((this->unlabelled100 & 0x200U) != 0) || (((pIVar1->parent).time & 0xf000) == 0)) &&(this_00 = FUN_00172f50((int)local_4), this_00 != (GameObject *)0x0)) &&(uVar2 = 0, (this->unlabelled100 & 0x1f0U) != 0)) {
		piVar3 = &this->unlabelled36;
		do {
		if (*(ushort *)piVar3 != 0xffff) {
		FUN_001a8100((int)this_00,(undefined2 *)&local_4,(uint)*(ushort *)piVar3);
		if ((ushort)local_4 != 0xffff) {
		*(ushort *)(&pIVar1->field_0x20 + ((pIVar1->parent).time >> 0xc & 0xf) * 2) =(ushort)local_4 & 0x7fff;
		uVar1 = (pIVar1->parent).time;
		(pIVar1->parent).time = ((uVar1 & 0xfffff000) + 0x1000 ^ uVar1) & 0xf000 ^ uVar1;
		}
		}
		uVar2 = uVar2 + 1;
		piVar3 = (int *)((int)piVar3 + 2);
		}
		 while (uVar2 < ((uint)this->unlabelled100 >> 4 & 0x1f));
		}
		}
		return;
		}
		
	*/
	return;
}

