#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescE : public FileResourceDescAbstract {
	public:
		void * element;
		TwinString fname;

		void Construct(void* element, uint param_2, uint param_3);
		virtual bool IsA();
		virtual void Method1(FileReaderHelper* param_1);
		void Dispose(byte param_1);
		static void EmptyFunction();
		virtual void Read();
		void Construct_6(uint param_1, char* str);
		void Construct_7(uint param_1, char* str, uint param_3, uint param_4);

};
