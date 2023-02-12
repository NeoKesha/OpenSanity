#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class PerceptFactory : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static PerceptAbstract* BUILD(int id, int arg);
		void Construct();

};
