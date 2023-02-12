#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineE : public SplineAbstract {
	public:

		virtual void Transform(Matrix4* param_1);
		void Dispose(byte flag);
		virtual SplineE* Step(float step);
		void Construct();

};
