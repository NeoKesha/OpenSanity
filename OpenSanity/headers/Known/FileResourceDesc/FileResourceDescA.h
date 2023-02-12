#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescA : public FileResourceDescAbstract {
	public:

		void Construct(uint reader);
		void Dispose(byte param_1);
		static bool IsA();
		virtual void Read(uint param_1);
		virtual void Method1(FileReaderHelper* helper);
		static void EmptyFunction();

};
