#pragma once

#include "headers/OpenSanityGlobal.h"

class InstanceIdList {
	public:
		UNV018 * list;
		int cnt;
		int allocation;
		int related;

		virtual InstanceIdList* Copy(InstanceIdList* param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
