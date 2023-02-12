#pragma once

#include "headers/OpenSanityGlobal.h"

class SaveControllerAbstract {
	public:
		SaveFileC * * banks;
		int * array;

		void Construct(uint banks, CollectionUnk2* param_2, SaveFileA* param_3);
		void Dispose();
		void Dispose_2(byte param_1);

};
