#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionAiPath {
	public:
		AiPath * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(AiPath* param_1);

};
