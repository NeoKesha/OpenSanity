#pragma once

#include "headers/OpenSanityGlobal.h"

class FontCollection {
	public:
		AutoClass58 * * fonts;
		int fontsCount;
		int totalSpace;

		int field3_0xc;

		void CleanUp();
		int* FUN_00113970(Font* font);
		AutoClass58* CreateWrapperAndAddFont(Font* font);
		int AddFont(AutoClass58* font);

};
