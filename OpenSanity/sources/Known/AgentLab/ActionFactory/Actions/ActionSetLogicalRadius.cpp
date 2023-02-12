#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetLogicalRadius.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetLogicalRadius::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetLogicalRadius::Dispose(ActionSetLogicalRadius *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetLogicalRadius::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetLogicalRadius::ExecuteFromCallContext(ActionSetLogicalRadius *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int iVar1;
		InstanceContext *this_00;
		InstanceContext *pIVar2;
		char cVar3;
		byte bVar4;
		InstanceNodeAbstract *pIVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		this_00 = (ctx->parent).ctx;
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		pIVar2 = (this_00->parent).ctx;
		fVar6 = (pIVar2->parent).field14_0x20.matrix2.m21 - (pIVar2->parent).field14_0x20.matrix2.m11;
		fVar7 = (pIVar2->parent).field14_0x20.matrix2.m22 - (pIVar2->parent).field14_0x20.matrix2.m12;
		fVar8 = (pIVar2->parent).field14_0x20.matrix2.m23 - (pIVar2->parent).field14_0x20.matrix2.m13;
		if (fVar6 < fVar7) {
		fVar6 = fVar7;
		}
		if (fVar6 < fVar8) {
		fVar6 = fVar8;
		}
		this->unlabelled16 = (int)(fVar6 * FLOAT_00386ab4);
		}
		cVar3 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar3 != '\0') {
		(this_00->nodes).array[3] = (InstanceNodeAbstract *)this->unlabelled16;
		pIVar5 = InstanceDataList::GetNode(&((this_00->parent).ctx)->nodes,Physics);
		if (pIVar5 != (InstanceNodeAbstract *)0x0) {
		bVar4 = (*pIVar5->vtable[1].GetIndex)();
		if (bVar4 != 0) {
		iVar1 = this->unlabelled16;
		*(undefined *)&pIVar5[0x26].vtable = 0;
		*(int *)&pIVar5[0x25].field2_0x8 = iVar1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetLogicalRadius::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetLogicalRadius * __fastcall ActionSetLogicalRadius::Construct(ActionSetLogicalRadius *this){
		byte bVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		bVar1 = *(byte *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetLogicalRadius;
		*(byte *)&this->unlabelled12 = bVar1 & 0xfe;
		this->unlabelled16 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int ActionSetLogicalRadius::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetLogicalRadius::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void ActionSetLogicalRadius::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetLogicalRadius::UnkMethod(ActionSetLogicalRadius *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x68) {
		this->unlabelled16 = *(int *)(psVar2 + 2);
		}
		else if (((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) &&(*(int *)(psVar2 + 2) == 0x34)) {
		*(byte *)&this->unlabelled12 = *(byte *)&this->unlabelled12 | 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

