#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class ScriptAbstract {
	public:
		int index;
		uint flags;
		TwinString name;

		void Construct();
		virtual bool IsA(int** param_1);
		void Dispose(byte param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		static void SetFlag(ScriptAbstract* param_1);
		static ushort GetId(ScriptAbstract* param_1);
		static int GetBuilderIndex();

};
