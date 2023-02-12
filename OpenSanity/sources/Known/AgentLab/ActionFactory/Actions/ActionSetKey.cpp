#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetKey.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetKey::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetKey::Dispose(ActionSetKey *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetKey::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionSetKey::ExecuteFromCallContext(ActionSetKey *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		byte bVar2;
		InstanceContext *pIVar3;
		char cVar4;
		uint uVar5;
		uint uVar6;
		int iVar7;
		float *pfVar8;
		uint uVar9;
		InstanceNodeAbstract *this_00;
		float fVar10;
		float fVar11;
		Vector4 local_20;
		pIVar3 = (ctx->parent).ctx;
		iVar7 = (pIVar3->parent).field14_0x20.field27_0x78;
		if (iVar7 == 0) {
		this_00 = (pIVar3->nodes).array[0xf];
		}
		else {
		this_00 = *(InstanceNodeAbstract **)(iVar7 + 0x124);
		}
		uVar6 = this->unlabelled12;
		uVar5 = uVar6 & 0xff;
		cVar4 = (char)uVar5;
		if (uVar5 != 0xff) {
		bVar2 = *(byte *)((int)&this_00[2].field5_0x10 + 1);
		*(byte *)&this_00[2].field5_0x10 =*(byte *)&this_00[2].field5_0x10 ^((uVar5 == bVar2) << 3 ^ *(byte *)&this_00[2].field5_0x10) & 8;
		if (bVar2 <= uVar5) {
		cVar4 = cVar4 - bVar2;
		}
		*(char *)&this_00[2].field6_0x14 = cVar4;
		return;
		}
		uVar5 = uVar6 >> 0x1b & 1;
		if ((uVar5 == 0) || (bVar2 = *(byte *)((int)&this->unlabelled12 + 1), bVar2 == 0xff)) {
		if ((uVar5 != 0) && (bVar2 = *(byte *)((int)&this->unlabelled12 + 2), bVar2 != 0xff)) {
		uVar6 = FUN_000d4360((uint)bVar2);
		thunk_FUN_0002b740((int)this_00,uVar6);
		return;
		}
		if ((uVar6 & 0x4000000) == 0) {
		if ((uVar6 & 0x10000000) != 0) {
		thunk_FUN_0002b740((int)this_00,*(byte *)((int)&this_00[2].field5_0x10 + 1) - 1);
		}
		return;
		}
		pIVar3 = (pIVar3->parent).ctx;
		if (*(char *)((int)&this->unlabelled12 + 1) == -1) {
		*(undefined *)((int)&this->unlabelled12 + 1) = 0;
		}
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar3,&local_20);
		uVar5 = (uint)*(byte *)((int)&this->unlabelled12 + 1);
		uVar9 = (uint)*(byte *)((int)&this_00[2].field5_0x10 + 1);
		uVar6 = 0;
		if (uVar5 < uVar9) {
		fVar11 = FLOAT_003942e8;
		do {
		if (*(byte *)((int)&this->unlabelled12 + 2) <= uVar5) break;
		if (*(char *)((int)&this_00[2].field5_0x10 + 1) == '\0') {
		pfVar8 = (float *)0x0;
		}
		else if ((int)uVar5 < (int)uVar9) {
		pfVar8 = (float *)(&this_00->vtable->DisposeSomething)[uVar5];
		}
		else {
		pfVar8 = (float *)0x0;
		}
		fVar10 = (local_20.z - pfVar8[2]) * (local_20.z - pfVar8[2]) +(local_20.y - pfVar8[1]) * (local_20.y - pfVar8[1]) +(local_20.x - *pfVar8) * (local_20.x - *pfVar8);
		if (fVar10 < fVar11) {
		uVar6 = uVar5;
		fVar11 = fVar10;
		}
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < *(byte *)((int)&this_00[2].field5_0x10 + 1));
		}
		*(byte *)&this_00[2].field5_0x10 =*(byte *)&this_00[2].field5_0x10 ^((uVar6 == uVar9) << 3 ^ *(byte *)&this_00[2].field5_0x10) & 8;
		if ((int)uVar9 <= (int)uVar6) {
		uVar6 = uVar6 - uVar9;
		}
		*(char *)&this_00[2].field6_0x14 = (char)uVar6;
		return;
		}
		bVar1 = *(byte *)((int)&this_00[2].field5_0x10 + 1);
		uVar5 = (uint)*(byte *)((int)&this->unlabelled12 + 2);
		uVar6 = bVar1 - 1;
		if ((int)uVar5 <= (int)uVar6) {
		uVar6 = uVar5;
		}
		uVar5 = 0;
		if (1 < bVar1) {
		do {
		iVar7 = FUN_000d4360((uVar6 - bVar2) + 1);
		uVar5 = iVar7 + (uint)*(byte *)((int)&this->unlabelled12 + 1);
		if ((this->unlabelled12 & 0x2000000U) == 0) break;
		}
		 while (uVar5 == *(byte *)&this_00[2].field6_0x14);
		}
		thunk_FUN_0002b740((int)this_00,uVar5);
		return;
		}
		
	*/
	return;
}

void ActionSetKey::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetKey * __fastcall ActionSetKey::Construct(ActionSetKey *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetKey;
		this->unlabelled12 = uVar1 & 0xe8ffffff | 0x8ffffff;
		return this;
		}
		
	*/
	return;
}

void ActionSetKey::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetKey::UnkMethod(ActionSetKey *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x5b) {
		if (uVar1 == 0x5a) {
		*(char *)((int)&this->unlabelled12 + 1) = *(char *)(puVar3 + 2) + -1;
		}
		else if (uVar1 == 7) {
		*(char *)&this->unlabelled12 = *(char *)(puVar3 + 2) + -1;
		}
		else if (uVar1 == 0x58) {
		this->unlabelled12 = this->unlabelled12 | 0x1000000;
		}
		}
		else if (uVar1 == 0x5b) {
		*(char *)((int)&this->unlabelled12 + 2) = *(char *)(puVar3 + 2) + -1;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 0xc2:this->unlabelled12 = this->unlabelled12 | 0x2000000;
		break;
		case 0xc4:this->unlabelled12 = this->unlabelled12 | 0x10000000;
		break;
		case 0xd2:this->unlabelled12 = this->unlabelled12 | 0x4000000;
		break;
		case 0xfc:this->unlabelled12 = this->unlabelled12 & 0xf7ffffff;
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

int ActionSetKey::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetKey::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

