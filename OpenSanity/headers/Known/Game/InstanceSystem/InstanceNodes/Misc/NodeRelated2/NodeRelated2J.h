#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2Abstract.h"

class NodeRelated2J : public NodeRelated2Abstract {
	public:

		void Dispose();
		void Dispose_1(byte param_1);
		void Construct(InstanceMasterInfo* info, uint blackboard, uint related1);

};
