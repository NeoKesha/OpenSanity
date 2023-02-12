#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class UnkBuilder10 : public BaseBuilder {
	public:

		void Dispose(byte flag);
		virtual void* BUILD(uint id);
		void Construct();

};
