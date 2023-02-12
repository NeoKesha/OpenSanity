#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1Abstract.h"

class NodeRelated1H : public NodeRelated1Abstract {
	public:

		void Construct();
		virtual void FUN_000679f0(byte param_2, uint param_3);
		void Dispose(byte param_1);

};
