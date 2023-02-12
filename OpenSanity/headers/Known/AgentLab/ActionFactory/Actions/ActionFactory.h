#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class ActionFactory : public BaseBuilder {
	public:

		void Dispose(byte flag);
		virtual void* BUILD(uint id); //arg unused
		void Construct();

};
