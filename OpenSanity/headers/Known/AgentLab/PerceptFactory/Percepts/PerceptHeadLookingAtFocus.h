#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptHeadLookingAtFocus : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* param_1);
		void Dispose(byte param_1);
		void Construct();

};
