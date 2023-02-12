#pragma once

#include "headers/OpenSanityGlobal.h"

class InputObserver {
	public:
		InputWrapper * collection;
		byte inputMask1;
		byte inputMask0;

		void Construct(InputWrapper* other);
		virtual void UpdateInputMask(InputStruct* inputHandle, char param_2);
		void Dispose(byte param_1);
		static void EmptyFunction();

};
