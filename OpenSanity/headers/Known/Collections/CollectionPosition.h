#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionPosition {
	public:
		Position * * list;
		int cnt;
		int capacity;
		int expansion;

		virtual int Add(Position* param_1);

};
