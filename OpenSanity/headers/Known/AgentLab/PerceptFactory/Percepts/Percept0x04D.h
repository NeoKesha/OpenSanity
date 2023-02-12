#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x04D : public PerceptAbstract {
	public:

		static void Dispose(int* param_1);
		virtual float GetUtilityScore(InstanceContext* param_1);
		void Construct();
		void Dispose_3(byte param_1);

};
