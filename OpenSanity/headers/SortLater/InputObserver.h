#pragma once

#include "headers/OpenSanityGlobal.h"

class InputObserver {
	public:
		InputWrapper * collection;
		byte inputMask1;
		byte inputMask0;

		InputObserver(InputWrapper* other);
		~InputObserver();

		virtual void UpdateInputMask(InputStruct* inputHandle, char param_2);
		static void EmptyFunction();

};
