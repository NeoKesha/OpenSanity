#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptAgentWasTouched : public PerceptAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		virtual float GetUtilityScore();

};
