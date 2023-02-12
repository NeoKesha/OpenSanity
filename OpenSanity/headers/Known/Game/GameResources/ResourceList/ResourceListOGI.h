#pragma once

#include "headers/OpenSanityGlobal.h"

class ResourceListOGI {
	public:
		ushort capacity;
		short count;
		OGI * ogiArray[767];

		bool DisposeOGI();

};
