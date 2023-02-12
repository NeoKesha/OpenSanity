#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescD : public FileResourceDescAbstract {
	public:
		uint size;
		void * buffer;

		void Dispose(byte param_1);
		static bool IsA();
		virtual void Read(uint offset);
		virtual void Method1(FileReaderHelper* param_1);
		void Construct(uint param_1, uint param_2, uint param_3, uint param_4);

};
