#include "headers/Known/Input/InputController/InputController.h"
#include "headers/Global.h"

InputController::InputController() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InputController * __thiscall InputController::Construct(InputController *this){
		InputStruct *inputData;
		int *handle;
		int devices;
		uint *puVar1;
		int port;
		InputStruct *pIVar2;
		InputStruct **sourceList;
		int *local_8;
		undefined4 local_4;
		port = 0;
		this->vtable = (InputController_VTable *)&InputController_VT;
		this->connectedDevicesMask = 0;
		this->flags = this->flags & 0xfffffffe | 2;
		local_8 = &USBDeviceType;
		local_4 = 4;
		_USBD_Init@8(1,&local_8);
		sourceList = this->inputSourceList;
		puVar1 = &portsStart;
		do {
		inputData = (InputStruct *)VirtualPool::AllocateMemory(0x80);
		if (inputData == (InputStruct *)0x0) {
		inputData = (InputStruct *)0x0;
		}
		else {
		inputData->handle = (void *)0x0;
		handle = _XInputOpen@16((int)&USBDeviceType,port,0,(byte *)0x0);
		inputData->handle = handle;
		inputData->field8_0x4a = 0;
		*(undefined4 *)&inputData->inputBitfield1 = 0;
		inputData->field12_0x52 = 0;
		*(undefined4 *)&inputData->field_0x56 = 0;
		*(undefined4 *)&inputData->analogValue1 = 0;
		inputData->field19_0x5e = 0;
		inputData->field20_0x60 = (int *)0x0;
		*(undefined4 *)&inputData->inputBitfield2 = 0;
		inputData->field24_0x68 = (int *)0x0;
		*(undefined4 *)&inputData->field_0x6c = 0;
		*(undefined4 *)&inputData->field28_0x70 = 0;
		inputData->field31_0x74 = 0;
		pIVar2 = inputData;
		for (devices = 17;
		 pIVar2 = (InputStruct *)pIVar2->devicePtr, devices != 0;
		devices = devices + -1) {
		*(int *)pIVar2 = 0;
		}
		*(undefined2 *)pIVar2 = 0;
		inputData->port = port;
		inputData->slot = 0;
		}
		*sourceList = inputData;
		*puVar1 = *puVar1 & 0xffc00020;
		*(undefined2 *)(puVar1 + 1) = 0;
		sourceList = sourceList + 1;
		puVar1 = puVar1 + 3;
		port = port + 1;
		}
		 while ((int)puVar1 < 0x4a7268);
		devices = XAPILIB::XGetDevices(&USBDeviceType);
		this->connectedDevicesMask = devices;
		this->flags = this->flags & 0xfffffffd;
		return this;
		}

	*/
}

InputController::~InputController() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InputController * __thiscall InputController::Dispose(InputController *this,byte flag){
		Terminate(this);
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}

	*/
}

void InputController::SendDataToController() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputController::SendDataToController(InputController *this){
		InputStruct *pIVar1;
		undefined4 *puVar2;
		InputStruct **ppIVar3;
		puVar2 = &portsStart;
		ppIVar3 = this->inputSourceList;
		do {
		pIVar1 = *ppIVar3;
		if ((((pIVar1 != (InputStruct *)0x0) && ((*(byte *)puVar2 & 0x1f) != 0)) &&((int *)pIVar1->handle != (int *)0x0)) && (pIVar1->devicePtr[0] != 0x3e5)) {
		*(undefined2 *)&pIVar1->field_0x46 = 0;
		*(undefined2 *)&pIVar1->field_0x48 = 0;
		_XInputSetState@8((int *)pIVar1->handle,pIVar1->devicePtr);
		}
		puVar2 = puVar2 + 3;
		ppIVar3 = ppIVar3 + 1;
		}
		 while ((int)puVar2 < 0x4a7268);
		return;
		}
		
	*/
	return;
}

void InputController::FUN_0020a270() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputController::FUN_0020a270(InputController *this){
		SendDataToController(this);
		this->flags = this->flags & 0xfffffffd;
		return;
		}
		
	*/
	return;
}

