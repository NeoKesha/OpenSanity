#pragma once

#include "headers/OpenSanityGlobal.h"

class GameObjectIdListShort {
	public:
		short * idList;
		uint count;

		void Write(MemoryStream* stream);
		void Write_1(MemoryStream* stream);
		void Read(MemoryStream* stream);

};
