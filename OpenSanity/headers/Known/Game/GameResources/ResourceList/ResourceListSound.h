#pragma once

#include "headers/OpenSanityGlobal.h"

class ResourceListSound {
	public:
		ushort capacity;
		short count;
		Sfx * sfxArray[767];

		bool DisposeSound();

};
