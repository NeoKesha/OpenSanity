#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionPathWrapper {
	public:
		CollectionPath * collectionPtr;

		void CreateCollection(int cnt);
		void Add(Path* param_1);

};
