#pragma once

#include "headers/OpenSanityGlobal.h"

class Zone {
	public:

		bool FUN_000da210(Vector4* param_1, Vector4* param_2, Vector4* param_3);
		uint FUN_000da450(Vector4* param_1);
		void FUN_000e8e80(Vector4* param_1, Vector4* param_2, Vector4* param_3);
		void FUN_000ed320(Vector4* param_1);
		void Construct(float* param_1, uint param_2);
		virtual void Copy(Zone* other);

};
