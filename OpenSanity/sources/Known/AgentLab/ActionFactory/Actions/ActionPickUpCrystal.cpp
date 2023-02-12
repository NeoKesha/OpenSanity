#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPickUpCrystal.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPickUpCrystal::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPickUpCrystal::Dispose(ActionPickUpCrystal *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPickUpCrystal::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionPickUpCrystal::Construct(ActionPickUpCrystal *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PickUpCrystal;
		return;
		}
		
	*/
	return;
}

int ActionPickUpCrystal::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPickUpCrystal::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionPickUpCrystal::Execute() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpCrystal::Execute(ActionPickUpCrystal *this){
		Oleg *this_00;
		GameController *pGVar1;
		pGVar1 = GameController1;
		this_00 = &GameController1->oleg;
		thunk_FUN_000ae110((GameController1->chunkDescriptor).uintArray +*(int *)(&DAT_0039e020 +(*(byte *)((int)&(GameController1->chunkDescriptor).flags + 2) & 0x1f)* 4));
		*(undefined *)&(pGVar1->oleg).field1_0x310 = 0x14;
		Oleg::ShowUI(this_00,(pGVar1->oleg).parent.uiPresetMask[0x25].high,(pGVar1->oleg).parent.uiPresetMask[0x25].low,(int)(TicksPerTime * FLOAT_00386660),(int)(TicksPerTime * FLOAT_00386684));
		Oleg::StartGemCrystalAnimation(this_00,0x25);
		return;
		}
		
	*/
	return;
}

void ActionPickUpCrystal::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpCrystal::ExecuteFromCallContext(ActionPickUpCrystal *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

