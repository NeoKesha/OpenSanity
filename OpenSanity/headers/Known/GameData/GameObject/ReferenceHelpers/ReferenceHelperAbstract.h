#pragma once

#include "headers/OpenSanityGlobal.h"

class ReferenceHelperAbstract {
	public:
		GameObjectReferenceList * references;
		uint index;

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);
		static void Unroll_3(uint* param_1);

};
