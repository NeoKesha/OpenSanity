#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily26Base {
	public:
		UNV008 * collection;
		uint cnt1;
		uint cnt2;

		virtual void CleanUp();
		void Construct();
		void Dispose(byte param_1);

};
