#pragma once

#include "headers/OpenSanityGlobal.h"

class RendererSubStruct {
	public:
		short capacity;
		short expansion;
		short count;
		short lastIndex;
		short * indexArray;
		FontRenderer * * pointerArray;

		RendererSubStruct();
		~RendererSubStruct();

		void RelocateArrays();
		void Populate(FontRenderer** pointerArray);
		virtual void Add(FontRenderer** fontRenderer);

};
