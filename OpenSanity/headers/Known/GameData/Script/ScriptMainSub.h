#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class ScriptMainSub {
	public:
		ScriptMainState * currentState;
		TwinString name;
		ScriptMainState * firstState;

		virtual void Write(MemoryStream* stream);
		virtual void Read(MemoryStream* stream);

};
