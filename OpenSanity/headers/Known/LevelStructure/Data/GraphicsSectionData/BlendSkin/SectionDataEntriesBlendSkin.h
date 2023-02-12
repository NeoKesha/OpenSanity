#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesBlendSkin {
	public:
		EntryDescriptorBlendSkin * elements;
		ushort cnt;

		virtual bool Add(TwinsanityBlendSkin** element, uint id);
		virtual void FUN_00120490(uint* param_1);
		void FUN_001204e0(int param_1, TwinsanityBlendSkin** element, uint id);

};
