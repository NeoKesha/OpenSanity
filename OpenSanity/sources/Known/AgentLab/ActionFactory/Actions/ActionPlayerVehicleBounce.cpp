#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPlayerVehicleBounce.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPlayerVehicleBounce::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionPlayerVehicleBounce::ExecuteFromCallContext(ActionPlayerVehicleBounce *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceNodeAbstract_VTable *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		int iVar5;
		undefined4 uStack32;
		undefined4 uStack28;
		float fStack24;
		undefined4 uStack20;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		pIVar1 = pIVar4[1].vtable;
		iVar5 = (**(code **)(*(int *)pIVar1[4].UpdateTime + 0x1c))();
		if (iVar5 == 3) {
		fStack24 = this->unlabelled12;
		uStack32 = 0;
		uStack28 = 0;
		uStack20 = 0;
		(**(code **)(*(int *)pIVar1[4].UpdateTime + 0xc))(&uStack32,(((ctx->parent).ctx)->parent).ctx);
		}
		return;
		}
		
	*/
	return;
}

void ActionPlayerVehicleBounce::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPlayerVehicleBounce::Dispose(ActionPlayerVehicleBounce *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPlayerVehicleBounce::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionPlayerVehicleBounce * __fastcall ActionPlayerVehicleBounce::Construct(ActionPlayerVehicleBounce *this){
		float fVar1;
		fVar1 = FLOAT_00387b44;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PlayerVehicleBounce;
		this->unlabelled12 = fVar1;
		return this;
		}
		
	*/
	return;
}

int ActionPlayerVehicleBounce::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPlayerVehicleBounce::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionPlayerVehicleBounce::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPlayerVehicleBounce::UnkMethod(ActionPlayerVehicleBounce *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\0')) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

