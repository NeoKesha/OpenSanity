#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesLod {
	public:
		EntryDescriptorLod * elements;
		ushort cnt;

		virtual bool Add(TwinsanityLod** element, uint id);
		void FUN_0011f750(int param_1, TwinsanityLod** element, uint id);

};
