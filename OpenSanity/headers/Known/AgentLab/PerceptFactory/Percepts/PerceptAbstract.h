#pragma once

#include "headers/OpenSanityGlobal.h"

class PerceptAbstract {
	public:
		int PerceptID;
		float Interval;
		float Threshold;
		float ThresholdInverse;

		static PerceptAbstract* BuildPercept(MemoryStream* stream);
		virtual bool Process(int** param_1);
		static int Get0x1807();
		void Dispose(byte param_1);
		static void Construct(PerceptAbstract* param_1);
		void Construct_5(ushort param_1);
		static void Unroll(uint* param_1);
		void Construct_7(ushort param_1);
		static void Unroll_8(uint* param_1);

};
