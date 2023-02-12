#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineC : public SplineAbstract {
	public:

		virtual void Transform(Matrix4* param_1);
		virtual SplineC* Spet(float step);
		void Construct();

};
