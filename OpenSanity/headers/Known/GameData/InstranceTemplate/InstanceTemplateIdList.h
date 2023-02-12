#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceTemplateIdList {
	public:
		short * idList;
		int amount;
		int allocationAmount;
		int header2;

		void Write(MemoryStream* stream);
		void Construct(uint* allocationAmount);
		void Read(MemoryStream* memoryStream);

};
