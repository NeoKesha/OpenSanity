#include "headers/Known/AgentLab/ActionFactory/Actions/ActionResetCamera.h"

void ActionResetCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionResetCamera::Dispose(ActionResetCamera *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionResetCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionResetCamera::Construct(ActionResetCamera *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ResetCamera;
		return;
		}
		
	*/
	return;
}

int ActionResetCamera::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionResetCamera::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionResetCamera::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionResetCamera::ExecuteFromCallContext(void){
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
		InstanceNodeKSubB::thunk_FUN_0007cde0((InstanceNodeKSubB *)&pIVar4[3].field2_0x8);
		return;
		}
		
	*/
	return;
}

