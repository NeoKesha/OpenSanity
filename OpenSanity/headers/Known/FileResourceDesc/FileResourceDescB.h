#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

class FileResourceDescB : public FileResourceDescAbstract {
	public:
		uint buffer;
		uint size;

		void Construct(SectionReaderAbstract* reader, uint param_2, uint param_3);
		void Dispose(byte param_1);
		static void EmptyFunction();
		static bool IsA();
		virtual void Read(uint offset);
		static void EmptyFunction_5();

};
