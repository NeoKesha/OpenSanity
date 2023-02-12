#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputAbstract.h"

class NodeInputA : public NodeInputAbstract {
	public:

		void Construct();
		virtual void FUN_000a8320(uint param_1, InputStruct* input, InstanceContext* ctx);

};
