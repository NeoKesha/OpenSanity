#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class SaveFileAbstract {
	public:
		TwinString name;
		FILETIME saveTime;
		uint saveHash;
		MemoryStream * stream;
		uint streamLength;
		byte * streamStartPtr;

		virtual void CleanUp();
		virtual uint GetSaveHash();
		void Construct(char* bankName, uint param_2, uint param_3, uint param_4);
		virtual MemoryStream* InitStream();
		virtual bool Reinitstream();
		virtual bool Write();
		virtual bool DisposeStream();
		void Dispose(byte param_1);
		void Dispose_8(byte param_1);
		virtual bool Read(int* outArray, uint amount);
		bool CompareHash(uint hash);
		void Construct_11(char* name);
		void Construct_12(char* name, uint param_2, uint length);

};
