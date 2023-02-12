#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Game/GameContext/StringCollection.h"

class BHTable {
	public:
		BHRecord * collection;
		ushort cnt;
		ushort step;
		StringCollection stringCollection;
		TwinString packageName;
		int field2_0x6;
		int field6_0xc;

		void Init(char* packageName, bool read, GameReaderStorage* readerStorage);
		virtual bool AddFile(BHRecord* record, char* param_2);

};
