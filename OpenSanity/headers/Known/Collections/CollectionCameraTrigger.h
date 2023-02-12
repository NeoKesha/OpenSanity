#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCameraTrigger {
	public:
		CameraTrigger * * list;
		int cnt;
		int capacity;
		int expansion;

		int Add(Camera* param_1);

};
