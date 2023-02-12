#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/AutoClasses/AutoClass40.h"

class UNV021 {
	public:
		UNV021 * next;
		AutoClass40 payload;

		void Read(MemoryStream* stream);
		void Dispose(byte param_1);
		void Construct(int* param_1);

};
