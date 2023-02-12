#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2J.h"

class NodeRelated2F : public NodeRelated2J {
	public:

		virtual void Update();
		void FUN_0006b3b0(byte* param_1);
		void Dispose();
		void Dispose_3(byte param_1);
		virtual void FUN_0006b7c0(byte* param_1);
		static void IsC();
		void Construct(int* param_1, uint param_2, uint param_3);

};
