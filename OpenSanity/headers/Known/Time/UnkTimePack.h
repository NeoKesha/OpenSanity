#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkTimePack {
	public:
		uint flags;
		int time1;
		int time2;

		static void SetFlags(UnkTimePack* param_1);
		static void ResetFlags(UnkTimePack* time);

};
