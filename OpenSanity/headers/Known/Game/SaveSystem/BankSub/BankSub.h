#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class BankSub {
	public:
		FILETIME time;
		TwinString str;
		int unkInt1;
		int unkInt2;

		virtual void CleanUp();
		void Construct();
		void Dispose(byte param_1);
		virtual void BuildPath(TwinString* outStr);
		void Dispose_4(byte param_1);
		virtual void ReadData(MemoryStream* memoryStream);
		virtual void WriteData(MemoryStream* memoryStream);
		virtual void Reset();
		virtual void UpdateTimeStamp();
		virtual void Read(MemoryStream* memoryStream);
		virtual void Write(MemoryStream* memoryStream);
		void FUN_000ad360(AutoClass56* param_1);

};
