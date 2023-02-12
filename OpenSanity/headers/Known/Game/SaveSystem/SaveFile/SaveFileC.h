#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileAbstract.h"
#include "headers/Known/Game/SaveSystem/BankSub/BankSub.h"

class SaveFileC : public SaveFileAbstract {
	public:
		BankSub bankSub;
		GameController * gameController;

		void Dispose(byte param_1);
		virtual void ReadBanks(MemoryStream* stream);
		virtual void WriteBanks(MemoryStream* stream);
		virtual void UpdateBankData();
		void Construct(char* param_1, uint param_2, uint param_3, GameController* param_4);

};
