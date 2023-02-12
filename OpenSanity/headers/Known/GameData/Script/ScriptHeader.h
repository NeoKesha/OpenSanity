#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Script/ScriptAbstract.h"

class ScriptHeader : public ScriptAbstract {
	public:
		uint amount;
		ScriptHeaderPair * pairArray;

		void Construct();
		virtual void CleanUp();
		virtual void Read(MemoryStream* stream);
		void Dispose(byte param_1);
		static bool IsC();
		virtual void SetFlag(uint param_1);
		virtual void Write(MemoryStream* stream);
		virtual bool IsA(int** param_1);
		static bool IsB();
		static uint GetBuilderIndex();

};
