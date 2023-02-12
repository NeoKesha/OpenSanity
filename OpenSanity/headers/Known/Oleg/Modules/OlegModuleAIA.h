#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleAI.h"

class OlegModuleAIA : public OlegModuleAI {
	public:

		void Construct(float param_1, UIElementImage* param_2, uint param_3, uint param_4);
		virtual void FUN_000b5310(int param_1);
		virtual void FUN_000b5620();
		void Dispose(byte param_1);

};
