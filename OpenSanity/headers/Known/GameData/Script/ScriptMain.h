#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Script/ScriptAbstract.h"

class ScriptMain : public ScriptAbstract {
	public:
		ScriptMainSub * sub;

		void Dispose();
		void Dispose_1(byte param_1);
		void Construct();
		static void SetFlag(ScriptMain* param_1);
		virtual void Write(MemoryStream* stream);
		virtual void Read(MemoryStream* stream);
		virtual bool IsA(void** param_1);
		virtual uint GetId();
		static bool IsB();
		static uint GetBuilderIndex();

};
