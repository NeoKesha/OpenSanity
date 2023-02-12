#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/OlegMask.h"

class OlegBase {
	public:
		OlegMask uiPresetMask[64];
		OlegModuleAbstract * modules[64];

		OlegBase();
		~OlegBase();

		virtual void ProcessAll(SomeState* timeState);
		virtual void Render(FontRenderer* fontRenderer);
		virtual void CallAll1();
		virtual void CallAll2();
		virtual void FUN_001a0d10();


};
