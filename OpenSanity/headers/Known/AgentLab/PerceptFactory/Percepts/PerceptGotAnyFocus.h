#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptGotAnyFocus : public PerceptAbstract {
	public:

		void Dispose(byte param_1);
		virtual float GetUtilityScore(InstanceContext* param_1);
		void Construct();

};
