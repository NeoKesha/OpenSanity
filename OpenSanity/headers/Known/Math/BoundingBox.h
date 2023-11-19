#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class BoundingBox {
	public:
		Vector4 v1;
		Vector4 v2;

		void FUN_00147330(Matrix4* param_1);
		static void SetInfiniteSizes(BoundingBox* param_1);
		void Expand(float value);
		bool IsSomething(BoundingBox* other);
		void FUN_001481e0(Matrix4* param_1);

};
