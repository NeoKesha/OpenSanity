#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily12Base {
	public:
		void * * array1;
		void * * array2;
		ushort cnt1;
		ushort cnt2;

		void Construct(uint param_1);
		virtual void CleanUp2();
		void FUN_0016d1a0(UnkFamily17Base* param_1);
		virtual void CleanUp1();
		void Dispose(byte param_1);

};
