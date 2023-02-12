#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Builders/BaseBuilder/BaseBuilder.h"

class ActionFactory : public BaseBuilder {
	public:

		void Dispose(byte flag);
		static ActionAbstract* BUILD(int id, int arg);
		void Construct();

};
