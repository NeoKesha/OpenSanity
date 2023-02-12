#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class PerceptRandom : public PerceptAbstract {
	public:

		static float GetUtilityScoreInternal();
		void Dispose(byte param_1);
		virtual float GetUtilityScore();
		void Construct();

};
