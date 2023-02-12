#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubB.h"

class InstanceNodeKSubWrapper {
	public:
		InstanceNodeKSubB _struct;

		void FUN_0007cf40(NodeRelated2C* param_1);
		void Construct();
		void FUN_0007ce90(GameController* gameController, InstanceContext* ctx1, InstanceContext* ctx2);
		void Dispose();

};
