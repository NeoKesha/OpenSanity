#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"

class BlackboardD : public BlackboardAbstract {
	public:

		void Construct(int param_1);
		void Dispose(byte param_1);
		virtual int GetBlackboardFractionFloatEntry2(int param_1);
		virtual int GetBlackboardFloatEntry2(int param_1);
		virtual int* GetBlackboardIntEntry2(int i);
		virtual uint* GetBlackboardFractionFloatEntry(int i);
		virtual float* GetBlackboardFloatEntry(int i);
		virtual int* GetBlackboardIntEntry(int i);
		static int GetUnkCount1();
		static int GetFractionFloatsCount();
		static int GetFloatsCount();
		static int GetIntsCount();
		static uint GetUnkCount2();

};
