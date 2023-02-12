#pragma once

#include "headers/OpenSanityGlobal.h"

class PhysicalPoolSubStruct {
	public:
		PhysicalPoolElement * element1;
		PhysicalPoolElement * element2;
		PhysicalPool * pool;

		void FUN_0015b970(PhysicalPoolElement* element1, PhysicalPoolElement* element2);
		void FUN_0015bd90();
		virtual bool FUN_0015bf00();

};
