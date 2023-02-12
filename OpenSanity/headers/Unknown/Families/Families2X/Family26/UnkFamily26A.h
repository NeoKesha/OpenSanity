#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family26/UnkFamily26Base.h"

class UnkFamily26A : public UnkFamily26Base {
	public:

		void Init(Vector4* param_1, Vector4* param_2, int param_3);
		void Construct(uint param_1, int param_2);
		void Construct_2(uint param_1, Vector4* param_2, int param_3);
		void Construct_3(uint param_1, Vector4* param_2, Vector4* param_3, int param_4);
		void Dispose(byte param_1);

};
