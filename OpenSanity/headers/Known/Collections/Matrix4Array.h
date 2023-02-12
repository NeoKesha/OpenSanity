#pragma once

#include "headers/OpenSanityGlobal.h"

class Matrix4Array {
	public:
		Matrix4 * * array;
		uint cnt;

		void Construct(int cnt);

};
