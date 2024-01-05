#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class FileReaderHelper {
	public:
		int flags;
		UnkRMRelated * section;
		size_t streamSize;
		int * data;
		MemoryStream * stream;
		uint length;
		TwinString fname;
		HANDLE fileHandle1;
		uint overlapped;
		TwinString str2;
		HANDLE fileHandle2;
		BHTable* unkClass;
		bool inited;
		int field3_0xc;
		int field9_0x2c;
		int field10_0x30;
		int field12_0x38;
		int field13_0x3c;
		int field14_0x40;
		int field15_0x44;

		FileReaderHelper();
		FileReaderHelper(UnkRMRelated* section);

		void AllocateStream(size_t size);
		void FUN_002043d0();
		bool FUN_002047d0();
		virtual void CloseFile();
		virtual byte FUN_002057a0();
		virtual void Read();
		virtual bool OpenFile(char* fname);
		virtual bool ReadFileToBuffer(int offset, uint size, byte* buffer, uint param_4, void* unused);
		static FileReaderHelper* Create(UnkRMRelated* src);
		void InitBatch(char* packageName, bool read, GameReaderStorage* readerStorage);

};
