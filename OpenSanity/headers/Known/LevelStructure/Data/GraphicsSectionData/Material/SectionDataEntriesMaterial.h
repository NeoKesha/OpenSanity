#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesMaterial {
	public:
		EntryDescriptorMaterial * elements;
		ushort cnt;

		void FUN_0011b520(int index, TwinsanityMaterial** mat, uint id);
		virtual bool Add(TwinsanityMaterial** material, uint id);
		virtual bool FUN_0011f100(uint param_1);

};
