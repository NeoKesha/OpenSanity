#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1Abstract.h"

class NodeRelated1D : public NodeRelated1Abstract {
	public:
		int wumpaRelated;

		void Construct();
		virtual void Init(byte param_2, uint param_3);
		void Dispose(byte param_1);

};
