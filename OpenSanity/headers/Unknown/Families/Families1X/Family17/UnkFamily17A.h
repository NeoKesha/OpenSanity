#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17Base.h"

class UnkFamily17A : public UnkFamily17Base {
	public:

		void Construct();
		virtual float GetDistance1(int param_1, Vector4* param_2, Vector4* param_3);
		void Dispose(byte param_1);
		static float GetDistance2(Vector4* vec1, Vector4* vec2);
		void Dispose_4();

};
