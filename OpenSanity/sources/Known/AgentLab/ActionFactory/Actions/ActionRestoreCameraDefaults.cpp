#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRestoreCameraDefaults.h"

void ActionRestoreCameraDefaults::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRestoreCameraDefaults::Dispose(ActionRestoreCameraDefaults *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRestoreCameraDefaults::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRestoreCameraDefaults::Construct(ActionRestoreCameraDefaults *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RestoreCameraDefaults;
		return;
		}
		
	*/
	return;
}

int ActionRestoreCameraDefaults::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRestoreCameraDefaults::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionRestoreCameraDefaults::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRestoreCameraDefaults::ExecuteFromCallContext(ActionRestoreCameraDefaults *this){
		InstanceContextRefCounter *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if ((uVar2 == 6) ||(pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar2],pIVar1 == (InstanceContextRefCounter *)0x0)) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = pIVar1->ctx;
		}
		pIVar4 = InstanceDataList::GetNode(&pIVar3->nodes,Camera);
		thunk_FUN_000aec00((int)pIVar4);
		return;
		}
		
	*/
	return;
}

