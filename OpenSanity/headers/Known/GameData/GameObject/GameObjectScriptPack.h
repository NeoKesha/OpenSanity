#pragma once

#include "headers/OpenSanityGlobal.h"

class GameObjectScriptPack {
	public:
		int cnt;
		ActionAbstract * actionList;

		void Construct();
		void Execute(InstanceNodeInstance* node);
		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);

};
