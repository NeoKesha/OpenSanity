#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x09D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x09D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x09D::Dispose(Action0x09D *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x09D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x09D * __fastcall Action0x09D::Construct(Action0x09D *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x09D;
		*(undefined *)&this->unlabelled12 = 0xff;
		this->unlabelled16 = uVar1 & 0xfffffff8;
		return this;
		}
		
	*/
	return;
}

void Action0x09D::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09D::UnkMethod(Action0x09D *this,int *param_1){
		char cVar1;
		short *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = FUN_0017f240(this_00,(uint)*(byte *)&this->unlabelled12);
		*(char *)&this->unlabelled12 = (char)uVar2;
		if (*this_00 == 0x72) {
		*(char *)&this->unlabelled12 = *(char *)(this_00 + 2) + -1;
		uVar2 = this->unlabelled16 | 2;
		LAB_001906cb:this->unlabelled16 = uVar2;
		}
		else if ((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) {
		if (*(int *)(this_00 + 2) == 0x3e) {
		uVar2 = this->unlabelled16 | 1;
		}
		else {
		if (*(int *)(this_00 + 2) != 0xa5) goto LAB_001906ce;
		uVar2 = this->unlabelled16 | 4;
		}
		goto LAB_001906cb;
		}
		LAB_001906ce:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x09D::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09D::ExecuteFromCallContext(Action0x09D *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeObjectLink *this_00;
		InstanceContext *pIVar1;
		uint uVar2;
		pIVar1 = (ctx->parent).ctx;
		this_00 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,ObjectLink);
		if (this_00 != (InstanceNodeObjectLink *)0x0) {
		uVar2 = this->unlabelled16;
		if ((uVar2 & 1) != 0) {
		FUN_000fa170(this_00);
		return;
		}
		if ((uVar2 & 4) == 0) {
		if ((uVar2 & 2) == 0) {
		pIVar1 = (*(pIVar1->parent).vtable[7].Dispose)(pIVar1,*(byte *)&this->unlabelled12);
		uVar2 = InstanceNodeObjectLink::FUN_000f6c20(this_00,(int)pIVar1);
		if (uVar2 == 0xffffffff) {
		return;
		}
		}
		else {
		pIVar1 = (&(this_00->field9_0x20).ctx)[*(byte *)&this->unlabelled12];
		}
		}
		else {
		pIVar1 = (&(this_00->field9_0x20).ctx)[this_00->field7_0x18 >> 7 & 0x1f];
		}
		if (pIVar1 != (InstanceContext *)0x0) {
		InstanceNodeObjectLink::FUN_000fc0b0(this_00,(undefined4 *)pIVar1,0,'\x01','\0');
		}
		}
		return;
		}
		
	*/
	return;
}

int Action0x09D::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x09D::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

