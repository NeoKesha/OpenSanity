#pragma once

#include "headers/OpenSanityGlobal.h"

class AutoClass4 {
	public:
		InstanceNodeAbstract * nodeArray[24];

		void Construct();
		bool AddNodeToSlot(InstanceNodeAbstract* instanceNode);
		static void FUN_000f7710(AutoClass4* thos);

};
