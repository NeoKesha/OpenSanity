#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionTrigger {
	public:
		Trigger * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(Trigger* param_1);

};
