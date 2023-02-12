#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputAbstract.h"

void NodeInputAbstract::Dispose(NodeInputAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeInputAbstract::Dispose(NodeInputAbstract *param_1){
		param_1->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&param_1->inputWrapper);
		return;
		}
		
	*/
	return;
}

void NodeInputAbstract::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputAbstract * __thiscall NodeInputAbstract::Construct(NodeInputAbstract *this,int param_1,int param_2){
		InputWrapper *inputWrapper;
		inputWrapper = &this->inputWrapper;
		this->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Construct(inputWrapper,param_1,param_2);
		InputWrapper::AddKey(inputWrapper,0,KEY_A);
		InputWrapper::AddKey(inputWrapper,1,KEY_X);
		InputWrapper::AddKey(inputWrapper,2,KEY_B);
		InputWrapper::AddKey(inputWrapper,3,KEY_WHITE);
		InputWrapper::AddKey(inputWrapper,3,KEY_LEFT_TRIGGER);
		InputWrapper::AddKey(inputWrapper,4,KEY_BLACK);
		InputWrapper::AddKey(inputWrapper,4,KEY_RIGHT_TRIGGER);
		InputWrapper::AddKey(inputWrapper,5,KEY_LEFT_TRIGGER);
		InputWrapper::AddKey(inputWrapper,6,KEY_START);
		return this;
		}
		
	*/
	return;
}

void NodeInputAbstract::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputAbstract * __thiscall NodeInputAbstract::Dispose(NodeInputAbstract *this,byte param_1){
		this->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&this->inputWrapper);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeInputAbstract::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeInputAbstract::Dispose(NodeInputAbstract *this,byte param_1){
		this->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&this->inputWrapper);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void NodeInputAbstract::Dispose_4(NodeInputAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeInputAbstract::Dispose(NodeInputAbstract *param_1){
		param_1->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&param_1->inputWrapper);
		return;
		}
		
	*/
	return;
}

void NodeInputAbstract::Dispose_5(NodeInputAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeInputAbstract::Dispose(NodeInputAbstract *param_1){
		param_1->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&param_1->inputWrapper);
		return;
		}
		
	*/
	return;
}

void NodeInputAbstract::Dispose_6(NodeInputAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeInputAbstract::Dispose(NodeInputAbstract *param_1){
		param_1->vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&param_1->inputWrapper);
		return;
		}
		
	*/
	return;
}

