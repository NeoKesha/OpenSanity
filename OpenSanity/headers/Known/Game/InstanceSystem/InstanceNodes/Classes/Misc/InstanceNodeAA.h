#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeA.h"

class InstanceNodeAA : public InstanceNodeA {
	public:

		void Dispose(byte param_1);
		static uint GetBuilderIndex();
		static bool Step();
		static void GetIndex();
		void Construct(void** param_1);

};
