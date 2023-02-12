#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionPositionWrapper {
	public:
		CollectionPosition * collectionPtr;

		void CreateCollection(int cnt);
		virtual int Add(Position* element);

};
