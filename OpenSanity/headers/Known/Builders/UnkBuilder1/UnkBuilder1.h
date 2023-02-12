#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class UnkBuilder1 : public BaseBuilder {
	public:

		void Dispose(byte flag);
		virtual void* BUILD(uint id);
		static void Construct(uint* param_1);

};
