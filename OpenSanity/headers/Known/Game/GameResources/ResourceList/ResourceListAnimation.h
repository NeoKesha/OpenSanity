#pragma once

#include "headers/OpenSanityGlobal.h"

class ResourceListAnimation {
	public:
		ushort capacity;
		short count;
		Animation * animationArray[767];

		bool DisposeAnimation();

};
