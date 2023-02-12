#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesRigidModel2 {
	public:
		EntryDescriptorRigidModel2 * elements;
		ushort cnt;

		virtual void FUN_0011b050(uint* param_1);
		void FUN_0011b0a0(int param_1, TwinsanityRigidModel2** element, int id);
		virtual bool Add(TwinsanityRigidModel2** element, uint id);

};
