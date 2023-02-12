#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescF : public FileResourceDescAbstract {
	public:
		TwinString fname;
		bool flag1;
		bool flag2;

		void Construct(TwinString* dataName, uint param_2, bool flag1, bool flag2);
		virtual void Method1(FileReaderHelper* param_1);
		void Dispose(byte param_1);
		static bool IsA();
		virtual void Read(uint param_1);
		static void EmptyFunction();

};
