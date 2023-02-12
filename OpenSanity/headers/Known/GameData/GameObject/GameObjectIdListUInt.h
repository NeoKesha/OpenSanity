#pragma once

#include "headers/OpenSanityGlobal.h"

class GameObjectIdListUInt {
	public:
		uint * idList;
		uint count;

		void Read(MemoryStream* stream);

};
