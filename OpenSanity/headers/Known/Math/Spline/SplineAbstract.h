#pragma once

#include "headers/OpenSanityGlobal.h"

class SplineAbstract {
	public:
		float length;
		float position;
		float argument;
		int repeats;
		SplineAbstract * next;

		static void Dispose(uint* param_1);
		static void EmptyFunction();
		virtual void Reset();
		void Dispose_3(byte flag);
		static void EmptyFunction_4();
		void Dispose_5(byte param_1);
		void Construct();
		static void Unroll(uint* param_1);
		static void Unroll_8(uint* param_1);
		static void Unroll_9(uint* param_1);
		static void Unroll_10(uint* param_1);
		static void Unroll_11(uint* param_1);

};
