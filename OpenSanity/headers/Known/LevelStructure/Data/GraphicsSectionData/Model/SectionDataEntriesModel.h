#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesModel {
	public:
		EntryDescriptorModel * elements;
		ushort cnt;

		virtual void FUN_0011b1d0(uint* param_1);
		void FUN_0011b220(int param_1, TwinsanityModel** param_2, uint param_3);
		virtual bool Add(TwinsanityModel** element, uint id);

};
