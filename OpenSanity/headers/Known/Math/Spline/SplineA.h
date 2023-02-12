#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineA : public SplineAbstract {
	public:
		int arrayLength;
		Vector2 * spline;

		void Construct();
		virtual void Transform(Matrix4* matrix);
		void Dispose(byte param_1);
		virtual SplineA* Step(float step, uint param_2, uint param_3, char flag);

};
