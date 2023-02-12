#pragma once

#include "headers/OpenSanityGlobal.h"

class ScriptMainAgrumentsWrapper {
	public:
		uint flags;
		uint unkInt;
		byte * arguments;

		void Construct(MemoryStream* stream);

};
