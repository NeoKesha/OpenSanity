#pragma once

#include "headers/OpenSanityGlobal.h"

class SectionDataEntriesTexture {
	public:
		EntryDescriptorTexture * elements;
		ushort cnt;

		virtual uint FindIndexTextures(uint* texId);
		void FUN_0011b3a0(int index, TwinsanityTexture** tex, int id);
		virtual bool Add(TwinsanityTexture** texture, uint id);

};
