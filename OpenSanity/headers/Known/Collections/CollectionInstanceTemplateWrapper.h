#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInstanceTemplateWrapper {
	public:
		CollectionInstanceTemplate * collectionPtr;

		void CreateCollection(int cnt);
		virtual void AddElement(InstanceTemplate* element);

};
