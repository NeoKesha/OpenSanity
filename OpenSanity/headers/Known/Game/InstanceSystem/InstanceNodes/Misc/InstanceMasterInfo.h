#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceMasterInfo {
	public:
		Instance * instance;
		GameObject * gameObject;
		InstanceContext * ctx;

		void Construct(Instance* instance, GameResources* resources, InstanceContext* ctx);

};
