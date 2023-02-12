#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstanceWrapper {
	public:
		CollectionInstance * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(Instance* element);

};
