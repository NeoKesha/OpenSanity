#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPickUpGem.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPickUpGem::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPickUpGem::Dispose(ActionPickUpGem *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPickUpGem::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionPickUpGem * __fastcall ActionPickUpGem::Construct(ActionPickUpGem *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PickUpGem;
		this->unlabelled12 = -1;
		return this;
		}
		
	*/
	return;
}

int ActionPickUpGem::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPickUpGem::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionPickUpGem::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpGem::UnkMethod(ActionPickUpGem *this,int *param_1){
		char cVar1;
		short *psVar2;
		int iVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == -1) {
		iVar3 = thunk_FUN_000ae160(*(undefined4 *)(psVar2 + 2));
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

void ActionPickUpGem::Execute() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpGem::Execute(ActionPickUpGem *this){
		Oleg *this_00;
		int iVar1;
		uint uVar2;
		GameController *pGVar3;
		pGVar3 = GameController1;
		this_00 = &GameController1->oleg;
		thunk_FUN_000ae130((GameController1->chunkDescriptor).uintArray +*(int *)(&DAT_0039e020 +(*(byte *)((int)&(GameController1->chunkDescriptor).flags + 2) & 0x1f)* 4),(byte)this->unlabelled12);
		iVar1 = this->unlabelled12;
		*(char *)&(pGVar3->oleg).field1_0x310 = (char)iVar1 + '\r';
		uVar2 = (pGVar3->oleg).field1_0x310;
		(pGVar3->oleg).field1_0x310 = uVar2 ^ (iVar1 << 0x10 ^ uVar2) & 0xf0000;
		Oleg::ShowUI(this_00,(pGVar3->oleg).parent.uiPresetMask[0x25].high,(pGVar3->oleg).parent.uiPresetMask[0x25].low,(int)(TicksPerTime * FLOAT_00386660),(int)(TicksPerTime * FLOAT_00386684));
		Oleg::StartGemCrystalAnimation(this_00,0x25);
		return;
		}
		
	*/
	return;
}

void ActionPickUpGem::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpGem::ExecuteFromCallContext(ActionPickUpGem *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

