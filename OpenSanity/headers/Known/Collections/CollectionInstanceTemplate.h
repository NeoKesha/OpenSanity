#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstanceTemplate {
	public:
		InstanceTemplate * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(InstanceTemplate* element);

};
