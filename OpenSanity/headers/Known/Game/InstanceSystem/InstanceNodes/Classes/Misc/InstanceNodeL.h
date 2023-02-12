#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"

class InstanceNodeL : public InstanceNodeAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		static uint GetBuilderIndex();
		static void Dispose_3(InstanceNodeL* param_1);

};
