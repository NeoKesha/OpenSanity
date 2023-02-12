#include "headers/Known/AgentLab/ActionFactory/Actions/ActionExitVehicleMode.h"

void ActionExitVehicleMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionExitVehicleMode::Dispose(ActionExitVehicleMode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionExitVehicleMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionExitVehicleMode::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionExitVehicleMode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionExitVehicleMode::Construct(ActionExitVehicleMode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ExitVehicleMode;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

void ActionExitVehicleMode::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionExitVehicleMode::UnkMethod(ActionExitVehicleMode *this,int *param_1){
		char cVar1;
		short *psVar2;
		int iVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x249) {
		iVar3 = thunk_FUN_00066f00(*(undefined4 *)(psVar2 + 2));
		this->unlabelled12 = iVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionExitVehicleMode::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionExitVehicleMode::ExecuteFromCallContext(ActionExitVehicleMode *this){
		NodeRelated2C *this_00;
		undefined *puVar1;
		GameController *pGVar2;
		InstanceContext *pIVar3;
		InstanceNodeInput *this_01;
		InstanceNodeAbstract *pIVar4;
		if (this->unlabelled12 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[this->unlabelled12];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		this_01 = (InstanceNodeInput *)InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Input);
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		pGVar2 = GameController1;
		if ((this_01 != (InstanceNodeInput *)0x0) && (pIVar4 != (InstanceNodeAbstract *)0x0)) {
		this_00 = (NodeRelated2C *)pIVar4[1].vtable;
		InstanceNodeInput::thunk_FUN_000aea70(this_01,0);
		puVar1 = this_00->field22_0xb8;
		NodeRelated2C::thunk_FUN_00073fd0(this_00,false);
		if (puVar1 != (undefined *)0x0) {
		(pGVar2->chunkDescriptor).flags = (pGVar2->chunkDescriptor).flags & 0xffff6f1f | 0x6010;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

