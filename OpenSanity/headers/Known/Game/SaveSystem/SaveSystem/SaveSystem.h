#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystemAbstract.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileD.h"
#include "headers/Unknown/CollectionUnk2/CollectionUnk2.h"
#include "headers/Known/Game/SaveSystem/SaveController/SaveController.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileA.h"

class SaveSystem : public SaveSystemAbstract {
	public:
		SaveFileD saveImageWrong;
		CollectionUnk2 unkStruct0;
		SaveFileA saveFile;
		SaveController saveController;
		SaveFileC * * saveFiles;

		virtual void FontRelated(FontRenderer* renderer);
		void CleanUp();
		void Construct(GameController* gameController);
		void CleanUp_2();
		void ResetFlags();
		void Dispose(byte param_1);
		void Dispose_5(byte param_1);
		virtual void ShowMessage1(uint param_1, uint param_2);
		virtual int ShowMessage2(int index);
		virtual int ShowMessage3(int param_1);
		static void EmptyFunction();

};
