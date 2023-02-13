#pragma once

#include "headers/OpenSanityGlobal.h"

class RendererSubStruct {
	public:
		short capacity;
		short count;
		short lastIndex;
		short * indexArray;
		int expansion;
		FontRenderer * * pointerArray;

		RendererSubStruct();
		~RendererSubStruct();

		void RelocateArrays();
		void Populate(FontRenderer** pointerArray);
		virtual void Add(FontRenderer** fontRenderer);

};
