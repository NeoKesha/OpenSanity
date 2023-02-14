#pragma once

#include "headers/OpenSanityGlobal.h"

class InputWrapper {
	public:
		byte arrayLength2;
		byte arrayLength1;
		InputBinding2 * array2;
		InputBinding1 * array1;

		InputWrapper();
		InputWrapper(uint cnt1, uint cnt2);
		~InputWrapper();

		void FUN_0020a4b0();
		bool AddKey(int actionIndex, Keys key);
		bool AddAxis(int param_1, byte param_2, float param_3);
		virtual bool CheckInput(InputStruct* inputHandle, int index, char param_3);
		virtual float FUN_0020a7c0(InputStruct* param_1, int param_2);
		virtual float FUN_0020a8c0(InputStruct* param_1, int param_2);
		

};
