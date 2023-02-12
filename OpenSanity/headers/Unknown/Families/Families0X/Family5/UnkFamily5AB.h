#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextSmartPtr.h"
#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5A.h"

class UnkFamily5AB : public UnkFamily5A {
	public:

		void Construct(ushort param_1, InstanceContextSmartPtr param_2, uint param_3);
		void CleanUp();
		void Dispose(byte param_1);

};
