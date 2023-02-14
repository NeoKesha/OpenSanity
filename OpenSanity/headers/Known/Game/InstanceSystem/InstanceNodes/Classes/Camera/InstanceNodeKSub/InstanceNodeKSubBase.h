#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/InputWrapper.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubAbstract.h"

class InstanceNodeKSubBase : public InstanceNodeKSubAbstract {
	public:
		InputWrapper inputWrapper;

		InstanceNodeKSubBase();
		InstanceNodeKSubBase(uint cnt1, uint cnt2);
		~InstanceNodeKSubBase();
		virtual void CleanUp();
		static void FUN_000a5110(uint* param_1, uint* param_2);

};
