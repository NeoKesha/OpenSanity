#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceDataList {
	public:
		uint cnt;
		InstanceNodeAbstract * array[24];

		void Dispose();
		virtual InstanceNodeAbstract* GetNode(ComponentId index);

};
