#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Collections/CollectionInts.h"
#include "headers/Known/Collections/CollectionFractions.h"
#include "headers/Known/Collections/CollectionFloats.h"

class ParameterTable {
	public:
		int instancePropsHeader;
		int unkInt;
		CollectionFractions fractions;
		CollectionFloats floats;
		CollectionInts ints;

		uint GetInt(int index);
		void Construct(int param_1);
		void Construct_2(MemoryStream* stream);
		void Dispose(byte param_1);

};
