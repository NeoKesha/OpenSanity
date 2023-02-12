#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetFocusToKey.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetFocusToKey::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetFocusToKey::Dispose(ActionSetFocusToKey *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetFocusToKey::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionSetFocusToKey::ExecuteFromCallContext(ActionSetFocusToKey *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContext *this_00;
		float fVar2;
		int iVar3;
		int *piVar4;
		InstanceContext **ppIVar5;
		uint uVar6;
		ushort uVar7;
		InstanceContext *pIVar8;
		InstanceNodeAbstract *pIVar9;
		InstanceContext *local_20;
		InstanceContext *local_1c;
		InstanceContext *local_18;
		float local_14;
		this_00 = (ctx->parent).ctx;
		if ((*(ushort *)&this->unlabelled12 & 0x1000) == 0) {
		if ((*(ushort *)&this->unlabelled12 & 0x2000) != 0) {
		pIVar9 = (this_00->nodes).array[0xc];
		if ((pIVar9 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar9->field6_0x14 & 1) != 0)) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar8 = (InstanceContext *)(this_00->nodes).array[0xc];
		LAB_0019243b:if (pIVar8 != (InstanceContext *)0x0) {
		piVar4 = FUN_0016edc0((int)pIVar8);
		pIVar9 = (InstanceNodeAbstract *)piVar4[0x49];
		goto LAB_00192456;
		}
		}
		}
		else {
		fVar2 = (this_00->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar2 & 1) != 0) &&(pIVar8 = (this_00->parent).field14_0x20.field4_0x10, pIVar8 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar8->parent).flags & 1) == 0) goto LAB_0019243b;
		(this_00->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(this_00->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		}
		}
		iVar3 = (this_00->parent).field14_0x20.field27_0x78;
		if (iVar3 == 0) {
		pIVar9 = (this_00->nodes).array[0xf];
		}
		else {
		pIVar9 = *(InstanceNodeAbstract **)(iVar3 + 0x124);
		}
		LAB_00192456:uVar7 = *(ushort *)&this->unlabelled12 & 0xff;
		if (uVar7 == 0xfe) {
		ppIVar5 = (InstanceContext **)(&pIVar9->vtable->DisposeSomething)[*(byte *)&pIVar9[2].field6_0x14];
		}
		else {
		if (uVar7 == 0xfd) {
		FUN_00186480((int)pIVar9);
		uVar6 = (uint)*(byte *)&pIVar9[2].field6_0x14;
		}
		else {
		bVar1 = *(byte *)((int)&pIVar9[2].field5_0x10 + 1);
		uVar6 = *(ushort *)&this->unlabelled12 & 0xff;
		if (bVar1 == 0) {
		return;
		}
		if (bVar1 <= uVar6) {
		return;
		}
		}
		ppIVar5 = (InstanceContext **)(&pIVar9->vtable->DisposeSomething)[uVar6];
		}
		fVar2 = FLOAT_0038639c;
		if (ppIVar5 != (InstanceContext **)0x0) {
		local_20 = *ppIVar5;
		local_1c = ppIVar5[1];
		local_18 = ppIVar5[2];
		local_14 = FLOAT_0038639c;
		uVar6 = (*(ushort *)&this->unlabelled12 & 0xe00) >> 9;
		if (uVar6 == 0) {
		(this_00->parent).field14_0x20.field4_0x10 = local_20;
		(this_00->parent).field14_0x20.field5_0x14 = local_1c;
		(this_00->parent).field14_0x20.field6_0x18 = local_18;
		(this_00->parent).field14_0x20.matrix1 = (Matrix4 *)fVar2;
		(this_00->parent).field14_0x20.matrix2.m43 =(float)((uint)(this_00->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		}
		else if (uVar6 == 3) {
		InstanceContext::FUN_0016dda0(this_00,&local_20);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetFocusToKey::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetFocusToKey * __thiscall ActionSetFocusToKey::Construct(ActionSetFocusToKey *this,byte param_1){
		ushort uVar1;
		uVar1 = *(ushort *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusToKey;
		*(ushort *)&this->unlabelled12 = (ushort)((param_1 & 7) << 9) | uVar1 & 0xc0ff | 0xff;
		return this;
		}
		
	*/
	return;
}

void ActionSetFocusToKey::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusToKey::UnkMethod(ActionSetFocusToKey *this,int *param_1){
		byte *pbVar1;
		short sVar2;
		char cVar3;
		short *psVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		psVar4 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar2 = *psVar4;
		if (sVar2 == 7) {
		*(char *)&this->unlabelled12 = *(char *)(psVar4 + 2) + -1;
		}
		else if (sVar2 == 0x58) {
		pbVar1 = (byte *)((int)&this->unlabelled12 + 1);
		*pbVar1 = *pbVar1 | 1;
		}
		else if (sVar2 == -1) {
		switch(*(undefined4 *)(psVar4 + 2)) {
		case 0x24:*(undefined *)&this->unlabelled12 = 0xfe;
		break;
		case 0x25:*(undefined *)&this->unlabelled12 = 0xfd;
		break;
		case 0xc5:pbVar1 = (byte *)((int)&this->unlabelled12 + 1);
		*pbVar1 = *pbVar1 | 0x10;
		break;
		case 0xc6:pbVar1 = (byte *)((int)&this->unlabelled12 + 1);
		*pbVar1 = *pbVar1 | 0x20;
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

int ActionSetFocusToKey::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetFocusToKey::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

