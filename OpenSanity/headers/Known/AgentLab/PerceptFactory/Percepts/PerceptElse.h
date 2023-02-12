#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptElse : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* param_1, int param_2);
		void Dispose(byte param_1);
		void Construct();

};
