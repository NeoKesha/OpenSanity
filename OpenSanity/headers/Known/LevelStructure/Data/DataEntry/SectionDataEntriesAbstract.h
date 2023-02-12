#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesAbstract {
	public:
		EntryDescriptorAbstract * elements;
		ushort cnt;

		virtual int FindIndexMaterial(uint* obj);

};
