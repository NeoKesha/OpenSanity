#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class UnkBuilder6 : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static InstanceNodeAbstract* BUILD(int id);
		static void Construct(uint* param_1);

};
