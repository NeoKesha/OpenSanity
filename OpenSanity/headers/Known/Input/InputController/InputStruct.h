#pragma once

#include "headers/OpenSanityGlobal.h"

class InputStruct {
	public:
		void * handle;
		int devicePtr[16];
		ushort inputBitfield1;
		short analogValue2;
		short analogValue1;
		ushort inputBitfield2;
		int port;
		int slot;

		bool CheckKey(Keys key, char param_2);
		float FUN_00209c50(int param_1);
		static bool CheckSomeKeyInput(InputStruct* input);
		bool CheckKeyBinding(InputBinding2* element, char param_3);

};
