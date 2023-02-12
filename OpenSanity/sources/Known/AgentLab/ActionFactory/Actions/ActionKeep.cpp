#include "headers/Known/AgentLab/ActionFactory/Actions/ActionKeep.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionKeep::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionKeep::Dispose(ActionKeep *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionKeep::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionKeep * __fastcall ActionKeep::Construct(ActionKeep *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Keep;
		this->unlabelled12 = uVar1 & 0xffffffc0;
		return this;
		}
		
	*/
	return;
}

void ActionKeep::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionKeep::UnkMethod(ActionKeep *this,int *param_1){
		char cVar1;
		short *psVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0x1c:uVar3 = this->unlabelled12 | 0x10;
		break;
		default:goto switchD_0018fdcf_caseD_1d;
		case 0x3c:uVar3 = this->unlabelled12 | 8;
		break;
		case 0x52:uVar3 = this->unlabelled12 | 1;
		break;
		case 0x53:uVar3 = this->unlabelled12 | 2;
		break;
		case 0x54:uVar3 = this->unlabelled12 | 4;
		break;
		case 0x55:uVar3 = this->unlabelled12 & 0xffffffc0;
		break;
		case 0xb2:uVar3 = this->unlabelled12 | 0x20;
		}
		this->unlabelled12 = uVar3;
		}
		switchD_0018fdcf_caseD_1d:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionKeep::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionKeep::ExecuteFromCallContext(ActionKeep *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 1) == 0) {
		fVar2 = (float)((uint)fVar2 & 0xfffffeff);
		}
		else {
		fVar2 = (float)((uint)fVar2 | 0x100);
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = fVar2;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 2) == 0) {
		fVar2 = (float)((uint)fVar2 & 0xfffffdff);
		}
		else {
		fVar2 = (float)((uint)fVar2 | 0x200);
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = fVar2;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 8) == 0) {
		fVar2 = (float)((uint)fVar2 & 0xfffff7ff);
		}
		else {
		fVar2 = (float)((uint)fVar2 | 0x800);
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = fVar2;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 4) == 0) {
		fVar2 = (float)((uint)fVar2 & 0xfffffbff);
		}
		else {
		fVar2 = (float)((uint)fVar2 | 0x400);
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = fVar2;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 0x10) == 0) {
		fVar2 = (float)((uint)fVar2 & 0xffffefff);
		}
		else {
		fVar2 = (float)((uint)fVar2 | 0x1000);
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = fVar2;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((*(byte *)&this->unlabelled12 & 0x20) != 0) {
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 | 0x400000);
		return;
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xffbfffff);
		return;
		}
		
	*/
	return;
}

int ActionKeep::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionKeep::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

