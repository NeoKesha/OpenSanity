#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSendUserMessage.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSendUserMessage::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSendUserMessage::Dispose(ActionSendUserMessage *this,byte param_1){
		::EmptyFunction();
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSendUserMessage::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSendUserMessage::ExecuteFromCallContext(ActionSendUserMessage *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		int iVar2;
		bool bVar3;
		undefined uVar4;
		InstanceNodeObjectLink *pIVar5;
		UnkFamily5AB *pUVar6;
		InstanceContextSmartPtr ctx_00;
		UnkFamily5AA *pUVar7;
		uint uVar8;
		UnkFamily5AA *pUVar9;
		void *pvVar10;
		uint uVar11;
		long lVar12;
		uint uVar13;
		InstanceNodeAbstract *pIVar14;
		InstanceContextSmartPtr extraout_ECX;
		InstanceContextSmartPtr extraout_ECX_00;
		InstanceContext *pIVar15;
		char cVar16;
		bool bVar17;
		float arg;
		InstanceContextSmartPtr IVar18;
		UnkFamily5Ptr *pUVar19;
		InstanceContextRefCounter *local_10;
		UnkFamily5AA *local_c;
		InstanceContextRefCounter *local_8;
		uVar8 = this->unlabelled20;
		pIVar15 = (ctx->parent).ctx;
		ctx_00 = (InstanceContextSmartPtr)(pIVar15->parent).ctx;
		if ((uVar8 & 2) != 0) {
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)((int)ctx_00 + 0xe4),ObjectLink);
		if (pIVar5 == (InstanceNodeObjectLink *)0x0) {
		return;
		}
		pUVar6 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar6 == (UnkFamily5AB *)0x0) {
		pUVar7 = (UnkFamily5AA *)0x0;
		}
		else {
		pUVar19 = (UnkFamily5Ptr *)0x2;
		if (ctx_00 != (InstanceContextSmartPtr)0x0) {
		ctx_00 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)ctx_00 + 0xc0),(InstanceContext *)ctx_00,0);
		}
		pUVar7 = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar6,*(undefined2 *)&this->unlabelled12,ctx_00,pUVar19);
		}
		bVar17 = false;
		local_8 = (InstanceContextRefCounter *)0x0;
		if ((pIVar5->field7_0x18 & 0x1f) != 0) {
		local_10 = &pIVar5->field9_0x20;
		bVar17 = false;
		do {
		pIVar15 = local_10->ctx;
		if (pIVar15 != (InstanceContext *)0x0) {
		if (pIVar5->field67_0x70 == (UNV009 *)0x0) {
		cVar16 = false;
		}
		else {
		uVar8 = FUN_000f82d0((int)pIVar5->field67_0x70,(undefined4 *)pIVar15);
		cVar16 = uVar8 != 0xffffffff;
		}
		if ((char)((uint)this->unlabelled20 >> 8) < '\0') {
		if ((bool)cVar16 == false) goto LAB_0016ae67;
		LAB_0016ae24:pUVar9 = pUVar7;
		if (pUVar7 != (UnkFamily5AA *)0x0) {
		pUVar9 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar7->parent).parent.someStruct,pUVar7,1);
		}
		InstanceContext::FUN_000fa200(pIVar15,(char)pUVar9);
		}
		else {
		if ((this->unlabelled20 & 0x4000U) == 0) goto LAB_0016ae24;
		if ((bool)cVar16 != false) goto LAB_0016ae67;
		UnkFamily5SomeStruct::thunk_FUN_00059cf0((UnkFamily5SomeStruct *)&stack0xffffffd8,pUVar7);
		InstanceContext::FUN_000fa200(pIVar15,cVar16);
		}
		bVar17 = true;
		}
		LAB_0016ae67:local_10 = (InstanceContextRefCounter *)&local_10->refCount;
		local_8 = (InstanceContextRefCounter *)((int)local_8 + 1);
		}
		 while (local_8 < (pIVar5->field7_0x18 & 0x1f));
		}
		if ((*(byte *)&this->unlabelled20 & 8) != 0) {
		FUN_000fa170(pIVar5);
		}
		if (bVar17) {
		return;
		}
		if (pUVar7 == (UnkFamily5AA *)0x0) {
		return;
		}
		(*(code *)*(pUVar7->parent).parent.vtable)();
		return;
		}
		if ((uVar8 & 0x100) != 0) {
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)((int)ctx_00 + 0xe4),ObjectLink);
		if (pIVar5 == (InstanceNodeObjectLink *)0x0) {
		return;
		}
		pUVar6 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar6 == (UnkFamily5AB *)0x0) {
		local_c = (UnkFamily5AA *)0x0;
		}
		else {
		pUVar19 = (UnkFamily5Ptr *)0x2;
		IVar18 = extraout_ECX;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffd4,(InstanceContext *)ctx_00);
		local_c = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar6,*(undefined2 *)&this->unlabelled12,IVar18,pUVar19);
		}
		iVar2 = (pIVar15->parent).field14_0x20.field27_0x78;
		bVar17 = false;
		if (iVar2 == 0) {
		pvVar10 = (void *)(pIVar15->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar10 = (void *)FUN_00017ba8(iVar2);
		}
		uVar8 = FUN_001804d0(&this->unlabelled24,pvVar10);
		iVar2 = (pIVar15->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar10 = (void *)(pIVar15->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar10 = (void *)FUN_00017ba8(iVar2);
		}
		uVar11 = FUN_001804d0(&this->unlabelled28,pvVar10);
		uVar13 = this->unlabelled20;
		arg = FUN_000d49c0(2.0,uVar11);
		lVar12 = __ftol2(arg);
		uVar8 = uVar8 >> (((byte)(uVar13 >> 9) & 0x1f) * (char)uVar11 & 0x1f) & lVar12 - 1U;
		local_10 = (InstanceContextRefCounter *)0x0;
		if ((pIVar5->field7_0x18 & 0x1f) != 0) {
		local_8 = &pIVar5->field9_0x20;
		do {
		if (0x1f < local_10) break;
		if (((uVar8 & 1) != 0) && (pIVar15 = local_8->ctx, pIVar15 != (InstanceContext *)0x0)) {
		uVar13 = FUN_0016c600((int)pIVar5,(undefined4 *)pIVar15);
		pUVar19 = (UnkFamily5Ptr *)this->unlabelled20;
		if ((char)((uint)pUVar19 >> 8) < '\0') {
		if ((char)uVar13 != '\0') {
		LAB_0016afe1:UnkFamily5SomeStruct::thunk_FUN_00059cf0((UnkFamily5SomeStruct *)&stack0xffffffd8,local_c);
		InstanceContext::FUN_000fa200(pIVar15,(char)pUVar19);
		bVar17 = true;
		}
		}
		else if ((((uint)pUVar19 & 0x4000) == 0) || ((char)uVar13 == '\0')) goto LAB_0016afe1;
		if ((*(byte *)&this->unlabelled20 & 8) != 0) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar5,(undefined4 *)pIVar15,0,'\x01','\0');
		}
		}
		local_8 = (InstanceContextRefCounter *)&local_8->refCount;
		uVar8 = uVar8 >> 1;
		local_10 = (InstanceContextRefCounter *)((int)local_10 + 1);
		}
		 while (local_10 < (pIVar5->field7_0x18 & 0x1f));
		if (bVar17) {
		return;
		}
		}
		if (local_c == (UnkFamily5AA *)0x0) {
		return;
		}
		(*(code *)*(local_c->parent).parent.vtable)();
		return;
		}
		if (*(short *)&this->unlabelled16 != 0xff) {
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)((int)ctx_00 + 0xe4),ObjectLink);
		if (pIVar5 == (InstanceNodeObjectLink *)0x0) {
		return;
		}
		pUVar6 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar6 == (UnkFamily5AB *)0x0) {
		pUVar7 = (UnkFamily5AA *)0x0;
		}
		else {
		pUVar19 = (UnkFamily5Ptr *)0x2;
		IVar18 = extraout_ECX_00;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffd4,(InstanceContext *)ctx_00);
		pUVar7 = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar6,*(undefined2 *)&this->unlabelled12,IVar18,pUVar19);
		}
		cVar16 = *(char *)((int)&this->unlabelled12 + 2);
		bVar17 = false;
		bVar3 = true;
		local_c = (UnkFamily5AA *)0x0;
		if ((pIVar5->field7_0x18 & 0x1f) != 0) {
		local_8 = &pIVar5->field9_0x20;
		do {
		if (!bVar3) break;
		pIVar15 = local_8->ctx;
		if ((pIVar15 != (InstanceContext *)0x0) &&(pIVar14 = InstanceDataList::GetNode(&pIVar15->nodes,Instance),*(ushort *)&this->unlabelled16 == (*(ushort *)(pIVar14[5].time + 0x16) & 0x7fff))) {
		uVar8 = FUN_0016c600((int)pIVar5,(undefined4 *)pIVar15);
		pUVar19 = (UnkFamily5Ptr *)this->unlabelled20;
		if ((char)((uint)pUVar19 >> 8) < '\0') {
		if ((char)uVar8 != '\0') {
		LAB_0016b160:UnkFamily5SomeStruct::thunk_FUN_00059cf0((UnkFamily5SomeStruct *)&stack0xffffffd8,pUVar7);
		InstanceContext::FUN_000fa200(pIVar15,(char)pUVar19);
		bVar17 = true;
		if (cVar16 == '\0') {
		bVar3 = false;
		}
		}
		}
		else if ((((uint)pUVar19 & 0x4000) == 0) || ((char)uVar8 == '\0')) goto LAB_0016b160;
		if ((*(byte *)&this->unlabelled20 & 8) != 0) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar5,(undefined4 *)pIVar15,0,'\x01','\0');
		}
		}
		local_8 = (InstanceContextRefCounter *)&local_8->refCount;
		local_c = (UnkFamily5AA *)((int)local_c + 1);
		}
		 while (local_c < (pIVar5->field7_0x18 & 0x1f));
		if (bVar17) {
		return;
		}
		}
		if (pUVar7 == (UnkFamily5AA *)0x0) {
		return;
		}
		(*(code *)*(pUVar7->parent).parent.vtable)();
		return;
		}
		if ((uVar8 & 1) == 0) {
		bVar1 = *(byte *)((int)&this->unlabelled12 + 2);
		if (bVar1 < 0xde) {
		iVar2 = (ctx->parent).flags;
		if (iVar2 == 0) {
		return;
		}
		pIVar15 = *(InstanceContext **)(iVar2 + 4 + (uint)bVar1 * 4);
		goto LAB_0016b2b0;
		}
		pIVar15 = (*(pIVar15->parent).vtable[7].Dispose)(pIVar15,bVar1);
		if (((*(byte *)&this->unlabelled20 & 8) == 0) ||(pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)((int)ctx_00 + 0xe4),ObjectLink),pIVar5 == (InstanceNodeObjectLink *)0x0)) goto LAB_0016b2b0;
		uVar8 = FUN_0016c5c0((int)pIVar5,(int)pIVar15);
		bVar17 = (char)uVar8 == '\0';
		}
		else {
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)((int)ctx_00 + 0xe4),ObjectLink);
		if (pIVar5 == (InstanceNodeObjectLink *)0x0) {
		return;
		}
		uVar8 = this->unlabelled20;
		if ((uVar8 & 0x10) != 0) {
		*(byte *)((int)&this->unlabelled12 + 2) = (*(byte *)&pIVar5->field7_0x18 & 0x1f) - 1;
		}
		if ((uVar8 & 4) == 0) {
		pIVar15 = (&(pIVar5->field9_0x20).ctx)[*(byte *)((int)&this->unlabelled12 + 2)];
		}
		else {
		pIVar15 = (&(pIVar5->field9_0x20).ctx)[pIVar5->field7_0x18 >> 7 & 0x1f];
		}
		if (pIVar15 != (InstanceContext *)0x0) {
		uVar13 = FUN_0016c600((int)pIVar5,(undefined4 *)pIVar15);
		uVar8 = this->unlabelled20;
		if ((char)(uVar8 >> 8) < '\0') {
		if ((char)uVar13 == '\0') {
		pIVar15 = (InstanceContext *)0x0;
		bVar17 = (uVar8 & 8) == 0;
		goto LAB_0016b2a0;
		}
		}
		else if (((uVar8 & 0x4000) != 0) && ((char)uVar13 != '\0')) {
		pIVar15 = (InstanceContext *)0x0;
		}
		}
		bVar17 = (uVar8 & 8) == 0;
		}
		LAB_0016b2a0:if (!bVar17) {
		InstanceNodeObjectLink::FUN_000fc0b0(pIVar5,(undefined4 *)pIVar15,0,'\x01','\0');
		}
		LAB_0016b2b0:if (pIVar15 != (InstanceContext *)0x0) {
		pUVar6 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar6 == (UnkFamily5AB *)0x0) {
		pUVar7 = (UnkFamily5AA *)0x0;
		}
		else {
		pUVar19 = (UnkFamily5Ptr *)0x2;
		if (ctx_00 != (InstanceContextSmartPtr)0x0) {
		ctx_00 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)ctx_00 + 0xc0),(InstanceContext *)ctx_00,0);
		}
		pUVar7 = (UnkFamily5AA *)UnkFamily5AB::Construct(pUVar6,*(undefined2 *)&this->unlabelled12,ctx_00,pUVar19);
		}
		if (pUVar7 == (UnkFamily5AA *)0x0) {
		InstanceContext::FUN_000fa200(pIVar15,0);
		return;
		}
		uVar4 = UnkFamily5SomeStruct::CreatePayload(&(pUVar7->parent).parent.someStruct,pUVar7,1);
		InstanceContext::FUN_000fa200(pIVar15,uVar4);
		}
		return;
		}
		
	*/
	return;
}

