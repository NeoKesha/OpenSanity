#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDisplayBottomText.h"

void ActionDisplayBottomText::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDisplayBottomText::Dispose(ActionDisplayBottomText *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDisplayBottomText::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDisplayBottomText * __fastcall ActionDisplayBottomText::Construct(ActionDisplayBottomText *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BottomTextDisplay;
		this->unlabelled12 = -1;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionDisplayBottomText::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDisplayBottomText::GetSize(void){
		return 0x28;
		}
		
	*/
	return 0;
}

void ActionDisplayBottomText::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDisplayBottomText::ExecuteFromCallContext(ActionDisplayBottomText *this){
		float fVar1;
		GameController *pGVar2;
		long lVar3;
		long lVar4;
		long lVar5;
		Color local_4;
		pGVar2 = GameController1;
		lVar3 = __ftol2((float)this->unlabelled24 * FLOAT_00386448);
		lVar4 = __ftol2((float)this->unlabelled28 * FLOAT_00386448);
		lVar5 = __ftol2((float)this->unlabelled32 * FLOAT_00386448);
		local_4 = (Color)CONCAT13(0xff,CONCAT12((char)lVar5,CONCAT11((char)lVar4,(char)lVar3)));
		TwinString::Copy(&(pGVar2->oleg).screenMessage.message,*(char **)(LOCAL_MSG2 + this->unlabelled12 * 4));
		fVar1 = FLOAT_0038a838;
		(pGVar2->oleg).screenMessage.field6_0x2c = (int)((float)this->unlabelled36 * TicksPerTime);
		(pGVar2->oleg).screenMessage.color = local_4;
		(pGVar2->oleg).screenMessage.vec.x = (float)this->unlabelled16;
		(pGVar2->oleg).screenMessage.vec.y = (float)this->unlabelled20;
		(pGVar2->oleg).screenMessage.vec.z = fVar1;
		(pGVar2->oleg).screenMessage.vec.w = fVar1;
		return;
		}
		
	*/
	return;
}

