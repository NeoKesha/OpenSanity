#pragma once

#include "headers/OpenSanityGlobal.h"

class BlackboardAbstract {
	public:
		BlackboardSub * blackboardSub;
		uint * fractions;
		float * floats;
		int * ints;

		void Construct();
		virtual float GetFloatByIndex(uint index);
		virtual int GetIntValue(uint index);
		virtual void CleanUp();
		virtual void InitBlackboard(ParameterTable* parameters);
		void FUN_001a9130(UNV029* param_1, uint param_2);
		void Dispose(byte param_1);

};
