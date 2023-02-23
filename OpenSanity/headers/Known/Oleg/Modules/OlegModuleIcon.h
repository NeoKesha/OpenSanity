#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleIcon : public OlegModuleA {
	public:
		UIElementImage* icons;
		UnkFamily20Base* field2_0x8c;
		float field3_0x90;
		float field4_0x94;
		float field5_0x98;
		float field6_0x9c;
		float field7_0xa0;
		float field8_0xa4;
		float field9_0xa8;
		float field10_0xac;
		float field11_0xb0;
		float field12_0xb4;
		float field13_0xb8;

		OlegModuleIcon(UIElementImage* param_1);
		OlegModuleIcon(float x, UIElementImage* icons);
		virtual void Render(FontRenderer* renderer);
		virtual void FUN_001a3ad0(Vector2* param_1);
};
