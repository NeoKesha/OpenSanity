#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescG : public FileResourceDescAbstract {
	public:
		TwinString fname;
		byte * buffer;
		uint size;
		int offset;
		FileReaderHelper * readerHelper;

		void Construct(char* fname, SectionReaderAbstract* reader, uint param_3);
		void Construct_1(char* fname, uint reader, uint param_3, uint offset, uint size);
		void Construct_2(SectionReaderAbstract* reader, uint param_2, int offset, int size);
		void Dispose();
		virtual void Method4();
		virtual byte IsA();
		virtual void Read(int offset);
		virtual void Method1(FileReaderHelper* reader);
		void Dispose_8(byte param_1);
		void Construct_9(uint param_1, uint param_2, int offset, int size);
		void Construct_10(char* fname);
		void Construct_11(uint reader, uint param_2);
		void Construct_12(char* fname, int offset, int size);

};
