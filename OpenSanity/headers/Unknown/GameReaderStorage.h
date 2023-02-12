#pragma once

#include "headers/OpenSanityGlobal.h"

class GameReaderStorage {
	public:
		uint index;
		FileReaderHelper * reader;
		FileResourceDescAbstract * * readerBuffer;
		int bufferSpaceTotal;
		int bufferIndex;
		int bufferSpaceUsed;
		FileResourceDescAbstract * currentReaderItem;
		FileResourceDescAbstract * * readerStorage;
		short storageSpaceTotal;
		short storageSpaceUsed;

		GameReaderStorage();
		GameReaderStorage(uint index);

		static GameReaderStorage* LazyGetReaderStorage(int i);

		bool FUN_0020def0();
		bool ReadSection();
		virtual uint Read(bool* out);
		virtual void AddFileDesc(FileResourceDescAbstract* desc, byte flag);
		static void ReadStuff();
		static bool FUN_0020e210(bool param_1);

};
