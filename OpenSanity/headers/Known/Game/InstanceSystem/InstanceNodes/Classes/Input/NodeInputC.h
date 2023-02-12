#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputAbstract.h"

class NodeInputC : public NodeInputAbstract {
	public:

		virtual void FUN_000a6bf0(uint param_1, InputStruct* param_2, int param_3);
		void Dispose(byte param_1);
		static void EmptyFunction();
		void Construct();

};
