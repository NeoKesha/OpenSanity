#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetVehicleRollerbrawl.h"

void ActionSetVehicleRollerbrawl::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetVehicleRollerbrawl::Dispose(ActionSetVehicleRollerbrawl *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetVehicleRollerbrawl::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetVehicleRollerbrawl * __fastcall ActionSetVehicleRollerbrawl::Construct(ActionSetVehicleRollerbrawl *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetVehicleRollerbrawl;
		*(undefined *)&this->unlabelled12 = 0;
		*(undefined *)((int)&this->unlabelled12 + 1) = 0;
		return this;
		}
		
	*/
	return;
}

int ActionSetVehicleRollerbrawl::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetVehicleRollerbrawl::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetVehicleRollerbrawl::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleRollerbrawl::UnkMethod(ActionSetVehicleRollerbrawl *this,int *param_1){
		char cVar1;
		short *psVar2;
		undefined4 uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x248) {
		uVar3 = thunk_FUN_00066f00(*(undefined4 *)(psVar2 + 2));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		else if (*psVar2 == 0x249) {
		uVar3 = thunk_FUN_00066f00(*(undefined4 *)(psVar2 + 2));
		*(char *)&this->unlabelled12 = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetVehicleRollerbrawl::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleRollerbrawl::ExecuteFromCallContext(ActionSetVehicleRollerbrawl *this){
		InstanceContextRefCounter *pIVar1;
		NodeRelated2C *this_00;
		InstanceNodeAbstract_VTable *pIVar2;
		GameController *pGVar3;
		uint uVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceNodeAbstract *pIVar6;
		int iVar7;
		InstanceContext *pIVar8;
		InstanceContext *pIVar9;
		if (*(byte *)&this->unlabelled12 == 6) {
		pIVar8 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[*(byte *)&this->unlabelled12];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar8 = (InstanceContext *)0x0;
		}
		else {
		pIVar8 = pIVar1->ctx;
		}
		}
		uVar4 = (uint)*(byte *)((int)&this->unlabelled12 + 1);
		if (uVar4 == 6) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar4];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar9 = pIVar1->ctx;
		}
		}
		if ((pIVar8 != (InstanceContext *)0x0) && (pIVar9 != (InstanceContext *)0x0)) {
		pIVar5 = InstanceDataList::GetNode(&pIVar8->nodes,Character);
		pIVar6 = InstanceDataList::GetNode(&pIVar9->nodes,Character);
		pGVar3 = GameController1;
		if ((pIVar5 != (InstanceNodeAbstract *)0x0) && (pIVar6 != (InstanceNodeAbstract *)0x0)) {
		this_00 = (NodeRelated2C *)pIVar5[1].vtable;
		pIVar2 = pIVar6[1].vtable;
		NodeRelated2C::thunk_FUN_00074060(this_00,1,(int)pIVar2,0);
		(pGVar3->chunkDescriptor).flags = (pGVar3->chunkDescriptor).flags & 0xffffff3f | 0x30;
		iVar7 = BlackboardAbstract::GetIntValue((this_00->parent).parent.blackboard,0);
		uVar4 = (pGVar3->chunkDescriptor).flags;
		(pGVar3->chunkDescriptor).flags = uVar4 ^ (iVar7 << 8 ^ uVar4) & 0xf00;
		iVar7 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)pIVar2->Step,0);
		uVar4 = (pGVar3->chunkDescriptor).flags;
		(pGVar3->chunkDescriptor).flags = uVar4 ^ (iVar7 << 0xc ^ uVar4) & 0xf000;
		}
		}
		return;
		}
		
	*/
	return;
}

