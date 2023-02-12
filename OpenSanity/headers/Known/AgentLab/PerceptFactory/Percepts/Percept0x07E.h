#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x07E : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* param_1);
		void Dispose(byte param_1);
		void Construct();

};
