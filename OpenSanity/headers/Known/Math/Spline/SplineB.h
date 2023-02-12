#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20Base.h"
#include "headers/Known/Math/Spline/SplineAbstract.h"

class SplineB : public SplineAbstract {
	public:
		UnkFamily20Base unkStruct;

		virtual SplineB* Step(float step, uint param_2);
		virtual void Reset();
		void Dispose(byte param_1);
		virtual void Method3();
		void Construct();

};
