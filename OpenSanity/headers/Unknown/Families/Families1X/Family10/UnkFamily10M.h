#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"

class UnkFamily10M : public UnkFamily10Base {
	public:

		void Construct();
		static void CleanUp(UnkFamily10M* param_1);
		virtual uint* FUN_000abfe0(byte param_1);
		virtual void FUN_000a7530();

};
