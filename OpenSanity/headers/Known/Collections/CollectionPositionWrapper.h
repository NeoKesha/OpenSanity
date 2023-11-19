#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionPositionWrapper {
	public:
		CollectionPosition * collectionPtr;

		void CreateCollection(int cnt);
		int Add(Position* element);

};
