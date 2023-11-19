#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionAiPositionWrapper {
	public:
		CollectionAiPosition * collectionPtr;

		void CreateCollection(int cnt);
		void Add(AiPosition* element);

};
