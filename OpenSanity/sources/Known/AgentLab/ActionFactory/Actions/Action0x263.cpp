#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x263.h"

void Action0x263::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x263::Dispose(Action0x263 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x263::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x263::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x263::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x263::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x263::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x263::ExecuteFromCallContext(Action0x263 *this){
		InstanceContextRefCounter *pIVar1;
		uint uVar2;
		InstanceNodeCharacter *pIVar3;
		InstanceContext *pIVar4;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if ((uVar2 == 6) ||(pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar2],pIVar1 == (InstanceContextRefCounter *)0x0)) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = pIVar1->ctx;
		}
		pIVar3 = (InstanceNodeCharacter *)InstanceDataList::GetNode(&pIVar4->nodes,Character);
		pIVar3->field1_0x18->field9_0x90 = (int)(pIVar4->parent).chunkData;
		return;
		}
		
	*/
	return;
}

void Action0x263::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x263::Construct(Action0x263 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x263;
		return;
		}
		
	*/
	return;
}

