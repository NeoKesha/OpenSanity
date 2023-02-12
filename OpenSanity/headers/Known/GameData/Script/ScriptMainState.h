#pragma once

#include "headers/OpenSanityGlobal.h"

class ScriptMainState {
	public:
		uint flags;
		ScriptMainAgrumentsWrapper * arguments;
		ScriptMainStateBody * stateBody;
		ScriptMainState * nextState;

		void Dispose();
		void Construct(MemoryStream* stream);

};
