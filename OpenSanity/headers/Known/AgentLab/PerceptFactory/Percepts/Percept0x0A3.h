#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x0A3 : public PerceptAbstract {
	public:
		int unkField;

		virtual float GetUtilityScore(InstanceContext* param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
