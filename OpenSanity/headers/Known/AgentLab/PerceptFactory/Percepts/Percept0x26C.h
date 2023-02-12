#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x26C : public PerceptAbstract {
	public:

		void Construct();
		void Dispose(byte param_1);
		virtual float GetUtilityScore();

};
