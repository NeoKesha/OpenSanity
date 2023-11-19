#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCameraTriggerWrapper {
	public:
		CollectionCameraTrigger * collectionPtr;

		void CreateCollection(int cnt);
		void Add(CameraTrigger* element);

};
