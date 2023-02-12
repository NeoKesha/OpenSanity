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

		void Construct(float k, InputObserver* inputObserver, ColorMatrix* colorMatrix, UnkSfxCollection* sfxCollection);
		virtual void FUN_001a0f70();
		virtual void FUN_001a0fa0();
		void Construct_3(uint param_1, uint param_2, uint param_3);
		void Construct_4(uint param_1, uint param_2, uint param_3, uint param_4);
		virtual void Render(FontRenderer* param_1);
		virtual void FUN_001a6990(Vector2* param_1);
		void Dispose(byte param_1);
		void Construct_8(float param_1, byte param_2, InputObserver* param_3, ColorMatrix* param_4, UnkSfxCollection* param_5);

};
