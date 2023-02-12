#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesRigidModel {
	public:
		EntryDescriptorRigidModel * elements;
		ushort cnt;

		virtual bool Add(TwinsanityRigidModel** element, uint id);
		virtual void FUN_00120a40(uint* param_1);
		void FUN_00120a90(int param_1, TwinsanityRigidModel** element, uint id);

};
