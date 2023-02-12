#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2Abstract.h"

class InstanceNodeKSubModule2A : public InstanceNodeKSubModule2Abstract {
	public:

		virtual float FUN_001c92e0(int param_1);
		void Construct();
		virtual void UnkMethod3(int param_1);
		void Dispose(byte param_1);
		static float UnkMethod4();
		InstanceNodeKSubModule2A* ConstructEx();

};
