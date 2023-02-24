#pragma once

#include "headers/OpenSanityGlobal.h"

class SplineAbstract {
	public:
		float length;
		float position;
		float argument;
		int repeats;
		SplineAbstract * next;

		SplineAbstract();
		~SplineAbstract();

		virtual void Reset();
};
