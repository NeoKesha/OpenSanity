#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x293.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x293::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x293::ExecuteFromCallContext(Action0x293 *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		uint uVar4;
		InstanceContextRefCounter *pIVar5;
		uVar1 = this->unlabelled12;
		if ((uVar1 & 1) == 0) {
		uVar4 = uVar1 >> 1 & 1;
		if ((uVar4 == 0) && ((uVar1 & 0xc) == 0)) {
		thunk_FUN_0003a060((char)(((ctx->parent).ctx)->parent).ctx);
		return;
		}
		if ((((uVar4 != 0) &&(pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[0],pIVar5 != (InstanceContextRefCounter *)0x0)) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		if ((((*(byte *)&this->unlabelled12 & 4) != 0) &&(pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[1],pIVar5 != (InstanceContextRefCounter *)0x0)) &&((pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0 &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)))) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		if ((*(byte *)&this->unlabelled12 & 8) == 0) {
		return;
		}
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[5];
		}
		else {
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[0];
		if (((pIVar5 != (InstanceContextRefCounter *)0x0) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[1];
		if (((pIVar5 != (InstanceContextRefCounter *)0x0) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[2];
		if (((pIVar5 != (InstanceContextRefCounter *)0x0) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[3];
		if (((pIVar5 != (InstanceContextRefCounter *)0x0) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		pIVar5 = (GameController1->chunkDescriptor).playerInstanceContexts[5];
		}
		if (((pIVar5 != (InstanceContextRefCounter *)0x0) &&(pIVar2 = pIVar5->ctx, pIVar2 != (InstanceContext *)0x0)) &&(pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character),pIVar3 != (InstanceNodeAbstract *)0x0)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,0xc,(InstanceContextRefCounter *)pIVar2,true,false);
		}
		return;
		}
		
	*/
	return;
}

void Action0x293::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x293::Dispose(Action0x293 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x293::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x293 * __fastcall Action0x293::Construct(Action0x293 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x293;
		this->unlabelled12 = uVar1 & 0xfffffff0;
		return this;
		}
		
	*/
	return;
}

void Action0x293::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x293::UnkMethod(int this,int *param_2){
		char cVar1;
		short *psVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		uVar3 = *(uint *)(psVar2 + 2);
		if (uVar3 < 0x234) {
		if (uVar3 == 0x233) {
		uVar3 = *(uint *)(this + 0xc) | 4;
		}
		else if (uVar3 == 0x3e) {
		uVar3 = *(uint *)(this + 0xc) | 1;
		}
		else {
		if (uVar3 != 0x232) goto LAB_00045d26;
		uVar3 = *(uint *)(this + 0xc) | 2;
		}
		}
		else {
		if (uVar3 != 0x29e) goto LAB_00045d26;
		uVar3 = *(uint *)(this + 0xc) | 8;
		}
		*(uint *)(this + 0xc) = uVar3;
		}
		LAB_00045d26:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

int Action0x293::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int Action0x293::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

