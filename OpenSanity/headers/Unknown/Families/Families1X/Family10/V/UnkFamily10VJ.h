#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"

class UnkFamily10VJ : public UnkFamily10Base {
	public:

		void Construct(uint param_1);
		void Dispose(byte param_1);
		virtual void FUN_000a7890(byte param_2, byte param_3, uint param_4);
		virtual void FUN_000a78c0(uint param_1);
		static void EmptyFunction();

};
