#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily16Sub {
	public:
		InstanceContext* ctxArray[512];
		short cnt;

		void InitSubStructArray();
		virtual void FUN_000f79a0(InstanceContext* ctx);

};
