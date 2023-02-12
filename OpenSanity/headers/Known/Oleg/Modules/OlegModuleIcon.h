#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleB.h"

class OlegModuleIcon : public OlegModuleB {
	public:

		void Construct(UIElementImage* param_1);
		void Construct_1(float param_1, UIElementImage* icons);
		virtual void Render(int param_1);
		virtual void FUN_001a3ad0(Vector2* param_1);
		void Dispose(byte param_1);

};
