#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"

class Percept0x080 : public PerceptAbstract {
	public:

		virtual float GetUtilityScore(InstanceContext* param_1);
		void Dispose(byte param_1);
		void Construct(ushort param_1, uint param_2, uint param_3);

};
