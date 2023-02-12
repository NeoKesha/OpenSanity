#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x0A1 : public PerceptAbstract {
	public:

		void Dispose(byte param_1);
		virtual float GetUtilityScore(InstanceContext* param_1);
		void Construct();

};
