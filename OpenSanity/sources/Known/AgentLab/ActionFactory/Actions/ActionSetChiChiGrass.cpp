#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetChiChiGrass.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetChiChiGrass::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetChiChiGrass::Dispose(ActionSetChiChiGrass *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetChiChiGrass::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetChiChiGrass * __fastcall ActionSetChiChiGrass::Construct(ActionSetChiChiGrass *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		*(undefined2 *)&this->unlabelled12 = 0;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetChiChiGrass;
		return this;
		}
		
	*/
	return;
}

int ActionSetChiChiGrass::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetChiChiGrass::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetChiChiGrass::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetChiChiGrass::UnkMethod(ActionSetChiChiGrass *this,int *param_1){
		ushort *puVar1;
		byte *pbVar2;
		char cVar3;
		short *psVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		psVar4 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar4 == 0x210) {
		if (*(int *)(psVar4 + 2) == 0) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 1;
		puVar1 = (ushort *)((int)&this->unlabelled12 + 2);
		*puVar1 = *puVar1 | 1;
		}
		else if (*(int *)(psVar4 + 2) == 1) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 | 1;
		pbVar2 = (byte *)((int)&this->unlabelled12 + 2);
		*pbVar2 = *pbVar2 & 0xfe;
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

void ActionSetChiChiGrass::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetChiChiGrass::ExecuteFromCallContext(ActionSetChiChiGrass *this,undefined4 time_clock,InstanceContext *ctx){
		ushort uVar1;
		InstanceContext *pIVar2;
		ushort uVar3;
		InstanceNodeChiChi *pIVar6;
		int iVar4;
		NodeRelated1B *pNVar3;
		pIVar2 = (((ctx->parent).ctx)->parent).ctx;
		iVar4 = 0;
		do {
		uVar3 = (ushort)(1 << ((byte)iVar4 & 0x1f));
		if (((*(ushort *)&this->unlabelled12 & uVar3) != 0) &&(uVar1 = *(ushort *)((int)&this->unlabelled12 + 2), iVar4 == 0)) {
		pIVar6 = (InstanceNodeChiChi *)InstanceDataList::GetNode(&pIVar2->nodes,ChiChiGrass);
		pNVar3 = (NodeRelated1B *)(pIVar6->field1_0x18->parent).related;
		pNVar3->field1_0x14 =pNVar3->field1_0x14 ^ ((uint)((uVar1 & uVar3) != 0) ^ pNVar3->field1_0x14) & 1;
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < 1);
		return;
		}
		
	*/
	return;
}

