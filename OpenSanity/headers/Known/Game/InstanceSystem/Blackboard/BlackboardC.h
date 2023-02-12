#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"

class BlackboardC : public BlackboardAbstract {
	public:
		int fractions[9];
		float floats[56];
		int ints[3];

		void Construct(int param_1);
		void Dispose(byte param_1);
		virtual int GetBlackboardFractionFloatEntry2(int index);
		virtual int GetBlackboardFloatEntry2(int index);
		virtual int GetBlackboardIntEntry2(int index);
		virtual int* GetBlackboardFractionFloatEntry(int index);
		virtual float* GetBlackboardFloatEntry(int index);
		virtual int* GetBlackboardIntEntry(int index);
		static uint GetUnkCount1();
		static int GetFractionFloatsCount();
		static int GetFloatsCount();
		static int GetIntsCount();
		static uint GetUnkCount2();

};
