#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesSkin {
	public:
		EntryDescriptorSkin * elements;
		ushort cnt;

		virtual bool Add(TwinsanitySkin** element, uint id);
		virtual void FUN_0011fea0(uint* param_1);
		void FUN_0011fef0(int param_1, TwinsanitySkin** element, uint id);

};
