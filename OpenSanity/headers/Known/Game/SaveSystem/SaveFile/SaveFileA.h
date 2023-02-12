#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileAbstract.h"

class SaveFileA : public SaveFileAbstract {
	public:
		int bankCnt;
		BankSub * * bankSubs;

		void Dispose();
		void Construct(char* headerBin, uint banks, uint param_3, int length, uint start);
		virtual void ReadBanks(MemoryStream* param_1);
		virtual void WriteBanks(MemoryStream* memoryStream);
		void Dispose_4(byte param_1);
		static void EmptyFunction();
		void Construct_6(char* name, uint cnt, uint param_3, uint param_4);

};
