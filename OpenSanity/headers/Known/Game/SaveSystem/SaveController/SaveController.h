#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveController/SaveControllerAbstract.h"
#include "headers/Known/TwinString.h"

class SaveController : public SaveControllerAbstract {
	public:
		TwinString saveRoot;
		TwinString savePath;
		wchar_t saveGameName[11];

		void Construct(uint banks, CollectionUnk2* param_2, SaveFileA* param_3);
		void Dispose();
		void Dispose_2(byte param_1);
		virtual bool FUN_002005c0(uint param_1, uint param_2);
		virtual void Method0(int param_1);
		virtual uint Method1(uint param_1, uint param_2, bool param_3);
		virtual void OperateSaveFS(uint action, uint param_2);
		static void EmptyFunction();
		static void EmptyFunction_8();
		static bool IsA();
		static bool IsB();
		virtual bool IsC();
		virtual void Method9();
		virtual int GetSomething();
		virtual uint Method11();
		virtual bool CanSave();
		static bool IsD();

};
