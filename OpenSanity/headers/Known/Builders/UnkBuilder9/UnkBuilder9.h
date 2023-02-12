#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class UnkBuilder9 : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static uint* BUILD(int id);
		void Construct();

};
