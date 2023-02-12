#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"

class BlackboardE : public BlackboardAbstract {
	public:

		void Construct();
		void Construct_1(int param_1);
		void Dispose(byte param_1);
		virtual int GetBlackboardFractionFloatEntry2(int param_1);
		virtual int GetBlackboardFloatEntry2(int param_1);
		virtual int GetBlackboardIntEntry2(int param_1);
		virtual int GetBlackboardFractionFloatEntry(int param_1);
		virtual int GetBlackboardFloatEntry(int param_1);
		virtual int GetBlackboardIntEntry(int param_1);
		static uint GetUnkCount1();
		static uint GetFractionFloatsCount();
		static uint GetFloatsCount();
		static uint GetIntsCount();
		static uint GetUnkCount2();

};
