#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3C.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubAbstract.h"

class InstanceNodeKSubC : public InstanceNodeKSubAbstract {
	public:
		InstanceNodeKSubModule3C struct1;

		void Construct();
		void Dispose(byte param_1);
		virtual void FUN_001cb080();
		static void EmptyFunction();
		virtual void FUN_001cb0a0();
		static void Dispose_5(InstanceNodeKSubC* param_1);

};
