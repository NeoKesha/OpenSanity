#pragma once

#include "headers/OpenSanityGlobal.h"

class BlackboardSub {
	public:
		byte flagsCnt;
		byte floatsCnt;
		byte intsCnt;
		int array[7];

		void Construct(ParameterTable* parameters, BlackboardAbstract* blackboard);

};
