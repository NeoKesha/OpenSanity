#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/InputWrapper.h"

class NodeInputAbstract {
	public:
		InputWrapper inputWrapper;

		static void Dispose(NodeInputAbstract* param_1);
		void Construct(int param_1, int param_2);
		void Dispose_2(byte param_1);
		void Dispose_3(byte param_1);
		static void Dispose_4(NodeInputAbstract* param_1);
		static void Dispose_5(NodeInputAbstract* param_1);
		static void Dispose_6(NodeInputAbstract* param_1);

};
