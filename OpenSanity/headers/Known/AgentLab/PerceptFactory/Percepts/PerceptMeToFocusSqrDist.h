#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptMeToFocusSqrDist : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* ctx);
		void Dispose(byte param_1);
		void Construct();

};
