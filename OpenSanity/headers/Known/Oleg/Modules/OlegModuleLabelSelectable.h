#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleLabelSelectable : public OlegModuleA {
	public:
		UnkFamily10Base * page1;
		UnkFamily10Base * page2;
		InputStruct * inputHandle;
		InputObserver * inputObserver;
		ColorMatrix * colorMatrix;
		UnkSfxCollection * sfxCollection;
		int field_0x88;
		int field11_0xa4;
		int field12_0xa8;

		
		OlegModuleLabelSelectable(InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection);
		OlegModuleLabelSelectable(UnkFamily10Base* page, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection);
		OlegModuleLabelSelectable(float x, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection);
		OlegModuleLabelSelectable(float x, UnkFamily10Base* page, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection);
		virtual void FUN_001a0f70();
		virtual void FUN_001a0fa0();
		virtual void Render(FontRenderer* renderer);
		virtual void FUN_001a6990(Vector2* param_1);
		

};
