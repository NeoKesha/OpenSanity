#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptTimeInUnit : public PerceptAbstract {
	public:

		void Dispose(byte param_1);
		virtual float GetUtilityScore(InstanceContext* ctx, int param_2, int* param_3);
		void Construct();

};
