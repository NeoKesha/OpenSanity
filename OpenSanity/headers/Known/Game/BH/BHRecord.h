#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class BHRecord {
	public:
		uint offset;
		uint length;
		TwinString fname;

		void Fill();

};
