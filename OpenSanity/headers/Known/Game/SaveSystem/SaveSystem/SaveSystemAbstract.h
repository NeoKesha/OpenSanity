#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class SaveSystemAbstract {
	public:
		uint flags1;
		uint flags2;
		TwinString title;
		SaveController * saveController;
		Oleg * oleg;
		UIPresetIndex uiPresetIndex1;
		UIPresetIndex uiPresetIndex2;
		UIPresetIndex uiPresetIndex3;
		TwinString str0;
		TwinString str1;
		TwinString str2;
		OlegModuleLabelGeneric * label0;
		OlegModuleLabelGeneric * label1;
		OlegModuleLabelGeneric * label2;
		int field1_0x4;

		virtual void FontRelated(FontRenderer* renderer);
		virtual void FUN_00200820();
		void Construct(char* title, Oleg* oleg, SaveController* saveController);
		virtual void GetSaveString(int stringIndex, TwinString* outString);
		virtual bool FUN_00200750();
		virtual void Method3(int param_1);
		virtual void Method7(int param_1);
		virtual void FUN_00202e20(int param_1, FontRenderer* param_2);
		virtual void FUN_00202ed0(int param_1, FontRenderer* param_2);
		void Dispose(byte param_1);
		virtual bool IsA(int param_1);
		virtual void UpdateFlags(uint param_1, byte param_2);
		void Construct_11(char* param_1, uint param_2);

};
