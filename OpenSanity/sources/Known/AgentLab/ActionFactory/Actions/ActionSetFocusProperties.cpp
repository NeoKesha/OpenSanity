#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetFocusProperties.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetFocusProperties::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetFocusProperties::Dispose(ActionSetFocusProperties *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetFocusProperties::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetFocusProperties * __fastcall ActionSetFocusProperties::Construct(ActionSetFocusProperties *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusProperties;
		this->unlabelled12 = uVar1 & 0xfffffc00;
		return this;
		}
		
	*/
	return;
}

int ActionSetFocusProperties::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetFocusProperties::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetFocusProperties::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusProperties::UnkMethod(ActionSetFocusProperties *this,int *param_1){
		char cVar1;
		byte bVar2;
		undefined2 *puVar3;
		uint uVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		puVar3 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*puVar3) {
		case 0x207:bVar2 = FUN_0017efb0((int)puVar3);
		this->unlabelled12 = this->unlabelled12 ^ (this->unlabelled12 ^ (uint)bVar2) & 3;
		break;
		case 0x208:bVar2 = FUN_0017efb0((int)puVar3);
		this->unlabelled12 = this->unlabelled12 ^ ((uint)bVar2 * 4 ^ this->unlabelled12) & 0xc;
		break;
		case 0x20a:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 6 ^ this->unlabelled12) & 0xc0;
		goto LAB_00043242;
		case 0x20b:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 4 ^ this->unlabelled12) & 0x30;
		goto LAB_00043242;
		case 0x216:bVar2 = FUN_0017efb0((int)puVar3);
		uVar4 = ((uint)bVar2 << 8 ^ this->unlabelled12) & 0x300;
		LAB_00043242:this->unlabelled12 = this->unlabelled12 ^ uVar4;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionSetFocusProperties::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusProperties::ExecuteFromCallContext(ActionSetFocusProperties *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		InstanceContext *ctx_00;
		NodeRelated1Abstract *pNVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceNodeCharacter *pIVar5;
		uint uVar6;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if (((uint)fVar2 & 1) == 0) {
		return;
		}
		ctx_00 = (pIVar1->parent).field14_0x20.field4_0x10;
		if (ctx_00 == (InstanceContext *)0x0) {
		return;
		}
		if ((*(byte *)&(ctx_00->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&ctx_00->nodes,Instance);
		pIVar5 = InstanceContext::GetCharacterNode(ctx_00);
		pNVar3 = (pIVar5->field1_0x18->parent).parent.related;
		if (pIVar4 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		uVar6 = this->unlabelled12 & 3;
		if (uVar6 == 1) {
		(*((ctx_00->parent).vtable)->Method1)(ctx_00);
		}
		else if (uVar6 == 2) {
		(*((ctx_00->parent).vtable)->Method2)(ctx_00);
		}
		uVar6 = (uint)this->unlabelled12 >> 2 & 3;
		if (uVar6 == 1) {
		uVar6 = (ctx_00->parent).flags | 0x400;
		LAB_00043335:(ctx_00->parent).flags = uVar6;
		}
		else if (uVar6 == 2) {
		uVar6 = (ctx_00->parent).flags & 0xfffffbff;
		goto LAB_00043335;
		}
		uVar6 = (uint)this->unlabelled12 >> 4 & 3;
		if (uVar6 == 1) {
		uVar6 = (ctx_00->parent).flags | 0x10;
		LAB_00043355:(ctx_00->parent).flags = uVar6;
		}
		else if (uVar6 == 2) {
		uVar6 = (ctx_00->parent).flags & 0xffffffef;
		goto LAB_00043355;
		}
		uVar6 = (uint)this->unlabelled12 >> 6 & 3;
		if (uVar6 == 1) {
		uVar6 = (ctx_00->parent).flags | 8;
		}
		else {
		if (uVar6 != 2) goto LAB_00043378;
		uVar6 = (ctx_00->parent).flags & 0xfffffff7;
		}
		(ctx_00->parent).flags = uVar6;
		LAB_00043378:uVar6 = (uint)this->unlabelled12 >> 8 & 3;
		if (uVar6 == 1) {
		pNVar3->field7_0x10 = pNVar3->field7_0x10 | 0x100;
		}
		else if (uVar6 == 2) {
		pNVar3->field7_0x10 = pNVar3->field7_0x10 & 0xfffffeff;
		return;
		}
		return;
		}
		
	*/
	return;
}

