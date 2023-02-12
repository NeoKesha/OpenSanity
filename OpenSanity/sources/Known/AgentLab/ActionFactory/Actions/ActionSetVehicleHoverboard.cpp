#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetVehicleHoverboard.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetVehicleHoverboard::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetVehicleHoverboard::Dispose(ActionSetVehicleHoverboard *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetVehicleHoverboard::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleHoverboard::ExecuteFromCallContext(ActionSetVehicleHoverboard *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *ctx_00;
		NodeRelated2C *this_00;
		GameController *pGVar1;
		int iVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceNodeCharacter *pIVar4;
		uint uVar5;
		ctx_00 = (((ctx->parent).ctx)->parent).ctx;
		iVar2 = FUN_00187030((int)ctx,this->unlabelled12 & 0xff);
		if ((iVar2 != 0) && (ctx_00 != (InstanceContext *)0x0)) {
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(iVar2 + 0xe4),Character);
		pIVar4 = InstanceContext::GetCharacterNode(ctx_00);
		pGVar1 = GameController1;
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) && (pIVar4 != (InstanceNodeCharacter *)0x0)) {
		this_00 = (NodeRelated2C *)pIVar3[1].vtable;
		NodeRelated2C::thunk_FUN_00074060(this_00,5,(int)pIVar4->field1_0x18,(byte)((uint)this->unlabelled12 >> 8) & 1);
		(pGVar1->chunkDescriptor).flags =(this->unlabelled12 & 0x100U | 0x600) >> 4 | (pGVar1->chunkDescriptor).flags & 0xffffff6f;
		uVar5 = BlackboardAbstract::GetIntValue((this_00->parent).parent.blackboard,0);
		(pGVar1->chunkDescriptor).flags =(uVar5 & 0xf | 0x60) << 8 | (pGVar1->chunkDescriptor).flags & 0xffff60ff;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetVehicleHoverboard::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetVehicleHoverboard * __fastcall ActionSetVehicleHoverboard::Construct(ActionSetVehicleHoverboard *this){
		uint uVar1;
		*(undefined *)&this->unlabelled12 = 0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		uVar1 = this->unlabelled12;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetVehicleHoverboard;
		this->unlabelled12 = uVar1 & 0xfffffeff;
		return this;
		}
		
	*/
	return;
}

int ActionSetVehicleHoverboard::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetVehicleHoverboard::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetVehicleHoverboard::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleHoverboard::UnkMethod(ActionSetVehicleHoverboard *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		else if ((*psVar2 == -1) && (*(int *)(psVar2 + 2) == 0x297)) {
		this->unlabelled12 = this->unlabelled12 | 0x100;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

