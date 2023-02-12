#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptHeadCanSeePlayer : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* param_1);
		void Construct();
		void Dispose(byte param_1);

};
