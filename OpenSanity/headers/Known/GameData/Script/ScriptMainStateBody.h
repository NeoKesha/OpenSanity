#pragma once

#include "headers/OpenSanityGlobal.h"

class ScriptMainStateBody {
	public:
		uint flags;
		PerceptAbstract * percept;
		uint stateToJump;
		ActionAbstract * action;
		ScriptMainStateBody * next;

		void Construct(MemoryStream* stream);
		void Dispose(byte param_1);

};
