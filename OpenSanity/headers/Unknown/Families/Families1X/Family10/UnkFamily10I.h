#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VI.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VH.h"

class UnkFamily10I : public UnkFamily10Base {
	public:
		UnkFamily10VI page1;
		UnkFamily10I * me;
		UnkFamily10VH page2;

		void Construct();
		void CleanUp();
		void Dispose(byte param_1);
		static void EmptyFunction();

};
