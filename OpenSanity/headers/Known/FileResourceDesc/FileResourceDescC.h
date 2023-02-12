#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescC : public FileResourceDescAbstract {
	public:
		int offset;
		uint size;
		byte * buffer;

		virtual void Method1(FileReaderHelper* param_1);
		void Dispose(byte param_1);
		virtual void Read(uint offset);
		virtual void IsA();
		void Construct(uint param_1, uint param_2, uint param_3, uint reader, byte param_5);

};
