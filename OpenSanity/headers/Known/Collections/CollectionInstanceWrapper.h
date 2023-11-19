#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstanceWrapper {
	public:
		CollectionInstance * collectionPtr;

		void CreateCollection(int cnt);
		void Add(Instance* element);

};
