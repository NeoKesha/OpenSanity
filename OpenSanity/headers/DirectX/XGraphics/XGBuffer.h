#pragma once

#include "headers/OpenSanityGlobal.h"

class XGBuffer {
	public:
		int refCount;
		void * data;
		int size;

		uint GetData();
		uint GetSize();

};
