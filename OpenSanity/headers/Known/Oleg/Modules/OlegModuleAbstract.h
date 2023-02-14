#pragma once

#include "headers/OpenSanityGlobal.h"

class OlegModuleAbstract {
	public:
		uint flags;
		int startTime;
		int fadeInLength;
		int fadeOutLength;
		float value;
		OlegModuleAbstract * next;
		SplineA * spline;

		void SetSplineToAll(uint spline);
		static void Unroll(OlegModuleAbstract* param_1);
		virtual void CallOther1();
		virtual void Render(FontRenderer* renderer);
		virtual void Process(SomeState* timeState);
		virtual void Reset();
		virtual void CallOther2();
		void Dispose(byte param_1);
		void Dispose_8(byte param_1);
		void Construct();
		void Construct_10(uint param_1);

};
