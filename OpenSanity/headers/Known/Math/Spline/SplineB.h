#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20Base.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineB : public SplineAbstract {
	public:
		UnkFamily20Base unkStruct;

		SplineB();
		~SplineB();

		virtual SplineB* Step(float step, uint param_2);
		virtual void Reset();
		virtual void Method3();
};
