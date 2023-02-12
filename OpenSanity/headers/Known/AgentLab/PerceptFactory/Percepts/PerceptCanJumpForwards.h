#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptCanJumpForwards : public PerceptAbstract {
	public:

		virtual float GetUtilityScore();
		void Dispose(byte param_1);
		void Construct();

};
