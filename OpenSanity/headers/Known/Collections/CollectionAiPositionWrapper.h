#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionAiPositionWrapper {
	public:
		CollectionAiPosition * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(AiPosition* element);

};