void ActionSendUserMessage::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSendUserMessage * __fastcall ActionSendUserMessage::Construct(ActionSendUserMessage *this){
		uint uVar1;
		*(undefined *)((int)&this->unlabelled12 + 2) = 0xff;
		*(undefined2 *)&this->unlabelled16 = 0xff;
		uVar1 = this->unlabelled20;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SendUserMessage;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		this->unlabelled20 = uVar1 & 0xffff00e0 | 0xe0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionSendUserMessage::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSendUserMessage::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void ActionSendUserMessage::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSendUserMessage::UnkMethod(ActionSendUserMessage *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 2));
		*(char *)((int)&this->unlabelled12 + 2) = (char)uVar3;
		uVar1 = *this_00;
		if (uVar1 < 0xfb) {
		if (uVar1 == 0xfa) {
		this->unlabelled28 = this->unlabelled28 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled28);
		this->unlabelled20 = this->unlabelled20 | 0x100;
		}
		else if (uVar1 == 0x10) {
		*(ushort *)&this->unlabelled16 = this_00[2];
		}
		else if (uVar1 == 0x6d) {
		*(ushort *)&this->unlabelled12 = this_00[2];
		}
		else if (uVar1 == 0x72) {
		uVar3 = this->unlabelled20;
		*(char *)((int)&this->unlabelled12 + 2) = *(char *)(this_00 + 2) + -1;
		this->unlabelled20 = uVar3 | 1;
		}
		}
		else if (uVar1 == 0xfb) {
		this->unlabelled20 =(*(int *)(this_00 + 2) << 9 ^ this->unlabelled20) & 0x3e00U ^ this->unlabelled20 | 0x100;
		}
		else if (uVar1 == 0xfc) {
		this->unlabelled24 = this->unlabelled24 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled24);
		this->unlabelled20 = this->unlabelled20 | 0x100;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x1c:*(undefined *)((int)&this->unlabelled12 + 2) = 0xfb;
		break;
		case 0x3d:uVar3 = this->unlabelled20;
		*(undefined *)((int)&this->unlabelled12 + 2) = 0;
		this->unlabelled20 = uVar3 | 1;
		break;
		case 0x3e:this->unlabelled20 = this->unlabelled20 | 3;
		break;
		case 0xa5:this->unlabelled20 = this->unlabelled20 | 5;
		break;
		case 0xc3:this->unlabelled20 = this->unlabelled20 | 8;
		break;
		case 0xc4:this->unlabelled20 = this->unlabelled20 | 0x11;
		break;
		case 0xce:*(undefined *)((int)&this->unlabelled12 + 2) = 0xdf;
		break;
		case 0xd3:this->unlabelled20 = this->unlabelled20 | 0x8000;
		break;
		case 0xd4:this->unlabelled20 = this->unlabelled20 | 0x4000;
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

