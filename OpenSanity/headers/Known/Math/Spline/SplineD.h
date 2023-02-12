#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineD : public SplineAbstract {
	public:

		void Dispose(byte flag);
		virtual SplineD* Step(float step, uint param_2, uint param_3, char param_4);
		virtual void Transform(Matrix4* param_1);
		void Construct();

};
