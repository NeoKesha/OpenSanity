#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesSkydome {
	public:
		void * elements;
		ushort cnt;

		virtual bool Add(TwinsanitySkydome** element, uint id);
		virtual void FUN_0011f3b0(uint* param_1);
		void FUN_0011f400(int param_1, TwinsanitySkydome** element, uint id);

};