void InputController::Terminate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputController::Terminate(InputController *this){
		InputStruct *ptr;
		int iVar1;
		InputStruct **ppIVar2;
		int iVar3;
		InputStruct *pIVar4;
		this->vtable = (InputController_VTable *)&InputController_VT;
		ppIVar2 = this->inputSourceList;
		iVar3 = 4;
		do {
		ptr = *ppIVar2;
		if (ptr != (InputStruct *)0x0) {
		if ((int *)ptr->handle != (int *)0x0) {
		XAPILIB::XInputClose((int *)ptr->handle);
		ptr->field8_0x4a = 0;
		*(undefined4 *)&ptr->inputBitfield1 = 0;
		ptr->field12_0x52 = 0;
		*(undefined4 *)&ptr->field_0x56 = 0;
		*(undefined4 *)&ptr->analogValue1 = 0;
		ptr->field19_0x5e = 0;
		ptr->field20_0x60 = (int *)0x0;
		*(undefined4 *)&ptr->inputBitfield2 = 0;
		ptr->field24_0x68 = (int *)0x0;
		*(undefined4 *)&ptr->field_0x6c = 0;
		*(undefined4 *)&ptr->field28_0x70 = 0;
		ptr->field31_0x74 = 0;
		pIVar4 = ptr;
		for (iVar1 = 0x11;
		 pIVar4 = (InputStruct *)pIVar4->devicePtr, iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*(int *)pIVar4 = 0;
		}
		*(undefined2 *)pIVar4 = 0;
		}
		ptr->handle = (void *)0x0;
		ptr->slot = 1;
		VirtualPool::FreeMemory(ptr);
		}
		ppIVar2 = ppIVar2 + 1;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		return;
		}
		
	*/
	return;
}

void InputController::SendDataToControllersEx() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputController::SendDataToControllersEx(InputController *this){
		SendDataToController(this);
		this->flags = this->flags | 1;
		return;
		}
		
	*/
	return;
}

byte InputController::ProcessInsertionRemovals(float deltaTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InputController::ProcessInsertionRemovals(InputController *this,float deltaTime){
		InputStruct *this_00;
		int *piVar1;
		bool deviceChanged;
		undefined3 extraout_var;
		uint *puVar2;
		byte local_d;
		InputStruct **local_c;
		uint insertions;
		InputController *local_4;
		local_d = 0;
		local_4 = this;
		deviceChanged = _XGetDeviceChanges@12((uint *)&USBDeviceType,&insertions,(uint *)&local_c);
		if (CONCAT31(extraout_var,deviceChanged) != 0) {
		FUN_0020a290((int)this,insertions,(uint)local_c);
		this->connectedDevicesMask = ~(uint)local_c & this->connectedDevicesMask | insertions;
		}
		local_c = this->inputSourceList;
		puVar2 = &portsStart;
		do {
		this_00 = *local_c;
		if (this_00 != (InputStruct *)0x0) {
		piVar1 = (int *)this_00->handle;
		if (piVar1 != (int *)0x0) {
		this_00->field20_0x60 = (int *)this_00->field8_0x4a;
		*(undefined4 *)&this_00->inputBitfield2 = *(undefined4 *)&this_00->inputBitfield1;
		this_00->field24_0x68 = (int *)this_00->field12_0x52;
		*(undefined4 *)&this_00->field_0x6c = *(undefined4 *)&this_00->field_0x56;
		*(undefined4 *)&this_00->field28_0x70 = *(undefined4 *)&this_00->analogValue1;
		this_00->field31_0x74 = this_00->field19_0x5e;
		_XInputGetState@8(piVar1,&this_00->field8_0x4a);
		this = local_4;
		}
		local_d = local_d | piVar1 == (int *)0x0;
		if (((*puVar2 & 0x1f) != 0) && ((*(byte *)&this->flags & 1) == 0)) {
		if ((float)puVar2[2] <= FLOAT_00386394) {
		*(undefined2 *)(puVar2 + 1) = 0;
		*puVar2 = *puVar2 & 0xffc00020 | 0x20;
		}
		else {
		puVar2[2] = (uint)((float)puVar2[2] - deltaTime);
		}
		if (((*puVar2 & 0x20) != 0) && ((*(byte *)&this->flags & 2) != 0)) {
		FUN_0020a050(this_00,(short)(*puVar2 >> 6),*(undefined2 *)(puVar2 + 1));
		*puVar2 = *puVar2 & 0xffffffdf;
		}
		}
		}
		local_c = local_c + 1;
		puVar2 = puVar2 + 3;
		}
		 while ((int)puVar2 < 0x4a7268);
		return local_d;
		}
		
	*/
	return 0;
}

void InputController::ResetFlags() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputController::ResetFlags(InputController *this){
		this->flags = this->flags & 0xfffffffe;
		return;
		}
		
	*/
	return;
}

