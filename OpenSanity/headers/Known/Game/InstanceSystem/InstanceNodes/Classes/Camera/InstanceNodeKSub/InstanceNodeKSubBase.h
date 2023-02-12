#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/InputWrapper.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubAbstract.h"

class InstanceNodeKSubBase : public InstanceNodeKSubAbstract {
	public:
		InputWrapper inputWrapper;

		void Construct(int param_1, int param_2);
		void Dispose(byte param_1);
		static void FUN_000a5110(uint* param_1, uint* param_2);

};
