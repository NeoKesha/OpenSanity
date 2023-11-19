#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstanceTemplateWrapper {
	public:
		CollectionInstanceTemplate * collectionPtr;

		void CreateCollection(int cnt);
		void AddElement(InstanceTemplate* element);

};
