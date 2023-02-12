#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstance {
	public:
		Instance * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(uint element);

};
