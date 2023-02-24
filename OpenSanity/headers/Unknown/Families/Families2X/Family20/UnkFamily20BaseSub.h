#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily20BaseSub {
	public:
		short totalSpace;
		short occupiedElements;
		short lastIndex;
		short * indexes;
		struct1 * unkArray;
		int field2_0x6;

		UnkFamily20BaseSub();
		~UnkFamily20BaseSub();

		void FUN_000c3ac0();

};
