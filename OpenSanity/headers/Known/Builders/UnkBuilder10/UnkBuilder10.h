#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class UnkBuilder10 : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static UNV021* BUILD(int id);
		void Construct();

};
