#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionAiPosition {
	public:
		AiPosition * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(AiPosition* element);

};
