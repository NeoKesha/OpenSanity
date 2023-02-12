#include "headers/Known/AgentLab/ActionFactory/Actions/ActionBroadcastUserMessage.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionBroadcastUserMessage::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionBroadcastUserMessage::Dispose(ActionBroadcastUserMessage *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionBroadcastUserMessage::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBroadcastUserMessage::ExecuteFromCallContext(ActionBroadcastUserMessage *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *ctx_00;
		ChunkData *this_00;
		short sVar1;
		int *piVar2;
		UnkFamily5AB *pUVar3;
		InstanceContextSmartPtr IVar4;
		UnkFamily5AA *pUVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceContext **ppIVar7;
		UnkFamily5AA *pUVar8;
		undefined4 uVar9;
		InstanceContext **local_260;
		uint local_25c;
		float local_250;
		undefined4 local_24c;
		undefined4 local_248;
		float local_244;
		InstanceContext **local_234;
		undefined2 local_230;
		undefined2 local_22e;
		float local_22c;
		uint local_228;
		undefined4 local_224;
		undefined4 local_220;
		undefined4 local_21c;
		undefined4 local_218;
		undefined4 local_214;
		InstanceContext *local_210 [131];
		ctx_00 = (((ctx->parent).ctx)->parent).ctx;
		this_00 = (ctx_00->parent).chunkData;
		local_250 = 0.0;
		local_24c = 0;
		local_248 = 0;
		pUVar8 = (UnkFamily5AA *)0x0;
		local_244 = FLOAT_0038639c;
		if ((this->unlabelled12 & 0x800U) == 0) {
		piVar2 = (int *)0x0;
		}
		else {
		piVar2 = &this->unlabelled32;
		}
		FUN_00176960(&local_250,(uint)this->unlabelled12 >> 0xc & 0xf,(int)ctx,(float *)piVar2,*(byte *)((int)&this->unlabelled12 + 3),*(byte *)((int)&this->unlabelled12 + 2));
		local_234 = local_210;
		local_228 = local_228 & 0xfffffffe | 2;
		local_230 = 0;
		local_22e = 0x80;
		local_22c = FLOAT_00393c64;
		local_224 = 0;
		local_220 = 1;
		local_21c = 0;
		local_214 = 0;
		local_218 = 0;
		FUN_00137280((int)&local_234,(int)ctx_00);
		local_244 = (float)this->unlabelled16;
		local_25c = FUN_0013d440((int)this_00,&local_250,2,&local_234,'\x01');
		sVar1 = (short)local_25c;
		if (sVar1 != 0) {
		if (*(short *)&this->unlabelled48 == -1) {
		if (sVar1 != 0) {
		local_25c = local_25c & 0xffff;
		ppIVar7 = local_210;
		do {
		if (pUVar8 == (UnkFamily5AA *)0x0) {
		pUVar3 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily5AB *)0x0) {
		pUVar8 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar9 = 2;
		IVar4 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		pUVar8 = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar3,*(ushort *)&this->unlabelled12 & 0x7ff,IVar4,uVar9);
		}
		}
		pUVar5 = pUVar8;
		if (pUVar8 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar8->parent).parent.someStruct,pUVar8,1);
		}
		InstanceContext::FUN_000fa200(*ppIVar7,(char)pUVar5);
		ppIVar7 = ppIVar7 + 1;
		local_25c = local_25c - 1;
		}
		 while (local_25c != 0);
		return;
		}
		}
		else if (sVar1 != 0) {
		local_25c = local_25c & 0xffff;
		local_260 = local_210;
		do {
		pIVar6 = InstanceDataList::GetNode(&(*local_260)->nodes,Instance);
		if (*(ushort *)&this->unlabelled48 == (*(ushort *)(pIVar6[5].time + 0x16) & 0x7fff)) {
		if (pUVar8 == (UnkFamily5AA *)0x0) {
		pUVar3 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily5AB *)0x0) {
		pUVar8 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar9 = 2;
		IVar4 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		pUVar8 = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar3,*(ushort *)&this->unlabelled12 & 0x7ff,IVar4,uVar9);
		}
		}
		pUVar5 = pUVar8;
		if (pUVar8 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar8->parent).parent.someStruct,pUVar8,1);
		}
		InstanceContext::FUN_000fa200(*local_260,(char)pUVar5);
		}
		local_260 = local_260 + 1;
		local_25c = local_25c - 1;
		}
		 while (local_25c != 0);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionBroadcastUserMessage::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionBroadcastUserMessage * __fastcall ActionBroadcastUserMessage::Construct(ActionBroadcastUserMessage *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BroadcastUserMessage;
		this->unlabelled12 = -0xe000;
		*(undefined2 *)&this->unlabelled48 = 0xffff;
		return this;
		}
		
	*/
	return;
}

int ActionBroadcastUserMessage::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionBroadcastUserMessage::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

void ActionBroadcastUserMessage::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBroadcastUserMessage::UnkMethod(ActionBroadcastUserMessage *this,int *param_1){
		int *piVar1;
		ushort uVar2;
		char cVar3;
		ushort *this_00;
		uint uVar4;
		int iVar5;
		float fVar6;
		float fVar7;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		piVar1 = &this->unlabelled32;
		*piVar1 = (int)Vector4_0039ef70.x;
		this->unlabelled36 = (int)Vector4_0039ef70.y;
		this->unlabelled40 = (int)Vector4_0039ef70.z;
		this->unlabelled44 = (int)FLOAT_0038639c;
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar4 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 3));
		*(char *)((int)&this->unlabelled12 + 3) = (char)uVar4;
		iVar5 = FUN_00180820(this_00,(uint)this->unlabelled12 >> 0xc & 0xf);
		this->unlabelled12 = this->unlabelled12 ^ (iVar5 << 0xc ^ this->unlabelled12) & 0xf000U;
		FUN_0017f260(this_00,(uint *)piVar1);
		uVar2 = *this_00;
		if (uVar2 < 0x66) {
		if (uVar2 == 0x65) {
		this->unlabelled16 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 6) {
		*(undefined *)((int)&this->unlabelled12 + 2) = *(undefined *)(this_00 + 2);
		}
		else if (uVar2 == 0x10) {
		*(ushort *)&this->unlabelled48 = this_00[2];
		}
		}
		else if (uVar2 == 0x6d) {
		this->unlabelled12 = this->unlabelled12 ^ ((uint)this_00[2] ^ this->unlabelled12) & 0x7ff;
		}
		else if (((uVar2 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) &&(*(int *)(this_00 + 2) == 0x1c)) {
		*(undefined *)((int)&this->unlabelled12 + 2) = 0xfb;
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		fVar7 = (float)*piVar1;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= FLOAT_003a35c8) {
		fVar7 = (float)this->unlabelled36;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= FLOAT_003a35c8) {
		fVar7 = (float)this->unlabelled40;
		fVar6 = 0.0 - fVar7;
		if (0.0 <= fVar7) {
		fVar6 = fVar7;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		return;
		}
		}
		}
		this->unlabelled12 = this->unlabelled12 | 0x800;
		return;
		}
		
	*/
	return;
}

