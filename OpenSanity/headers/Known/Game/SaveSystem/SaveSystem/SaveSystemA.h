#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystemAbstract.h"

class SaveSystemA : public SaveSystemAbstract {
	public:

		void Dispose(byte param_1);
		virtual void ShowMessage1(uint param_1, uint param_2);
		virtual void ShowMessage2(uint index);
		virtual int ShowMessage3(int index);
		virtual bool IsA(int param_1);
		virtual void FontRelated(FontRenderer* renderer);
		void Construct(char* param_1, uint param_2, uint param_3, uint param_4);

};
