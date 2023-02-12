#pragma once

#include "headers/OpenSanityGlobal.h"

class FileResourceDescAbstract {
	public:
		SectionReaderAbstract * reader;

		void Dispose();
		void Dispose_1(byte param_1);
		static void EmptyFunction();
		void Construct(uint reader);

};
