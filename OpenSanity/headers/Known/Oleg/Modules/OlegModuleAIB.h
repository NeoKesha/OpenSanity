#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleAI.h"

class OlegModuleAIB : public OlegModuleAI {
	public:

		void Construct(float param_1, UIElementImage* param_2, byte param_3, uint param_4, uint param_5);
		virtual void FUN_000b0f80(FontRenderer* param_1);
		void Dispose(byte param_1);

};
