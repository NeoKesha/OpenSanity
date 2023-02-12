#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionAiPathWrapper {
	public:
		CollectionAiPath * collectionPtr;

		void CreateCollection(int cnt);
		virtual void Add(AiPath* param_1);

};
