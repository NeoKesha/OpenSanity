#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptAgentWasAttacked : public PerceptAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		virtual float GetUtilityScore(InstanceContext* param_1, int param_2, int param_3);

};
