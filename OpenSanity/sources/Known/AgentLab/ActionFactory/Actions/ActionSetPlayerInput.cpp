#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetPlayerInput.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetPlayerInput::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetPlayerInput::Dispose(ActionSetPlayerInput *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetPlayerInput::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetPlayerInput * __fastcall ActionSetPlayerInput::Construct(ActionSetPlayerInput *this){
		uint uVar1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		*(undefined2 *)&this->unlabelled12 = 0;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0;
		uVar1 = this->unlabelled16;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetPlayerInput;
		this->unlabelled16 = uVar1 & 0xfffffffc;
		return this;
		}
		
	*/
	return;
}

int ActionSetPlayerInput::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetPlayerInput::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void ActionSetPlayerInput::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPlayerInput::UnkMethod(ActionSetPlayerInput *this,int *param_1){
		byte *pbVar1;
		ushort uVar2;
		char cVar3;
		bool bVar4;
		ushort *puVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		puVar5 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = *puVar5;
		if (uVar2 < 0x22d) {
		if (uVar2 == 0x22c) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 8;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 8;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 8;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xf7;
		}
		}
		else if (uVar2 < 0x22a) {
		if (uVar2 == 0x229) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 1;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 1;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 1;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xfe;
		}
		}
		else if (uVar2 == 0x81) {
		bVar4 = FUN_0017ef90((int)puVar5);
		this->unlabelled16 =this->unlabelled16 ^ ((uint)(bVar4 == false) << 1 ^ this->unlabelled16) & 2;
		}
		else if (uVar2 == 0x20d) {
		thunk_FUN_00037a20((int)this,(int)puVar5,6);
		}
		}
		else if (uVar2 == 0x22a) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 2;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 2;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 2;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xfd;
		}
		}
		else if (uVar2 == 0x22b) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 4;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 4;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 4;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xfb;
		}
		}
		}
		else if (uVar2 < 0x231) {
		if (uVar2 == 0x230) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 0x80;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 0x80;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 0x80;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0x7f;
		}
		}
		else if (uVar2 == 0x22d) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 0x10;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 0x10;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 0x10;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xef;
		}
		}
		else if (uVar2 == 0x22e) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 0x20;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 0x20;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 0x20;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar1 = *pbVar1 & 0xdf;
		}
		}
		}
		else if (uVar2 == 0x237) {
		if (*(int *)(puVar5 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 0x100;
		puVar5 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar5 = *puVar5 | 0x100;
		}
		else if (*(int *)(puVar5 + 2) == 1) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 0x100;
		pbVar1 = (byte *)((int)&this->unlabelled12 + 3);
		*pbVar1 = *pbVar1 & 0xfe;
		}
		}
		else if (uVar2 == 0xffff) {
		if (*(int *)(puVar5 + 2) == 0xb4) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffe;
		}
		else if (*(int *)(puVar5 + 2) == 0xb5) {
		this->unlabelled16 = this->unlabelled16 | 1;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetPlayerInput::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPlayerInput::ExecuteFromCallContext(ActionSetPlayerInput *this,undefined4 time_clock,InstanceContext *ctx){
		uint *puVar1;
		InstanceNodeAbstract_VTable *pIVar2;
		ushort uVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *pIVar5;
		int iVar6;
		InstanceNodeAbstract_VTable *pIVar7;
		InstanceDataList *this_00;
		bool bVar8;
		this_00 = &((((ctx->parent).ctx)->parent).ctx)->nodes;
		pIVar4 = InstanceDataList::GetNode(this_00,Character);
		if (pIVar4 == (InstanceNodeAbstract *)0x0) {
		pIVar5 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar5 = PTR_00496350->ctx;
		}
		this_00 = (InstanceDataList *)(&pIVar5->field27_0xe0 + 1);
		pIVar4 = InstanceDataList::GetNode(this_00,Character);
		}
		pIVar2 = pIVar4[1].vtable;
		iVar6 = 0;
		do {
		uVar3 = (ushort)(1 << ((byte)iVar6 & 0x1f));
		if ((*(ushort *)&this->unlabelled12 & uVar3) != 0) {
		bVar8 = (*(ushort *)((int)&this->unlabelled12 + 2) & uVar3) != 0;
		switch(iVar6) {
		case 0:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xfffffffe);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 1);
		}
		break;
		case 1:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xfffffffd);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 2);
		}
		break;
		case 2:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xfffffffb);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 4);
		}
		break;
		case 3:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xfffffff7);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 8);
		}
		break;
		case 4:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xffffffef);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 0x10);
		}
		break;
		case 5:if (bVar8) {
		pIVar2[6].DisposeSomething =(DisposeSomething *)((uint)pIVar2[6].DisposeSomething & 0xffffffdf);
		}
		else {
		pIVar2[6].DisposeSomething = (DisposeSomething *)((uint)pIVar2[6].DisposeSomething | 0x20);
		}
		break;
		case 6:if (bVar8) {
		pIVar2[6].DisposeSomething = (DisposeSomething *)0x0;
		}
		else if ((*(byte *)&this->unlabelled16 & 1) == 0) {
		pIVar2[6].DisposeSomething = (DisposeSomething *)0xffffffff;
		}
		break;
		case 7:puVar1 = (uint *)(pIVar2->Method8 + 0x14);
		*puVar1 = *puVar1 ^ ((uint)bVar8 << 1 ^ *(uint *)(pIVar2->Method8 + 0x14)) & 2;
		break;
		case 8:puVar1 = (uint *)(pIVar2->Method8 + 0x10);
		*puVar1 = *puVar1 ^ ((uint)!bVar8 << 10 ^ *(uint *)(pIVar2->Method8 + 0x10)) & 0x400;
		}
		}
		iVar6 = iVar6 + 1;
		}
		 while (iVar6 < 9);
		pIVar4 = InstanceDataList::GetNode(this_00,Input);
		if ((*(byte *)&this->unlabelled16 & 1) == 0) {
		pIVar7 = (InstanceNodeAbstract_VTable *)((uint)pIVar4[2].vtable & 0xfffffffe);
		}
		else {
		pIVar7 = (InstanceNodeAbstract_VTable *)((uint)pIVar4[2].vtable | 1);
		}
		pIVar4[2].vtable = pIVar7;
		if ((*(byte *)&this->unlabelled16 & 2) == 0) {
		pIVar2[2].Method8 = (Method8 *)((uint)pIVar2[2].Method8 & 0xffff7fff);
		return;
		}
		pIVar2[2].Method8 = (Method8 *)((uint)pIVar2[2].Method8 | 0x8000);
		return;
		}
		
	*/
	return;
}

