#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Trigger/TriggerAbstract.h"

class Trigger : public TriggerAbstract {
	public:
		short arg1;
		short arg2;
		short arg3;
		short arg4;

		void Construct();
		void Dispose();
		virtual bool Check(int** param_1);
		void Dispose_3(byte param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);
		static int GetBuilderIndex();

};
