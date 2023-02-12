#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputC.h"

#include "headers/Known/Input/InputController/InputStruct.h"
void NodeInputC::FUN_000a6bf0(uint param_1, InputStruct* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeInputC::FUN_000a6bf0(NodeInputC *this,undefined4 param_1,InputStruct *param_2,int param_3){
		InstanceNodeAbstract_VTable *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InputWrapper *this_00;
		SetCtx *pSVar3;
		Dispose *pDVar4;
		SetCtx *pSVar5;
		pIVar2 = InstanceDataList::GetNode((InstanceDataList *)(param_3 + 0xe4),Character);
		pIVar1 = pIVar2[1].vtable;
		this_00 = &(this->parent).inputWrapper;
		pDVar4 = (Dispose *)InputWrapper::FUN_0020a8c0(this_00,param_2,0);
		pSVar5 = (SetCtx *)InputWrapper::FUN_0020a8c0(this_00,param_2,1);
		if ((*(byte *)&pIVar1[6].DisposeSomething & 1) == 0) {
		pIVar1[6].Dispose = pDVar4;
		}
		else {
		pIVar1[6].Dispose = (Dispose *)0x0;
		}
		pSVar3 = (SetCtx *)0x0;
		if ((*(byte *)&pIVar1[6].DisposeSomething & 2) == 0) {
		pSVar3 = pSVar5;
		}
		pIVar1[6].SetCtx = pSVar3;
		return;
		}
		
	*/
	return;
}

void NodeInputC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputC * __thiscall NodeInputC::Dispose(NodeInputC *this,byte param_1){
		(this->parent).vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&(this->parent).inputWrapper);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeInputC::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeInputC::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeInputC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputC * __fastcall NodeInputC::Construct(NodeInputC *this){
		InputWrapper *wrapper;
		NodeInputAbstract::Construct(&this->parent,2,7);
		wrapper = &(this->parent).inputWrapper;
		(this->parent).vtable = &NodeInput_VT_C;
		InputWrapper::AddAxis(wrapper,0,0,0.3);
		InputWrapper::AddAxis(wrapper,0,4,0.3);
		InputWrapper::AddAxis(wrapper,1,1,0.3);
		InputWrapper::AddAxis(wrapper,1,5,0.3);
		return this;
		}
		
	*/
	return;
}

