#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class UNV023 {
	public:
		TwinString str;
		UNV021 * top;

		void Read(MemoryStream* stream);

};
