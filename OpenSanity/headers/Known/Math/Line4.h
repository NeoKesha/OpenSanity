#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"

class Line4 {
	public:
		Vector4 start;
		Vector4 end;

		virtual void GetPoint(float t, Vector4* posOut);
		virtual float GetProgress(Vector4* param_1);
		virtual void FUN_000d6090(Matrix4* matrix);

};
