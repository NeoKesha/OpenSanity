#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class SceneryFactory : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static int* BUILD(int id);
		static void Construct(SceneryFactory* param_1);

};
