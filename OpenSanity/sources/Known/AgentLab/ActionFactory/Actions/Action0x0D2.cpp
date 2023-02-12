#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0D2.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0D2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0D2::Dispose(Action0x0D2 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0D2::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0D2::ExecuteFromCallContext(Action0x0D2 *this,undefined4 time_clock,InstanceContext *ctx){
		char cVar1;
		InstanceContext *pIVar2;
		InstanceContext *ctx_00;
		bool bVar3;
		byte bVar4;
		short sVar5;
		UnkFamily5AB *this_00;
		uint uVar6;
		InstanceNodeAbstract *pIVar7;
		UnkFamily5AA *pUVar8;
		uint uVar9;
		InstanceContext **ppIVar10;
		UnkFamily5AA *pUVar11;
		InstanceContextSmartPtr IVar12;
		undefined4 uVar13;
		AutoClass14 local_24;
		pIVar2 = (ctx->parent).ctx;
		ctx_00 = (pIVar2->parent).ctx;
		local_24.field4_0xc = local_24.field4_0xc & 0xfffffffe | 2;
		pUVar11 = (UnkFamily5AA *)0x0;
		local_24.array = (InstanceContext **)&DAT_004948a0;
		local_24.field1_0x4 = 0;
		local_24.cnt = 0x400;
		local_24.field3_0x8 = FLOAT_00393c64;
		local_24.field5_0x10 = 0;
		local_24.field6_0x14 = 1;
		local_24.field7_0x18 = 0;
		local_24.field9_0x20 = 0;
		local_24.field8_0x1c = 0;
		FUN_00137280((int)&local_24,(int)ctx_00);
		this_00 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_00 != (UnkFamily5AB *)0x0) {
		uVar13 = 2;
		if (ctx_00 == (InstanceContext *)0x0) {
		IVar12 = (InstanceContextSmartPtr)0x0;
		}
		else {
		IVar12 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		}
		pUVar11 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_00,*(undefined2 *)&this->unlabelled12,IVar12,uVar13);
		}
		uVar6 = ChunkData::FillCtxList((ctx_00->parent).chunkData,2,&local_24);
		bVar4 = BYTE_003a35ec;
		cVar1 = *(char *)&(pIVar2->parent).field14_0x20.matrix2.m44;
		uVar9 = this->unlabelled16 & 0xff;
		bVar3 = false;
		if (uVar9 < 4) {
		sVar5 = (short)uVar6;
		switch(uVar9) {
		case 0:if ((BYTE_003a35ec == 0xff) || (sVar5 == 0)) goto switchD_0016b6e9_caseD_4;
		uVar6 = uVar6 & 0xffff;
		ppIVar10 = (InstanceContext **)&DAT_004948a0;
		do {
		pIVar7 = InstanceDataList::GetNode(&(*ppIVar10)->nodes,Instance);
		if (*(char *)&pIVar7[5].field6_0x14 == cVar1) {
		bVar3 = true;
		pUVar8 = pUVar11;
		if (pUVar11 != (UnkFamily5AA *)0x0) {
		pUVar8 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar11->parent).parent.someStruct,pUVar11,1);
		}
		InstanceContext::FUN_000fa200(*ppIVar10,(char)pUVar8);
		}
		ppIVar10 = ppIVar10 + 1;
		uVar6 = uVar6 - 1;
		}
		 while (uVar6 != 0);
		break;
		case 1:if ((BYTE_003a35ec == 0xff) || (sVar5 == 0)) goto switchD_0016b6e9_caseD_4;
		ppIVar10 = (InstanceContext **)&DAT_004948a0;
		uVar6 = uVar6 & 0xffff;
		do {
		pIVar7 = InstanceDataList::GetNode(&(*ppIVar10)->nodes,Instance);
		if (*(byte *)&pIVar7[5].field6_0x14 == bVar4) {
		bVar3 = true;
		pUVar8 = pUVar11;
		if (pUVar11 != (UnkFamily5AA *)0x0) {
		pUVar8 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar11->parent).parent.someStruct,pUVar11,1);
		}
		InstanceContext::FUN_000fa200(*ppIVar10,(char)pUVar8);
		}
		ppIVar10 = ppIVar10 + 1;
		uVar6 = uVar6 - 1;
		}
		 while (uVar6 != 0);
		break;
		case 2:if ((BYTE_003a35ec == 0xff) || (sVar5 == 0)) goto switchD_0016b6e9_caseD_4;
		ppIVar10 = (InstanceContext **)&DAT_004948a0;
		uVar6 = uVar6 & 0xffff;
		do {
		pIVar7 = InstanceDataList::GetNode(&(*ppIVar10)->nodes,Instance);
		if (*(byte *)&pIVar7[5].field6_0x14 < bVar4) {
		bVar3 = true;
		pUVar8 = pUVar11;
		if (pUVar11 != (UnkFamily5AA *)0x0) {
		pUVar8 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar11->parent).parent.someStruct,pUVar11,1);
		}
		InstanceContext::FUN_000fa200(*ppIVar10,(char)pUVar8);
		}
		ppIVar10 = ppIVar10 + 1;
		uVar6 = uVar6 - 1;
		}
		 while (uVar6 != 0);
		break;
		case 3:if ((BYTE_003a35ec == 0xff) || (sVar5 == 0)) goto switchD_0016b6e9_caseD_4;
		ppIVar10 = (InstanceContext **)&DAT_004948a0;
		uVar6 = uVar6 & 0xffff;
		do {
		pIVar7 = InstanceDataList::GetNode(&(*ppIVar10)->nodes,Instance);
		if (*(byte *)&pIVar7[5].field6_0x14 < bVar4 || *(byte *)&pIVar7[5].field6_0x14 == bVar4) {
		bVar3 = true;
		pUVar8 = pUVar11;
		if (pUVar11 != (UnkFamily5AA *)0x0) {
		pUVar8 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar11->parent).parent.someStruct,pUVar11,1);
		}
		InstanceContext::FUN_000fa200(*ppIVar10,(char)pUVar8);
		}
		ppIVar10 = ppIVar10 + 1;
		uVar6 = uVar6 - 1;
		}
		 while (uVar6 != 0);
		}
		if (bVar3) {
		return;
		}
		}
		switchD_0016b6e9_caseD_4:if (pUVar11 != (UnkFamily5AA *)0x0) {
		(*(code *)*(pUVar11->parent).parent.vtable)();
		}
		return;
		}
		
	*/
	return;
}

void Action0x0D2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0D2 * __fastcall Action0x0D2::Construct(Action0x0D2 *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0D2;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		this->unlabelled16 = uVar1 | 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x0D2::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0D2::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0D2::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0D2::UnkMethod(Action0x0D2 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6d) {
		*(short *)&this->unlabelled12 = psVar2[2];
		}
		else if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0x11f:*(undefined *)&this->unlabelled16 = 0;
		break;
		case 0x120:*(undefined *)&this->unlabelled16 = 2;
		break;
		case 0x121:*(undefined *)&this->unlabelled16 = 3;
		break;
		case 0x122:*(undefined *)&this->unlabelled16 = 1;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

