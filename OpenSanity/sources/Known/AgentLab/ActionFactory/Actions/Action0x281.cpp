#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x281.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x281::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x281::ExecuteFromCallContext(Action0x281 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		bool bVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract **this_01;
		InstanceNodeInput *pIVar1;
		this_00 = (ctx->parent).ctx;
		pIVar1 = (InstanceNodeInput *)(this_00->nodes).array[0xb];
		this_01 = &(pIVar1->parent).field5_0x10;
		switch(this->subtype) {
		case 0:thunk_FUN_00038b70(this_01,*(undefined *)&this->unlabelled32,*(undefined *)((int)&this->unlabelled32 + 1),*(undefined *)((int)&this->unlabelled32 + 2),(int)this_00);
		return;
		case 1:if ((*(byte *)&this->unlabelled20 & 1) != 0) {
		bVar1 = *(char *)((int)&pIVar1[1].parent.field5_0x10 + 1) == '\0';
		*(bool *)&pIVar1[1].parent.field5_0x10 = bVar1;
		*(bool *)((int)&pIVar1[1].parent.field5_0x10 + 1) = !bVar1;
		}
		if ((*(byte *)&this->unlabelled20 & 2) != 0) {
		bVar1 = *(char *)((int)&pIVar1[4].parent.field6_0x14 + 1) == '\0';
		*(bool *)&pIVar1[4].parent.field6_0x14 = bVar1;
		*(bool *)((int)&pIVar1[4].parent.field6_0x14 + 1) = !bVar1;
		}
		if ((*(byte *)&this->unlabelled20 & 4) != 0) {
		bVar1 = *(char *)((int)&pIVar1[7].input + 1) == '\0';
		*(bool *)&pIVar1[7].input = bVar1;
		*(bool *)((int)&pIVar1[7].input + 1) = !bVar1;
		return;
		}
		break;
		case 2:if ((*(byte *)&this->unlabelled20 & 1) != 0) {
		*(undefined *)((int)&pIVar1[1].parent.field5_0x10 + 2) =*(undefined *)((int)&pIVar1[1].parent.field5_0x10 + 1);
		*(undefined *)&pIVar1[1].parent.field5_0x10 = 0;
		*(undefined *)((int)&pIVar1[1].parent.field5_0x10 + 1) = 0;
		}
		if ((*(byte *)&this->unlabelled20 & 2) != 0) {
		*(undefined *)((int)&pIVar1[4].parent.field6_0x14 + 2) =*(undefined *)((int)&pIVar1[4].parent.field6_0x14 + 1);
		*(undefined *)&pIVar1[4].parent.field6_0x14 = 0;
		*(undefined *)((int)&pIVar1[4].parent.field6_0x14 + 1) = 0;
		}
		if ((*(byte *)&this->unlabelled20 & 4) != 0) {
		*(undefined *)((int)&pIVar1[7].input + 2) = *(undefined *)((int)&pIVar1[7].input + 1);
		*(undefined *)&pIVar1[7].input = 0;
		*(undefined *)((int)&pIVar1[7].input + 1) = 0;
		return;
		}
		break;
		case 3:pIVar2 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)&this->unlabelled12);
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar1->input = (InputStruct *)pIVar2;
		pIVar1->field19_0x30 = 2;
		return;
		}
		bVar1 = (*(this_00->parent).vtable[7].Method1)(this_00);
		if (bVar1 != false) {
		thunk_FUN_0002c750((int)this_01,(undefined4 *)&stack0xffffffd8);
		return;
		}
		break;
		case 4:if ((*(byte *)&this->unlabelled20 & 1) != 0) {
		pIVar1[1].parent.field6_0x14 = this->unlabelled24;
		pIVar1[1].input = (InputStruct *)this->unlabelled28;
		}
		if ((*(byte *)&this->unlabelled20 & 2) != 0) {
		pIVar1[4].input = (InputStruct *)this->unlabelled24;
		*(int *)&pIVar1[4].field_0x1c = this->unlabelled28;
		}
		if ((*(byte *)&this->unlabelled20 & 4) != 0) {
		*(int *)&pIVar1[7].field_0x1c = this->unlabelled24;
		*(int *)&pIVar1[7].field_0x20 = this->unlabelled28;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x281::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x281::UnkMethod(int this,int *param_2){
		short sVar1;
		int iVar2;
		bool bVar3;
		char cVar4;
		byte bVar5;
		short *psVar6;
		uint uVar7;
		IteratorE2 local_10;
		iVar2 = *(int *)(this + 0x10);
		if (iVar2 == 0) {
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		psVar6 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar6;
		if (sVar1 == 0x133) {
		*(undefined *)(this + 0x20) = *(undefined *)(psVar6 + 2);
		}
		else if (sVar1 == 0x134) {
		*(undefined *)(this + 0x21) = *(undefined *)(psVar6 + 2);
		}
		else if (sVar1 == 0x135) {
		*(undefined *)(this + 0x22) = *(undefined *)(psVar6 + 2);
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		return;
		}
		}
		else if (iVar2 == 3) {
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		psVar6 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar6 == 199) {
		uVar7 = FUN_0017f240(psVar6,(uint)*(byte *)(this + 0xc));
		*(char *)(this + 0xc) = (char)uVar7;
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		return;
		}
		}
		else if ((iVar2 == 2) || (iVar2 == 1)) {
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		while (cVar4 == '\0') {
		psVar6 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar6 == -1) {
		iVar2 = *(int *)(psVar6 + 2);
		if (iVar2 == 0x123) {
		bVar5 = *(byte *)(this + 0x14) | 1;
		}
		else if (iVar2 == 0x124) {
		bVar5 = *(byte *)(this + 0x14) | 2;
		}
		else {
		if (iVar2 != 0x125) goto LAB_00044c9b;
		bVar5 = *(byte *)(this + 0x14) | 4;
		}
		*(byte *)(this + 0x14) = bVar5;
		}
		LAB_00044c9b:IteratorE2::Iterate(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		}
		}
		else if (iVar2 == 4) {
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		psVar6 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar6;
		if (sVar1 == 0x59) {
		*(undefined4 *)(this + 0x18) = *(undefined4 *)(psVar6 + 2);
		}
		else if (sVar1 == 0xd6) {
		*(undefined4 *)(this + 0x1c) = *(undefined4 *)(psVar6 + 2);
		}
		else if (sVar1 == -1) {
		iVar2 = *(int *)(psVar6 + 2);
		if (iVar2 == 0x123) {
		*(byte *)(this + 0x14) = *(byte *)(this + 0x14) | 1;
		}
		else if (iVar2 == 0x124) {
		*(byte *)(this + 0x14) = *(byte *)(this + 0x14) | 2;
		}
		else if (iVar2 == 0x125) {
		*(byte *)(this + 0x14) = *(byte *)(this + 0x14) | 4;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x281::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x281::Dispose(Action0x281 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x281::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x281 * __thiscall Action0x281::Construct(Action0x281 *this,int param_1){
		byte bVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		this->subtype = param_1;
		bVar1 = *(byte *)&this->unlabelled20;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x281;
		*(undefined *)&this->unlabelled12 = 0xff;
		*(byte *)&this->unlabelled20 = bVar1 & 0xf8;
		this->unlabelled24 = (int)fVar2;
		this->unlabelled28 = (int)fVar2;
		*(undefined *)&this->unlabelled32 = 0xff;
		*(undefined *)((int)&this->unlabelled32 + 1) = 0xff;
		*(undefined *)((int)&this->unlabelled32 + 2) = 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x281::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x281::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

