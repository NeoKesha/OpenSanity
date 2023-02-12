#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionPath {
	public:
		Path * * list;
		int cnt;
		int capacity;
		int expansion;

		virtual int Add(Path* param_1);

};
