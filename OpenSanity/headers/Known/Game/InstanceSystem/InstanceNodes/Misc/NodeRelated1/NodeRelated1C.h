#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1E.h"

class NodeRelated1C : public NodeRelated1E {
	public:
		Vector4 vec1;
		Vector4 vec2;

		void Construct(byte param_2, uint param_3);
		static void Construct_1(NodeRelated1C* param_1);
		void Dispose(byte param_1);

};
