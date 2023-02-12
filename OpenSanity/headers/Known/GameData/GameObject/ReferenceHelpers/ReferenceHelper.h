#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/GameObject/ReferenceHelpers/ReferenceHelperAbstract.h"

class ReferenceHelper : public ReferenceHelperAbstract {
	public:

		virtual ushort GetRefenreceIndex();
		virtual bool FUN_001adb40();
		void Dispose(byte param_1);
		virtual void FUN_001adb20();
		virtual void FUN_001adb50();

};
