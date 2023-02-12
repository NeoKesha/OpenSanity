#pragma once

#include "headers/OpenSanityGlobal.h"

class ObjectBuilder {
	public:
		ObjectBuilder* prevBuilder;
		ObjectBuilder* nextBuilder;
		BaseBuilder* builder;
};
