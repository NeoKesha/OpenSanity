#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionCameraTriggerWrapper {
	public:
		CollectionCameraTrigger * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(CameraTrigger* element);

};
