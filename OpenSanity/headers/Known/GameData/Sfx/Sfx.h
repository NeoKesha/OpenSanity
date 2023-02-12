#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/GameData/Sfx/SfxDataStream.h"

class Sfx {
	public:
		uint flags;
		uint index;
		uint flags2;
		TwinString soundPath;
		SfxDataStream someData;
		uint dataSize;
		uint streamPosition;

		void InitSoundPath();
		void Construct();
		void Construct_2(char* param_1);
		void Dispose();
		virtual void InitData(MemoryStream* stream);
		void Write(MemoryStream* stream);
		void Construct_6(MemoryStream* stream);

};
