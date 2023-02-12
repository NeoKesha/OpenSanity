#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionTriggerWrapper {
	public:
		CollectionTrigger * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(Trigger* element);

};
