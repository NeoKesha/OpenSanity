#include "headers/Known/AgentLab/ActionFactory/Actions/ActionFadeoutScreen.h"

void ActionFadeoutScreen::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionFadeoutScreen::Dispose(ActionFadeoutScreen *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionFadeoutScreen::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionFadeoutScreen * __fastcall ActionFadeoutScreen::Construct(ActionFadeoutScreen *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_FadeoutScreen;
		this->unlabelled12 = uVar1 & 0xfffffff2 | 2;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionFadeoutScreen::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionFadeoutScreen::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

void ActionFadeoutScreen::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionFadeoutScreen::ExecuteFromCallContext(ActionFadeoutScreen *this){
		float fVar1;
		GameController *pGVar2;
		long lVar3;
		long lVar4;
		long lVar5;
		uint uVar6;
		Oleg *this_00;
		float local_4;
		pGVar2 = GameController1;
		this_00 = &GameController1->oleg;
		lVar3 = __ftol2((float)this->unlabelled24 * FLOAT_00386448);
		lVar4 = __ftol2((float)this->unlabelled28 * FLOAT_00386448);
		lVar5 = __ftol2((float)this->unlabelled32 * FLOAT_00386448);
		uVar6 = this->unlabelled12 & 7;
		local_4 = (float)CONCAT13(0xff,CONCAT12((char)lVar5,CONCAT11((char)lVar4,(char)lVar3)));
		if (uVar6 == 0) {
		Oleg::ClearUI(this_00,(pGVar2->oleg).parent.uiPresetMask[1].high,(pGVar2->oleg).parent.uiPresetMask[1].low,(int)((float)this->unlabelled16 * TicksPerTime),(int)(TicksPerTime * FLOAT_00386394));
		}
		else {
		if (uVar6 != 1) {
		return;
		}
		Oleg::ShowUI(this_00,(pGVar2->oleg).parent.uiPresetMask[1].high,(pGVar2->oleg).parent.uiPresetMask[1].low,(int)((float)this->unlabelled16 * TicksPerTime),(int)(TicksPerTime * FLOAT_00386394));
		}
		fVar1 = FLOAT_0039f1f8;
		if ((*(byte *)&this->unlabelled12 & 8) != 0) {
		(pGVar2->oleg).uiIcon03.parent.array[1].y = local_4;
		(pGVar2->oleg).uiIcon03.parent.array[1].x = fVar1;
		}
		return;
		}
		
	*/
	return;
}

