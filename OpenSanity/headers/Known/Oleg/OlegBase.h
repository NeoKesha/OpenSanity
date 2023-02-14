#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/OlegMask.h"

class OlegBase {
	public:
		OlegMask uiPresetMask[64];
		OlegModuleAbstract * modules[64];
		int field2_0x8;
		int field3_0xc;

		OlegBase();
		~OlegBase();

		virtual void ProcessAll(SomeState* timeState);
		virtual void Render(FontRenderer* fontRenderer);
		virtual void CallAll1();
		virtual void CallAll2();
		virtual void FUN_001a0d10();


};
