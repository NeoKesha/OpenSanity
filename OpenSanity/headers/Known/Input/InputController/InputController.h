#pragma once

#include "headers/OpenSanityGlobal.h"

class InputController {
	public:
		InputStruct * inputSourceList[4];
		int connectedDevicesMask;
		uint flags;

		InputController();
		~InputController();
		virtual void SendDataToController();
		void FUN_0020a270();
		virtual void Terminate();
		virtual void SendDataToControllersEx();
		virtual byte ProcessInsertionRemovals(float deltaTime);
		virtual void ResetFlags();

};
