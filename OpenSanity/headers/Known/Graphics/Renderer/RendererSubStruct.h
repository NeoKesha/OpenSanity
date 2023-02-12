#pragma once

#include "headers/OpenSanityGlobal.h"

class RendererSubStruct {
	public:
		short cnt1;
		short cnt2;
		short lastIndex;
		short * indexArray;
		int field2_0x6;
		FontRenderer * * pointerArray;

		RendererSubStruct();
		~RendererSubStruct();

		void RelocateArrays();
		void Expand();
		virtual void Add(FontRenderer** fontRenderer);

};
