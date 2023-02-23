#include "headers/SortLater/InputObserver.h"

#include "headers/Unknown/AutoClasses/InputWrapper.h"
#include "headers/Known/Input/InputController/InputStruct.h"

InputObserver::InputObserver(InputWrapper* other)
{
	this->collection = other;
	this->inputMask1 = 0;
	this->inputMask0 = 0;
}

InputObserver::~InputObserver()
{
}

void InputObserver::UpdateInputMask(InputStruct* inputHandle, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InputObserver::UpdateInputMask(InputObserver *this,InputStruct *inputHandle,char param_2){
		bool input0;
		bool input1;
		bool input2;
		bool input3;
		bool input4;
		bool input5;
		char cVar1;
		byte bVar2;
		byte local_8;
		int local_4;
		byte *inputMask;
		local_8 = 1;
		local_4 = 2;
		do {
		input0 = InputWrapper::CheckInput(this->collection,inputHandle,0,local_8);
		input1 = InputWrapper::CheckInput(this->collection,inputHandle,1,local_8);
		input2 = InputWrapper::CheckInput(this->collection,inputHandle,3,local_8);
		input3 = InputWrapper::CheckInput(this->collection,inputHandle,4,local_8);
		input4 = InputWrapper::CheckInput(this->collection,inputHandle,5,local_8);
		input5 = InputWrapper::CheckInput(this->collection,inputHandle,6,local_8);
		if (param_2 == '\0') {
		cVar1 = '\0';
		}
		else {
		cVar1 = InputWrapper::CheckInput(this->collection,inputHandle,2,local_8);
		}
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input0 == false) {
		bVar2 = *inputMask & 0xfe;
		}
		else {
		bVar2 = *inputMask | 1;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input1 == false) {
		bVar2 = *inputMask & 0xfd;
		}
		else {
		bVar2 = *inputMask | 2;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input2 == false) {
		bVar2 = *inputMask & 0xf7;
		}
		else {
		bVar2 = *inputMask | 8;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input3 == false) {
		bVar2 = *inputMask & 0xef;
		}
		else {
		bVar2 = *inputMask | 0x10;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input4 == false) {
		bVar2 = *inputMask & 0xdf;
		}
		else {
		bVar2 = *inputMask | 0x20;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (input5 == false) {
		bVar2 = *inputMask & 0xbf;
		}
		else {
		bVar2 = *inputMask | 0x40;
		}
		*inputMask = bVar2;
		inputMask = &this->inputMask1;
		if (local_8 == 0) {
		inputMask = &this->inputMask0;
		}
		if (cVar1 == '\0') {
		bVar2 = *inputMask & 0xfb;
		}
		else {
		bVar2 = *inputMask | 4;
		}
		*inputMask = bVar2;
		local_8 = local_8 ^ 1;
		local_4 = local_4 + -1;
		}
		 while (local_4 != 0);
		return;
		}
		
	*/
	return;
}

void InputObserver::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InputObserver::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

